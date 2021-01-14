/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusFoundation/OFUIView.h>

@class OKWidgetView;

@interface OKWidgetContainerView : OFUIView {

	OKWidgetView* _widgetView;

}

@property (assign,nonatomic) OKWidgetView * widgetView; 
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(OKWidgetView *)widgetView;
-(void)setWidgetView:(OKWidgetView *)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)dealloc;
@end

