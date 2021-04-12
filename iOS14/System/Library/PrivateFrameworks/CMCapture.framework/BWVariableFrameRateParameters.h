/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class NSString, NSMutableDictionary, NSDictionary;

@interface BWVariableFrameRateParameters : NSObject {

	NSString* _portType;
	int _motionThreshold;
	NSMutableDictionary* _aeMaxGain;

}

@property (nonatomic,readonly) NSString * portType;                   //@synthesize portType=_portType - In the implementation block
@property (nonatomic,readonly) int motionThreshold;                   //@synthesize motionThreshold=_motionThreshold - In the implementation block
@property (nonatomic,readonly) NSDictionary * aeMaxGain;              //@synthesize aeMaxGain=_aeMaxGain - In the implementation block
-(NSDictionary *)aeMaxGain;
-(NSString *)portType;
-(id)initWithPortType:(id)arg1 sensorIDDictionary:(id)arg2 ;
-(id)description;
-(int)motionThreshold;
-(void)dealloc;
@end

