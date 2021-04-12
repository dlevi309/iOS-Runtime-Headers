/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

