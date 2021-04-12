/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)preferredWhitePointAdaptivityStyle;
-(id)init;
-(void)commonInit;
-(void)didReceiveMemoryWarning;
-(UIView*<PHContentUnavailable>)contentUnavailableView;
-(void)setContentUnavailableView:(UIView*<PHContentUnavailable>)arg1 ;
-(long long)whitePointAdaptivityStyle;
-(id)initWithCoder:(id)arg1 ;
-(void)setWhitePointAdaptivityStyle:(long long)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setContentUnavailable:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setContentUnavailable:(BOOL)arg1 ;
-(BOOL)contentUnavailable;
-(void)setContentUnavailableViewTitle:(NSString *)arg1 ;
-(void)makeUIForDefaultPNG;
-(NSString *)contentUnavailableViewTitle;
@end

