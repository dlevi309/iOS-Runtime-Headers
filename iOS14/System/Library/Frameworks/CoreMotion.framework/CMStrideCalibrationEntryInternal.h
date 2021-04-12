/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CMStrideCalibrationEntry.h>

@interface CMStrideCalibrationEntryInternal : CMStrideCalibrationEntry

@property (nonatomic,readonly) unsigned pacebin; 
@property (nonatomic,readonly) double kvalue; 
@property (nonatomic,readonly) double kvalueTrack; 
@property (nonatomic,readonly) double score; 
@property (nonatomic,readonly) int session; 
-(double)score;
-(double)kvalue;
-(int)session;
-(unsigned)pacebin;
-(double)kvalueTrack;
-(id)description;
@end

