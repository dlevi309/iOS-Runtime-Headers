/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/


@class PFSlowMotionRampConfiguration;

@interface PFSlowMotionConfiguration : NSObject {

	float _volumeDuringSlowMotion;
	float _volumeDuringRampToSlowMotion;
	PFSlowMotionRampConfiguration* _rampDown;
	PFSlowMotionRampConfiguration* _rampUp;

}

@property (nonatomic,readonly) float volumeDuringSlowMotion;                                 //@synthesize volumeDuringSlowMotion=_volumeDuringSlowMotion - In the implementation block
@property (nonatomic,readonly) float volumeDuringRampToSlowMotion;                           //@synthesize volumeDuringRampToSlowMotion=_volumeDuringRampToSlowMotion - In the implementation block
@property (nonatomic,retain,readonly) PFSlowMotionRampConfiguration * rampDown;              //@synthesize rampDown=_rampDown - In the implementation block
@property (nonatomic,retain,readonly) PFSlowMotionRampConfiguration * rampUp;                //@synthesize rampUp=_rampUp - In the implementation block
-(PFSlowMotionRampConfiguration *)rampUp;
-(id)init;
-(PFSlowMotionRampConfiguration *)rampDown;
-(float)volumeDuringSlowMotion;
-(float)volumeDuringRampToSlowMotion;
@end

