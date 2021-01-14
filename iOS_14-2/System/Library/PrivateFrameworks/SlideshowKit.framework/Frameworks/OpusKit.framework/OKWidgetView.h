/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKWidgetViewProxy.h>

@class OKRoundProgressView;

@interface OKWidgetView : OKWidgetViewProxy {

	OKRoundProgressView* _roundProgressView;

}
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)commonInit;
-(void)dealloc;
-(void)setActivityIndicatorVisible:(BOOL)arg1 ;
-(BOOL)isActivityIndicatorVisible;
-(BOOL)downloadIndicatorEnabled;
-(BOOL)_canRespondToEventWithPoint:(CGPoint)arg1 ;
-(void)updateProgressIndicator:(double)arg1 ;
@end

