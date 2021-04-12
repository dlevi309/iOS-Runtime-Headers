/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIDocumentPasswordViewDelegate.h>

@class NSString;

@interface WKPasswordView : UIView <UIDocumentPasswordViewDelegate> {

	RetainPtr<NSString>* _documentName;
	RetainPtr<UIScrollView>* _scrollView;
	RetainPtr<UIDocumentPasswordView>* _passwordView;
	double _savedMinimumZoomScale;
	double _savedMaximumZoomScale;
	double _savedZoomScale;
	CGSize _savedContentSize;
	RetainPtr<UIColor>* _savedBackgroundColor;
	/*^block*/id _userDidEnterPassword;

}

@property (nonatomic,readonly) NSString * documentName; 
@property (nonatomic,copy) id userDidEnterPassword;                  //@synthesize userDidEnterPassword=_userDidEnterPassword - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(void)_keyboardDidShow:(id)arg1 ;
-(void)hide;
-(void)didBeginEditingPassword:(id)arg1 inView:(id)arg2 ;
-(void)didEndEditingPassword:(id)arg1 inView:(id)arg2 ;
-(void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 documentName:(id)arg2 ;
-(void)setUserDidEnterPassword:(id)arg1 ;
-(void)showInScrollView:(id)arg1 ;
-(void)showPasswordFailureAlert;
-(NSString *)documentName;
-(id)userDidEnterPassword;
@end

