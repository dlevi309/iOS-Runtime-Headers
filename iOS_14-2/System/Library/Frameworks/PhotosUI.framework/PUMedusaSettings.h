/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXSettings.h>

@interface PUMedusaSettings : PXSettings {

	double __desiredWidth;
	double __widthDelay;
	double __testStartDelay;
	double __testInterval;
	double __testIncrement;

}

@property (assign,nonatomic) double _desiredWidth;                //@synthesize _desiredWidth=__desiredWidth - In the implementation block
@property (assign,nonatomic) double _widthDelay;                  //@synthesize _widthDelay=__widthDelay - In the implementation block
@property (assign,nonatomic) double _testStartDelay;              //@synthesize _testStartDelay=__testStartDelay - In the implementation block
@property (assign,nonatomic) double _testInterval;                //@synthesize _testInterval=__testInterval - In the implementation block
@property (assign,nonatomic) double _testIncrement;               //@synthesize _testIncrement=__testIncrement - In the implementation block
+(id)sharedInstance;
+(void)runSizeTest;
+(id)settingsControllerModule;
-(id)parentSettings;
-(double)_desiredWidth;
-(double)_testIncrement;
-(void)set_testStartDelay:(double)arg1 ;
-(void)set_widthDelay:(double)arg1 ;
-(void)set_desiredWidth:(double)arg1 ;
-(double)_testInterval;
-(double)_widthDelay;
-(double)_testStartDelay;
-(void)set_testInterval:(double)arg1 ;
-(void)set_testIncrement:(double)arg1 ;
@end

