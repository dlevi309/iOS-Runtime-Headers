/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

