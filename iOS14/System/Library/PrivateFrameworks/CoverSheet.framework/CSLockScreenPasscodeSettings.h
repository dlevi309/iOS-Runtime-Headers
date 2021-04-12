/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <PrototypeTools/PTSettings.h>

@interface CSLockScreenPasscodeSettings : PTSettings {

	double _lightenSourceOverColorWhite;
	double _lightenSourceOverColorAlpha;
	double _plusDColorWhite;
	double _plusDColorAlpha;

}

@property (assign,nonatomic) double lightenSourceOverColorWhite;              //@synthesize lightenSourceOverColorWhite=_lightenSourceOverColorWhite - In the implementation block
@property (assign,nonatomic) double lightenSourceOverColorAlpha;              //@synthesize lightenSourceOverColorAlpha=_lightenSourceOverColorAlpha - In the implementation block
@property (assign,nonatomic) double plusDColorWhite;                          //@synthesize plusDColorWhite=_plusDColorWhite - In the implementation block
@property (assign,nonatomic) double plusDColorAlpha;                          //@synthesize plusDColorAlpha=_plusDColorAlpha - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setLightenSourceOverColorWhite:(double)arg1 ;
-(void)setLightenSourceOverColorAlpha:(double)arg1 ;
-(void)setPlusDColorWhite:(double)arg1 ;
-(void)setPlusDColorAlpha:(double)arg1 ;
-(double)lightenSourceOverColorWhite;
-(double)lightenSourceOverColorAlpha;
-(double)plusDColorWhite;
-(double)plusDColorAlpha;
@end

