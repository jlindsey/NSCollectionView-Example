//
//  AppController.h
//  CollectionView
//
//  Created by Josh Lindsey on 8/14/09.
//  Copyright 2009 Cloudspace. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "Person.h"

@interface AppController : NSObject {
	IBOutlet NSArrayController *people;
}
- (IBAction)newPerson:(id)sender;
@end
