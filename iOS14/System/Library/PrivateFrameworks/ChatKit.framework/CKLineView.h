/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class CABackdropLayer, CAShapeLayer;

@interface CKLineView : UIView {

	BOOL _shouldUseDarkFSMStrokeColor;
	CABackdropLayer* _backdropFilterLayer;
	CAShapeLayer* _lineShapeLayer;

}

@property (nonatomic,retain) CABackdropLayer * backdropFilterLayer;              //@synthesize backdropFilterLayer=_backdropFilterLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * lineShapeLayer;                      //@synthesize lineShapeLayer=_lineShapeLayer - In the implementation block
@property (assign,nonatomic) BOOL shouldUseDarkFSMStrokeColor;                   //@synthesize shouldUseDarkFSMStrokeColor=_shouldUseDarkFSMStrokeColor - In the implementation block
-(void)clearFilters;
-(void)setBackdropFilterLayer:(CABackdropLayer *)arg1 ;
-(CABackdropLayer *)backdropFilterLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(CAShapeLayer *)lineShapeLayer;
-(void)setLineShapeLayer:(CAShapeLayer *)arg1 ;
-(void)setShouldUseDarkFSMStrokeColor:(BOOL)arg1 ;
-(BOOL)shouldUseDarkFSMStrokeColor;
-(void)addFilter:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
@end

