/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class PKRulerLayer;

@interface PKRulerView : UIView {

	BOOL _rulerHidden;
	PKRulerLayer* _rulerLayer;

}

@property (nonatomic,retain) PKRulerLayer * rulerLayer;              //@synthesize rulerLayer=_rulerLayer - In the implementation block
@property (assign,nonatomic) BOOL rulerHidden;                       //@synthesize rulerHidden=_rulerHidden - In the implementation block
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(PKRulerLayer *)rulerLayer;
-(void)setRulerLayer:(PKRulerLayer *)arg1 ;
-(BOOL)rulerHidden;
-(void)setRulerHidden:(BOOL)arg1 ;
@end

