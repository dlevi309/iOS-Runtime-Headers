/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


@class NSDictionary;

@interface CIDualRedEyeRepairTuning : NSObject {

	NSDictionary* repairTuning;
	NSDictionary* sessionTuning;

}

@property (nonatomic,retain) NSDictionary * repairTuning; 
@property (nonatomic,retain) NSDictionary * sessionTuning; 
+(id)repairParametersForTuning:(unsigned long long)arg1 ;
+(id)sessionParametersForTuning:(unsigned long long)arg1 ;
+(id)defaultRepairParameters;
+(id)defaultSessionParameters;
-(void)dealloc;
-(id)initWithTuning:(unsigned long long)arg1 ;
-(NSDictionary *)repairTuning;
-(NSDictionary *)sessionTuning;
-(void)setTuningParametersByPortType:(id)arg1 withCameraMetadata:(id)arg2 ;
-(void)setRepairTuning:(NSDictionary *)arg1 ;
-(void)setSessionTuning:(NSDictionary *)arg1 ;
-(unsigned long long)tuningFromCameraModel:(id)arg1 portType:(id)arg2 ;
-(void)updateWithCaptureSetup:(id)arg1 portType:(id)arg2 ;
@end

