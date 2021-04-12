/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
*/

@class NSDate;


@protocol FIIntervalController
@property (nonatomic,readonly) BOOL intervalComplete; 
@property (nonatomic,readonly) NSDate * intervalEndDate; 
@property (nonatomic,readonly) BOOL allSlicesFinalized; 
@required
-(BOOL)allSlicesFinalized;
-(BOOL)intervalComplete;
-(NSDate *)intervalEndDate;

@end

