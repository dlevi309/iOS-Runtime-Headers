/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@interface BWBoxedOutputDetectionTimingInfo : NSObject {

	SCD_Struct_BW8 _previousDetectionPTS;
	SCD_Struct_BW8 _previousDetectionDuration;
	SCD_Struct_BW8 _previousNoDetectionPTS;
	int _lastDetectionCount;

}

@property (assign,nonatomic) SCD_Struct_BW8 previousDetectionPTS;                   //@synthesize previousDetectionPTS=_previousDetectionPTS - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW8 previousDetectionDuration;              //@synthesize previousDetectionDuration=_previousDetectionDuration - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW8 previousNoDetectionPTS;                 //@synthesize previousNoDetectionPTS=_previousNoDetectionPTS - In the implementation block
@property (assign,nonatomic) int lastDetectionCount;                                //@synthesize lastDetectionCount=_lastDetectionCount - In the implementation block
-(id)init;
-(SCD_Struct_BW8)previousNoDetectionPTS;
-(void)setPreviousDetectionDuration:(SCD_Struct_BW8)arg1 ;
-(void)setLastDetectionCount:(int)arg1 ;
-(void)setPreviousDetectionPTS:(SCD_Struct_BW8)arg1 ;
-(SCD_Struct_BW8)previousDetectionPTS;
-(int)lastDetectionCount;
-(void)reset;
-(void)setPreviousNoDetectionPTS:(SCD_Struct_BW8)arg1 ;
-(SCD_Struct_BW8)previousDetectionDuration;
@end

