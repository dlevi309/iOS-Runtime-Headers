/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAcknowledgmentBalloonView.h>

@protocol CKGradientReferenceView;
@class CKGradientView, UIImageView, UIView;

@interface CKAggregateAcknowledgmentBalloonView : CKAcknowledgmentBalloonView {

	CKGradientView* _gradientView;
	UIImageView* _backgroundView;
	UIImageView* _solidPartsView;
	char _gradientColor;
	char _solidColor;
	UIView*<CKGradientReferenceView> _gradientReferenceView;

}

@property (assign,nonatomic,__weak) UIView*<CKGradientReferenceView> gradientReferenceView;              //@synthesize gradientReferenceView=_gradientReferenceView - In the implementation block
@property (assign,nonatomic) char gradientColor;                                                         //@synthesize gradientColor=_gradientColor - In the implementation block
@property (assign,nonatomic) char solidColor;                                                            //@synthesize solidColor=_solidColor - In the implementation block
+(id)_middleBubbleSquareImageWithTraitCollection:(id)arg1 ;
+(id)_topBubbleSquareImageWithTraitCollection:(id)arg1 ;
-(void)prepareForDisplay;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)configureForAggregateAcknowledgmentChatItem:(id)arg1 ;
-(void)prepareForReuse;
-(char)solidColor;
-(void)setGradientReferenceView:(UIView*<CKGradientReferenceView>)arg1 ;
-(void)layoutSubviews;
-(UIView*<CKGradientReferenceView>)gradientReferenceView;
-(char)gradientColor;
-(void)setGradientColor:(char)arg1 ;
-(void)setSolidColor:(char)arg1 ;
@end

