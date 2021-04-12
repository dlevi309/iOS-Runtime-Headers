/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBKeyView.h>

@class UIView;

@interface UIKBCandidateView : UIKBKeyView {

	SCD_Struct_UI84 _visualStyling;
	UIView* _candidateKey;

}

@property (assign,nonatomic) SCD_Struct_UI84 visualStyling;              //@synthesize visualStyling=_visualStyling - In the implementation block
@property (nonatomic,retain) UIView * candidateKey;                      //@synthesize candidateKey=_candidateKey - In the implementation block
-(void)dealloc;
-(void)displayLayer:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(SCD_Struct_UI84)visualStyling;
-(id)candidateList;
-(UIView *)candidateKey;
-(void)setVisualStyling:(SCD_Struct_UI84)arg1 ;
-(BOOL)isTenKey;
-(void)updateCandidateKey;
-(void)clearCandidateKey;
-(void)setCandidateKey:(UIView *)arg1 ;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
@end

