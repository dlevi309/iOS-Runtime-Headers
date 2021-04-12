/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSData, RegisteredPreKey;

@interface SenderPublicIdentity : NSManagedObject

@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSString * destinationHash; 
@property (nonatomic,retain) NSData * skippedCounters; 
@property (assign,nonatomic) int upperBufferIndex; 
@property (nonatomic,retain) RegisteredPreKey * messagedKey; 
+(id)fetchRequest;
@end

