/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_middleBubbleSquareImage;
+(id)_topBubbleSquareImage;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForDisplay;
-(char)gradientColor;
-(void)setGradientReferenceView:(UIView*<CKGradientReferenceView>)arg1 ;
-(UIView*<CKGradientReferenceView>)gradientReferenceView;
-(void)setGradientColor:(char)arg1 ;
-(void)setSolidColor:(char)arg1 ;
-(char)solidColor;
-(void)configureForAggregateAcknowledgmentChatItem:(id)arg1 ;
@end

