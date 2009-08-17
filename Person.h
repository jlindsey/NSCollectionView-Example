//
//  Person.h
//  CollectionView
//
//  Created by Josh Lindsey on 8/14/09.
//  Copyright 2009 Cloudspace. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface Person : NSObject {
	NSString *firstName, *lastName;
}
@property (readwrite, retain) NSString *firstName, *lastName;
@end
