/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface RegisteredPreKey : NSManagedObject

@property (nonatomic,copy) NSString * tag; 
@property (nonatomic,retain) NSSet * senders; 
+(id)fetchRequest;
@end

