/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/


#import <CorePDF/CorePDF-Structs.h>
@class UIPDFDocument, UIPDFPageView, CALayer;

@interface UIPDFPageContentDelegate : NSObject {

	UIPDFDocument* _document;
	unsigned long long _pageIndex;
	UIPDFPageView* _view;
	CGRect _bounds;
	CGAffineTransform _transform;
	CGColorRef _white;
	CGColorRef _highlightColor;
	CALayer* _owner;
	CGRect _box;
	unsigned long long _pageRotation;
	os_unfair_lock_s _lock;
	unsigned long long _threadCount;
	BOOL _isCancelled;

}

@property (retain) UIPDFDocument * document;                     //@synthesize document=_document - In the implementation block
@property (assign) unsigned long long pageIndex;                 //@synthesize pageIndex=_pageIndex - In the implementation block
@property (assign) UIPDFPageView * view; 
@property (assign) CALayer * owner;                              //@synthesize owner=_owner - In the implementation block
@property (assign) CGRect box;                                   //@synthesize box=_box - In the implementation block
@property (assign) unsigned long long pageRotation;              //@synthesize pageRotation=_pageRotation - In the implementation block
@property (assign) CGColorRef highlightColor;                    //@synthesize highlightColor=_highlightColor - In the implementation block
@property (readonly) CGAffineTransform transform;                //@synthesize transform=_transform - In the implementation block
@property (assign) BOOL isCancelled; 
-(id)init;
-(CALayer *)owner;
-(void)setBox:(CGRect)arg1 ;
-(void)setDocument:(UIPDFDocument *)arg1 ;
-(void)computeTransform;
-(void)setView:(UIPDFPageView *)arg1 ;
-(CGAffineTransform)transform;
-(unsigned long long)pageIndex;
-(UIPDFPageView *)view;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setOwner:(CALayer *)arg1 ;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(UIPDFDocument *)document;
-(CGRect)box;
-(void)setHighlightColor:(CGColorRef)arg1 ;
-(BOOL)isCancelled;
-(CGColorRef)highlightColor;
-(void)dealloc;
-(void)setIsCancelled:(BOOL)arg1 ;
-(BOOL)pageHasSelection;
-(void)drawSelectionLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setPageRotation:(unsigned long long)arg1 ;
-(void)drawSelectionLayerBlockMode:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)addRect:(CGRect)arg1 toPath:(CGPathRef)arg2 transform:(CGAffineTransform*)arg3 view:(id)arg4 owner:(id)arg5 ;
-(unsigned long long)pageRotation;
@end

