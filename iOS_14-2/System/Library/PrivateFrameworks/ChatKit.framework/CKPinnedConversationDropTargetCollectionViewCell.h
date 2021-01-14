/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class CKDropZoneCircleView, UILabel, CKPinnedConversationView;

@interface CKPinnedConversationDropTargetCollectionViewCell : UICollectionViewCell {

	BOOL _shouldHideLabel;
	BOOL _shouldAnimateCircle;
	long long _layoutStyle;
	CKDropZoneCircleView* _dropZoneCircleView;
	UILabel* _instructionLabel;
	CKPinnedConversationView* _prototypeConversationView;

}

@property (nonatomic,retain) CKDropZoneCircleView * dropZoneCircleView;                         //@synthesize dropZoneCircleView=_dropZoneCircleView - In the implementation block
@property (nonatomic,retain) UILabel * instructionLabel;                                        //@synthesize instructionLabel=_instructionLabel - In the implementation block
@property (nonatomic,retain) CKPinnedConversationView * prototypeConversationView;              //@synthesize prototypeConversationView=_prototypeConversationView - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                             //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) BOOL shouldHideLabel;                                              //@synthesize shouldHideLabel=_shouldHideLabel - In the implementation block
@property (assign,nonatomic) BOOL shouldAnimateCircle;                                          //@synthesize shouldAnimateCircle=_shouldAnimateCircle - In the implementation block
+(id)uniqueIdentifier;
+(id)reuseIdentifier;
+(id)uniqueIdentifierForDropTargetAtItemIndex:(long long)arg1 ;
-(void)setLayoutStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)layoutStyle;
-(UILabel *)instructionLabel;
-(void)_updateInstructionLabelColor;
-(BOOL)shouldHideLabel;
-(BOOL)shouldAnimateCircle;
-(CKDropZoneCircleView *)dropZoneCircleView;
-(void)setDropZoneCircleView:(CKDropZoneCircleView *)arg1 ;
-(void)setInstructionLabel:(UILabel *)arg1 ;
-(CKPinnedConversationView *)prototypeConversationView;
-(void)setPrototypeConversationView:(CKPinnedConversationView *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setShouldAnimateCircle:(BOOL)arg1 ;
-(void)setShouldHideLabel:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateFont;
@end

