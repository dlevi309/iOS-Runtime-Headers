/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSUUID;

@interface _DKSyncPeerMO : NSManagedObject

@property (nonatomic,copy) NSString * cloudID; 
@property (nonatomic,copy) NSString * deviceID; 
@property (nonatomic,copy) NSDate * lastSeenDate; 
@property (nonatomic,copy) NSString * model; 
@property (nonatomic,copy) NSString * rapportID; 
@property (nonatomic,copy) NSUUID * uuid; 
@property (nonatomic,copy) NSString * version; 
+(id)fetchRequest;
@end

