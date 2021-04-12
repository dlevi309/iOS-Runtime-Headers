/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@interface WKDeferringGestureRecognizer : UIGestureRecognizer {

	WeakObjCPtr<id<WKDeferringGestureRecognizerDelegate> > _deferringGestureDelegate;

}

@property (nonatomic,__weak,readonly) id<WKDeferringGestureRecognizerDelegate> deferringGestureDelegate; 
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)setDefaultPrevented:(BOOL)arg1 ;
-(BOOL)shouldDeferGestureRecognizer:(id)arg1 ;
-(id)initWithDeferringGestureDelegate:(id)arg1 ;
-(id<WKDeferringGestureRecognizerDelegate>)deferringGestureDelegate;
@end

