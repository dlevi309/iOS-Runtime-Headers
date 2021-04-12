/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBUIEmergencyCallServiceInterface.h>

@class UIColor;

@interface SBUIEmergencyCallServiceViewController : UIViewController <SBUIEmergencyCallServiceInterface> {

	long long _backgroundStyle;
	UIColor* _tintColor;

}

@property (assign,nonatomic) long long backgroundStyle;              //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                  //@synthesize tintColor=_tintColor - In the implementation block
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)backgroundStyle:(/*^block*/id)arg1 ;
-(void)noteTintColorForBackgroundStyleChanged:(id)arg1 ;
-(void)noteViewMovedOffscreenTemporarily;
-(UIColor *)tintColor;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

