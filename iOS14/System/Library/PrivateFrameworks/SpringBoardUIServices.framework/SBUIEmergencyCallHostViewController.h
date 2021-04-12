/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SBUIEmergencyCallHostInterface.h>

@class _UIBackdropView, UIColor;

@interface SBUIEmergencyCallHostViewController : _UIRemoteViewController <SBUIEmergencyCallHostInterface> {

	_UIBackdropView* _blurView;
	UIColor* _tintColor;
	long long _backgroundStyle;
	double _blurRadius;
	BOOL _blursSelf;

}

@property (assign,nonatomic) long long backgroundStyle;              //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                    //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) double blurRadius;                      //@synthesize blurRadius=_blurRadius - In the implementation block
@property (assign,nonatomic) BOOL blursSelf;                         //@synthesize blursSelf=_blursSelf - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(void)requestEmergencyCallControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)setBlurRadius:(double)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(long long)backgroundStyle;
-(void)viewWillAppear:(BOOL)arg1 ;
-(double)blurRadius;
-(void)setBackgroundStyle:(long long)arg1 ;
-(id)tintColorForBackgroundStyle:(long long)arg1 outBlurRadius:(double*)arg2 ;
-(void)setBlursSelf:(BOOL)arg1 ;
-(void)_createAndAddBlurViewIfNecessary;
-(BOOL)blursSelf;
-(UIColor *)tintColor;
-(void)dismiss;
@end

