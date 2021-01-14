/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@interface PSBrightnessController : NSObject {

	/*^block*/id _isTracking;
	/*^block*/id _brightnessChangedExternally;

}

@property (nonatomic,copy) id isTracking;                               //@synthesize isTracking=_isTracking - In the implementation block
@property (nonatomic,copy) id brightnessChangedExternally;              //@synthesize brightnessChangedExternally=_brightnessChangedExternally - In the implementation block
+(id)sharedController;
-(id)isTracking;
-(void)setIsTracking:(id)arg1 ;
-(id)brightnessChangedExternally;
-(void)setBrightnessChangedExternally:(id)arg1 ;
@end

