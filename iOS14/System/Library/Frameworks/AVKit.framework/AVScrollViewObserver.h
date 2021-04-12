/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <libobjc.A.dylib/_UIScrollViewScrollObserver.h>

@protocol AVScrollViewObserverContentView;
@class UIView, NSHashTable, NSTimer, NSString;

@interface AVScrollViewObserver : NSObject <_UIScrollViewScrollObserver> {

	BOOL _scrolling;
	BOOL _scrollingQuickly;
	UIView*<AVScrollViewObserverContentView> _observer;
	NSHashTable* _observedScrollViews;
	NSTimer* _scrollingDidEndTimer;

}

@property (assign,nonatomic,__weak) UIView*<AVScrollViewObserverContentView> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,copy) NSHashTable * observedScrollViews;                                       //@synthesize observedScrollViews=_observedScrollViews - In the implementation block
@property (assign,getter=isScrolling,nonatomic) BOOL scrolling;                                     //@synthesize scrolling=_scrolling - In the implementation block
@property (assign,getter=isScrollingQuickly,nonatomic) BOOL scrollingQuickly;                       //@synthesize scrollingQuickly=_scrollingQuickly - In the implementation block
@property (nonatomic,retain) NSTimer * scrollingDidEndTimer;                                        //@synthesize scrollingDidEndTimer=_scrollingDidEndTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setObserver:(UIView*<AVScrollViewObserverContentView>)arg1 ;
-(UIView*<AVScrollViewObserverContentView>)observer;
-(void)updateObservedScrollViews;
-(void)_updateScrollingStatus;
-(BOOL)isScrollingQuickly;
-(void)setScrollingQuickly:(BOOL)arg1 ;
-(NSHashTable *)observedScrollViews;
-(void)setObservedScrollViews:(NSHashTable *)arg1 ;
-(NSTimer *)scrollingDidEndTimer;
-(void)setScrollingDidEndTimer:(NSTimer *)arg1 ;
-(id)initWithContentView:(id)arg1 ;
-(void)setScrolling:(BOOL)arg1 ;
-(void)_observeScrollViewDidScroll:(id)arg1 ;
-(BOOL)isScrolling;
-(void)dealloc;
@end

