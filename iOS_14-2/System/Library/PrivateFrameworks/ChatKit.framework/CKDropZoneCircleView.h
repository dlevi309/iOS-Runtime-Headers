/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class CAShapeLayer;

@interface CKDropZoneCircleView : UIView {

	BOOL _isAnimating;
	CAShapeLayer* _dropZoneShapeLayer;

}

@property (nonatomic,readonly) BOOL isAnimating;                             //@synthesize isAnimating=_isAnimating - In the implementation block
@property (nonatomic,retain) CAShapeLayer * dropZoneShapeLayer;              //@synthesize dropZoneShapeLayer=_dropZoneShapeLayer - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)spinAnimation;
-(void)_updateShapeLayerStrokeColor;
-(CAShapeLayer *)dropZoneShapeLayer;
-(void)setDropZoneShapeLayer:(CAShapeLayer *)arg1 ;
-(void)layoutSubviews;
-(void)startAnimating;
-(void)stopAnimating;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)isAnimating;
@end

