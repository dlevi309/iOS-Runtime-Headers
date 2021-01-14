/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
*/

#import <UIKitCore/UITapGestureRecognizer.h>

@class RTTUIAbbreviationView;

@interface RTTAbbreviationTapGestureRecognizer : UITapGestureRecognizer {

	RTTUIAbbreviationView* _abbrevationView;

}

@property (assign,nonatomic,__weak) RTTUIAbbreviationView * abbrevationView;              //@synthesize abbrevationView=_abbrevationView - In the implementation block
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)ignoreTouch:(id)arg1 forEvent:(id)arg2 ;
-(RTTUIAbbreviationView *)abbrevationView;
-(void)setAbbrevationView:(RTTUIAbbreviationView *)arg1 ;
@end

