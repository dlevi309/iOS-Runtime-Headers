/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIView.h>

@class CALayer;

@interface UIWebOverflowContentView : UIView {

	CALayer* _webLayer;

}

@property (nonatomic,retain) CALayer * webLayer;              //@synthesize webLayer=_webLayer - In the implementation block
-(CALayer *)webLayer;
-(id)superview;
-(id)initWithLayer:(id)arg1 ;
-(void)willBeRemoved;
-(void)replaceLayer:(id)arg1 ;
-(void)setWebLayer:(CALayer *)arg1 ;
-(void)fixUpViewAfterInsertion;
-(void)_setCachedSubviews:(id)arg1 ;
-(void)dealloc;
@end

