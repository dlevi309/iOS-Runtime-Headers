/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKitCore/UIButton.h>

@class CAShapeLayer;

@interface ICDocCamToolbarFilterButton : UIButton {

	BOOL _compact;
	BOOL _myHighlighted;
	CAShapeLayer* _maskLayer;
	CGRect _currentBounds;

}

@property (assign,nonatomic) CGRect currentBounds;                  //@synthesize currentBounds=_currentBounds - In the implementation block
@property (assign,nonatomic) BOOL myHighlighted;                    //@synthesize myHighlighted=_myHighlighted - In the implementation block
@property (nonatomic,retain) CAShapeLayer * maskLayer;              //@synthesize maskLayer=_maskLayer - In the implementation block
@property (assign,nonatomic) BOOL compact;                          //@synthesize compact=_compact - In the implementation block
+(id)buttonWithType:(long long)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)compact;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setCompact:(BOOL)arg1 ;
-(id)defaultTintColor;
-(CAShapeLayer *)maskLayer;
-(void)setMaskLayer:(CAShapeLayer *)arg1 ;
-(id)preferredTintColor;
-(void)postButtonWithTypeInit;
-(void)setCurrentBounds:(CGRect)arg1 ;
-(CGRect)currentBounds;
-(void)updateInvertedImage;
-(BOOL)myHighlighted;
-(void)setMyHighlighted:(BOOL)arg1 ;
-(void)setDefaultTintColor:(id)arg1 ;
-(void)setDarkenedTintColor:(id)arg1 ;
-(id)darkenedTintColor;
@end

