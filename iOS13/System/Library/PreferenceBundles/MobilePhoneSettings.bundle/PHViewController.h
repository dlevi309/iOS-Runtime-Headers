/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
*/

#import <UIKitCore/UIViewController.h>

@protocol PHContentUnavailable;
@class UIView, NSString;

@interface PHViewController : UIViewController {

	BOOL _contentUnavailable;
	UIView*<PHContentUnavailable> _contentUnavailableView;
	NSString* _contentUnavailableViewTitle;
	long long _whitePointAdaptivityStyle;

}

@property (assign,nonatomic) long long whitePointAdaptivityStyle;                               //@synthesize whitePointAdaptivityStyle=_whitePointAdaptivityStyle - In the implementation block
@property (assign,nonatomic) BOOL contentUnavailable;                                           //@synthesize contentUnavailable=_contentUnavailable - In the implementation block
@property (nonatomic,retain) UIView*<PHContentUnavailable> contentUnavailableView;              //@synthesize contentUnavailableView=_contentUnavailableView - In the implementation block
@property (nonatomic,copy) NSString * contentUnavailableViewTitle;                              //@synthesize contentUnavailableViewTitle=_contentUnavailableViewTitle - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)commonInit;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)preferredWhitePointAdaptivityStyle;
-(void)setWhitePointAdaptivityStyle:(long long)arg1 ;
-(long long)whitePointAdaptivityStyle;
-(void)didReceiveMemoryWarning;
-(void)setContentUnavailable:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIView*<PHContentUnavailable>)contentUnavailableView;
-(void)setContentUnavailable:(BOOL)arg1 ;
-(BOOL)contentUnavailable;
-(void)setContentUnavailableView:(UIView*<PHContentUnavailable>)arg1 ;
-(void)setContentUnavailableViewTitle:(NSString *)arg1 ;
-(void)makeUIForDefaultPNG;
-(NSString *)contentUnavailableViewTitle;
@end

