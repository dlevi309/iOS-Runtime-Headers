/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNTracePlayerTimelineStreamObjectType.h>

@class NSString;

@interface MNTraceMotionDataRow : NSObject <MNTracePlayerTimelineStreamObjectType> {

	double _timestamp;
	unsigned long long _motionType;
	unsigned long long _exitType;
	unsigned long long _confidence;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double position; 
@property (assign,nonatomic) double timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) unsigned long long motionType;              //@synthesize motionType=_motionType - In the implementation block
@property (assign,nonatomic) unsigned long long exitType;                //@synthesize exitType=_exitType - In the implementation block
@property (assign,nonatomic) unsigned long long confidence;              //@synthesize confidence=_confidence - In the implementation block
-(unsigned long long)confidence;
-(double)timestamp;
-(double)position;
-(void)setTimestamp:(double)arg1 ;
-(void)setConfidence:(unsigned long long)arg1 ;
-(unsigned long long)exitType;
-(unsigned long long)motionType;
-(void)setExitType:(unsigned long long)arg1 ;
-(void)setMotionType:(unsigned long long)arg1 ;
@end

