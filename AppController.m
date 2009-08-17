//
//  AppController.m
//  CollectionView
//
//  Created by Josh Lindsey on 8/14/09.
//  Copyright 2009 Cloudspace. All rights reserved.
//

#import "AppController.h"


@implementation AppController
- (IBAction)newPerson:(id)sender
{
	Person *person = [[Person alloc] init];
	[person setFirstName:@"John"];
	[person setLastName:@"Smith"];
	
	[people addObject:person];
}
@end
