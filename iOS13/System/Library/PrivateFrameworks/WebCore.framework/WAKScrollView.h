/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)contentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)drawsBackground;
-(void)setDrawsBackground:(BOOL)arg1 ;
-(CGRect)unobscuredContentRect;
-(void)setDocumentView:(id)arg1 ;
-(id)documentView;
-(void)scrollWheel:(id)arg1 ;
-(void)scrollPoint:(CGPoint)arg1 ;
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
-(unsigned char)verticalScrollingMode;
-(BOOL)inProgrammaticScroll;
-(void)_adjustScrollers;
@end

