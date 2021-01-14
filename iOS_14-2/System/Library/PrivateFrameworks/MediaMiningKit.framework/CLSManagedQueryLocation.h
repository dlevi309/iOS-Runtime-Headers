/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

