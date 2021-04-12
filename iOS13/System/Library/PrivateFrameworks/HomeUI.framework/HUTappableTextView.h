/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UITextView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol HUTappableTextViewDelegate;
@class UITapGestureRecognizer, NSString;

@interface HUTappableTextView : UITextView <UIGestureRecognizerDelegate> {

	id<HUTappableTextViewDelegate> _tappableTextViewDelegate;
	UITapGestureRecognizer* _tapRecognizer;

}

@property (nonatomic,retain) UITapGestureRecognizer * tapRecognizer;                                      //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<HUTappableTextViewDelegate> tappableTextViewDelegate;              //@synthesize tappableTextViewDelegate=_tappableTextViewDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UITapGestureRecognizer *)tapRecognizer;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(void)setTappableTextViewDelegate:(id<HUTappableTextViewDelegate>)arg1 ;
-(void)configureTapRecognizer;
-(id<HUTappableTextViewDelegate>)tappableTextViewDelegate;
@end

