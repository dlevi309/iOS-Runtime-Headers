/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol IMTypingIndicatorLayerProtocol;
@class CALayer, CKBaseLayer;

@interface CKTypingView : UIView {

	CALayer*<IMTypingIndicatorLayerProtocol> _indicatorLayer;
	CKBaseLayer* _baseLayer;

}

@property (nonatomic,retain) CALayer*<IMTypingIndicatorLayerProtocol> indicatorLayer;              //@synthesize indicatorLayer=_indicatorLayer - In the implementation block
@property (nonatomic,retain) CKBaseLayer * baseLayer;                                              //@synthesize baseLayer=_baseLayer - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CKBaseLayer *)baseLayer;
-(void)setBaseLayer:(CKBaseLayer *)arg1 ;
-(void)setIndicatorLayer:(CALayer*<IMTypingIndicatorLayerProtocol>)arg1 ;
-(CALayer*<IMTypingIndicatorLayerProtocol>)indicatorLayer;
@end

