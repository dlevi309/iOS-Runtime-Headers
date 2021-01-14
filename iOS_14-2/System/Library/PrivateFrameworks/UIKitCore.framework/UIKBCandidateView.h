/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBKeyView.h>

@class UIView;

@interface UIKBCandidateView : UIKBKeyView {

	SCD_Struct_UI94 _visualStyling;
	UIView* _candidateKey;

}

@property (assign,nonatomic) SCD_Struct_UI94 visualStyling;              //@synthesize visualStyling=_visualStyling - In the implementation block
@property (nonatomic,retain) UIView * candidateKey;                      //@synthesize candidateKey=_candidateKey - In the implementation block
-(UIView *)candidateKey;
-(BOOL)isTenKey;
-(void)updateCandidateKey;
-(void)clearCandidateKey;
-(void)setCandidateKey:(UIView *)arg1 ;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(id)candidateList;
-(void)displayLayer:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)setVisualStyling:(SCD_Struct_UI94)arg1 ;
-(SCD_Struct_UI94)visualStyling;
-(void)dealloc;
@end

