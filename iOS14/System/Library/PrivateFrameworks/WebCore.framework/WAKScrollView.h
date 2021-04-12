/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/WAKView.h>
#import <WebCore/WebCoreFrameScrollView.h>

@class WAKView, WAKClipView;

@interface WAKScrollView : WAKView <WebCoreFrameScrollView> {

	WAKView* _documentView;
	WAKClipView* _contentView;
	CGPoint _scrollOrigin;
	id delegate;

}

@property (assign,nonatomic,__weak) id delegate; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDrawsBackground:(BOOL)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(id)delegate;
-(void)setScrollingModes:(unsigned char)arg1 vertical:(unsigned char)arg2 andLock:(BOOL)arg3 ;
-(void)scrollingModes:(unsigned char*)arg1 vertical:(unsigned char*)arg2 ;
-(CGRect)exposedContentRect;
-(void)setActualScrollPosition:(CGPoint)arg1 ;
-(CGRect)documentVisibleRect;
-(void)setScrollBarsSuppressed:(BOOL)arg1 repaintOnUnsuppress:(BOOL)arg2 ;
-(CGPoint)scrollOrigin;
-(void)setScrollOrigin:(CGPoint)arg1 updatePositionAtAll:(BOOL)arg2 immediately:(BOOL)arg3 ;
-(BOOL)_selfHandleEvent:(id)arg1 ;
-(void)setHasVerticalScroller:(BOOL)arg1 ;
-(BOOL)hasVerticalScroller;
-(void)setHasHorizontalScroller:(BOOL)arg1 ;
-(BOOL)hasHorizontalScroller;
-(void)setLineScroll:(float)arg1 ;
-(float)verticalLineScroll;
-(float)horizontalLineScroll;
-(void)reflectScrolledClipView:(id)arg1 ;
-(void)setHorizontalScrollingMode:(unsigned char)arg1 ;
-(void)setVerticalScrollingMode:(unsigned char)arg1 ;
-(void)setScrollingMode:(unsigned char)arg1 ;
-(unsigned char)horizontalScrollingMode;
-(void)_adjustScrollers;
-(unsigned char)verticalScrollingMode;
-(BOOL)inProgrammaticScroll;
-(id)documentView;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(void)setDocumentView:(id)arg1 ;
-(void)scrollPoint:(CGPoint)arg1 ;
-(CGRect)unobscuredContentRect;
-(BOOL)drawsBackground;
-(id)contentView;
-(void)dealloc;
@end

