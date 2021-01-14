/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/


@protocol NSTextViewportLayoutDelegate, NSTextViewportElementProvider;
#import <UIFoundation/UIFoundation-Structs.h>
@class NSTextRange, NSArray, NSMutableArray;

@interface NSTextViewportLayoutController : NSObject {

	CGRect _viewportBounds;
	CGPoint _viewportOffset;
	NSTextRange* _viewportRange;
	NSArray* _viewportElements;
	NSMutableArray* _viewportLayoutObservers;
	BOOL _layoutIsValid;
	id<NSTextViewportLayoutDelegate> _delegate;
	id<NSTextViewportElementProvider> _elementProvider;

}

@property (__weak) id<NSTextViewportLayoutDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (__weak,readonly) id<NSTextViewportElementProvider> elementProvider;              //@synthesize elementProvider=_elementProvider - In the implementation block
@property (readonly) CGRect viewportBounds;                                                 //@synthesize viewportBounds=_viewportBounds - In the implementation block
@property (readonly) NSTextRange * viewportRange; 
-(CGRect)viewport;
-(id<NSTextViewportLayoutDelegate>)delegate;
-(id)textViewportElementForLocation:(id)arg1 ;
-(void)layoutViewport;
-(id)textViewportElementsInRect:(CGRect)arg1 ;
-(double)relocateViewport:(id)arg1 ;
-(void)adjustViewport:(double)arg1 ;
-(id)locationAtPoint:(CGPoint)arg1 ;
-(void)addViewportLayoutObserver:(id)arg1 ;
-(void)enumerateTextViewportElementsInRect:(CGRect)arg1 options:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)removeViewportLayoutObserver:(id)arg1 ;
-(CGRect)viewportBounds;
-(void)setDelegate:(id<NSTextViewportLayoutDelegate>)arg1 ;
-(id<NSTextViewportElementProvider>)elementProvider;
-(NSTextRange *)viewportRange;
-(id)initWithElementProvider:(id)arg1 ;
-(id)textViewportElementAtPoint:(CGPoint)arg1 ;
-(void)dealloc;
@end

