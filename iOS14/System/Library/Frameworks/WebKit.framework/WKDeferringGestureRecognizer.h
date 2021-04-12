/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@interface WKDeferringGestureRecognizer : UIGestureRecognizer {

	WeakObjCPtr<id<WKDeferringGestureRecognizerDelegate> > _deferringGestureDelegate;

}

@property (nonatomic,__weak,readonly) id<WKDeferringGestureRecognizerDelegate> deferringGestureDelegate; 
-(void)setDefaultPrevented:(BOOL)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)shouldDeferGestureRecognizer:(id)arg1 ;
-(id<WKDeferringGestureRecognizerDelegate>)deferringGestureDelegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithDeferringGestureDelegate:(id)arg1 ;
@end

