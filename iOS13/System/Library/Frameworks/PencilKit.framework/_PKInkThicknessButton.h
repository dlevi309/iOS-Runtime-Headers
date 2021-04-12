/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIControl.h>

@class NSString, UIImageView, UIImage;

@interface _PKInkThicknessButton : UIControl {

	NSString* _inkIdentifier;
	double _weight;
	UIImageView* _inkImageView;
	UIImage* _assetImage;
	CGRect _lastRenderedBounds;

}

@property (nonatomic,retain) UIImageView * inkImageView;              //@synthesize inkImageView=_inkImageView - In the implementation block
@property (assign,nonatomic) CGRect lastRenderedBounds;               //@synthesize lastRenderedBounds=_lastRenderedBounds - In the implementation block
@property (nonatomic,retain) UIImage * assetImage;                    //@synthesize assetImage=_assetImage - In the implementation block
@property (nonatomic,readonly) NSString * inkIdentifier;              //@synthesize inkIdentifier=_inkIdentifier - In the implementation block
@property (nonatomic,readonly) double weight;                         //@synthesize weight=_weight - In the implementation block
+(CGSize)buttonSize;
+(id)backgroundColorForIsSelected:(BOOL)arg1 highlighted:(BOOL)arg2 ;
+(id)imageTintColorForIsSelected:(BOOL)arg1 highlighted:(BOOL)arg2 ;
-(double)weight;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithInkIdentifier:(id)arg1 weight:(double)arg2 ;
-(NSString *)inkIdentifier;
-(CGRect)lastRenderedBounds;
-(void)setLastRenderedBounds:(CGRect)arg1 ;
-(void)didTouchUpInside;
-(UIImageView *)inkImageView;
-(void)_animateToHighlightedState:(BOOL)arg1 ;
-(void)setInkImageView:(UIImageView *)arg1 ;
-(UIImage *)assetImage;
-(void)setAssetImage:(UIImage *)arg1 ;
@end

