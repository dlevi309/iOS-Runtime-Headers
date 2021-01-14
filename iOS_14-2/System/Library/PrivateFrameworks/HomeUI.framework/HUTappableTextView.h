/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UITapGestureRecognizer *)tapRecognizer;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setTappableTextViewDelegate:(id<HUTappableTextViewDelegate>)arg1 ;
-(void)configureTapRecognizer;
-(id<HUTappableTextViewDelegate>)tappableTextViewDelegate;
@end

