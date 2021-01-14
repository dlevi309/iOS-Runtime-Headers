/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIScrollView, UIView, UILabel;

@interface VTUIPagedLabel : UIView {

	UIScrollView* _scrollView;
	UIView* _instructionContainerLeft;
	UIView* _instructionContainerRight;
	UILabel* _instructionLabelLeft;
	UILabel* _instructionLabelRight;
	BOOL _isProximity;

}
-(void)clear;
-(void)setText:(id)arg1 ;
-(void)setupViews;
-(void)slideInText:(id)arg1 afterDelay:(double)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 isProximity:(BOOL)arg2 ;
@end

