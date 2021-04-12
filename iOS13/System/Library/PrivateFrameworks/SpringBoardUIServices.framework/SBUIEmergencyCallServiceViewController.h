/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UIColor *)tintColor;
-(void)setBackgroundStyle:(long long)arg1 ;
-(long long)backgroundStyle;
-(void)backgroundStyle:(/*^block*/id)arg1 ;
-(void)noteTintColorForBackgroundStyleChanged:(id)arg1 ;
-(void)noteViewMovedOffscreenTemporarily;
@end

