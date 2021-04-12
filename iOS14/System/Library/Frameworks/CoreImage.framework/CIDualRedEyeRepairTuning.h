/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


@class NSDictionary;

@interface CIDualRedEyeRepairTuning : NSObject {

	NSDictionary* repairTuning;
	NSDictionary* sessionTuning;

}

@property (nonatomic,retain) NSDictionary * repairTuning; 
@property (nonatomic,retain) NSDictionary * sessionTuning; 
+(id)sessionParametersForTuning:(unsigned long long)arg1 ;
+(id)defaultRepairParameters;
+(id)repairParametersForTuning:(unsigned long long)arg1 ;
+(id)defaultSessionParameters;
-(id)initWithTuning:(unsigned long long)arg1 ;
-(NSDictionary *)repairTuning;
-(NSDictionary *)sessionTuning;
-(void)setTuningParametersByPortType:(id)arg1 withCameraMetadata:(id)arg2 ;
-(void)setRepairTuning:(NSDictionary *)arg1 ;
-(unsigned long long)tuningFromCameraModel:(id)arg1 portType:(id)arg2 ;
-(void)setSessionTuning:(NSDictionary *)arg1 ;
-(void)updateWithCaptureSetup:(id)arg1 portType:(id)arg2 ;
-(void)dealloc;
@end

