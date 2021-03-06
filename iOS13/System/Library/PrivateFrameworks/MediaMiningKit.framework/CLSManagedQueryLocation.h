/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet;

@interface CLSManagedQueryLocation : NSManagedObject

@property (assign,nonatomic) double updateTimestamp; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) double radius; 
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,retain) NSSet * publicEvents; 
+(id)entityName;
@end

