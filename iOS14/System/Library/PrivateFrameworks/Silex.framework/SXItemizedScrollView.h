/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <UIKitCore/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol SXItemizedScrollViewDataSource;
@class NSArray, NSIndexSet, NSMutableDictionary, UIView, NSString;

@interface SXItemizedScrollView : UIScrollView <UIScrollViewDelegate> {

	BOOL _contentTooSmall;
	BOOL _gotActiveViewIndexChange;
	id<SXItemizedScrollViewDataSource> _dataSource;
	unsigned long long _activeViewIndex;
	NSArray* _frames;
	NSIndexSet* _visibleIndices;
	NSMutableDictionary* _visibleViewsByIndex;
	NSRange _visibleRange;
	CGSize _framesAreValidForSize;

}

@property (assign,nonatomic) CGSize framesAreValidForSize;                                      //@synthesize framesAreValidForSize=_framesAreValidForSize - In the implementation block
@property (nonatomic,retain) NSArray * frames;                                                  //@synthesize frames=_frames - In the implementation block
@property (nonatomic,retain) NSIndexSet * visibleIndices;                                       //@synthesize visibleIndices=_visibleIndices - In the implementation block
@property (assign,nonatomic) BOOL contentTooSmall;                                              //@synthesize contentTooSmall=_contentTooSmall - In the implementation block
@property (assign,nonatomic) BOOL gotActiveViewIndexChange;                                     //@synthesize gotActiveViewIndexChange=_gotActiveViewIndexChange - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * visibleViewsByIndex;                         //@synthesize visibleViewsByIndex=_visibleViewsByIndex - In the implementation block
@property (assign,nonatomic,__weak) id<SXItemizedScrollViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSRange visibleRange;                                            //@synthesize visibleRange=_visibleRange - In the implementation block
@property (nonatomic,readonly) unsigned long long activeViewIndex;                              //@synthesize activeViewIndex=_activeViewIndex - In the implementation block
@property (nonatomic,readonly) UIView * activeView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(NSArray *)frames;
-(void)setFrames:(NSArray *)arg1 ;
-(id<SXItemizedScrollViewDataSource>)dataSource;
-(void)commonInit;
-(void)setDataSource:(id<SXItemizedScrollViewDataSource>)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)scrollToNext;
-(void)scrollToPrevious;
-(id)initWithCoder:(id)arg1 ;
-(UIView *)activeView;
-(NSRange)visibleRange;
-(unsigned long long)activeViewIndex;
-(void)setActiveViewIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(CGRect)frameForViewAtIndex:(unsigned long long)arg1 ;
-(void)reindexate;
-(void)forceCorrectFrames;
-(void)determineNewVisibilityRange;
-(void)viewManagementForRange:(NSRange)arg1 ;
-(CGSize)framesAreValidForSize;
-(void)rebuildFramesArray;
-(BOOL)gotActiveViewIndexChange;
-(NSMutableDictionary *)visibleViewsByIndex;
-(void)setFramesAreValidForSize:(CGSize)arg1 ;
-(BOOL)contentTooSmall;
-(void)setContentTooSmall:(BOOL)arg1 ;
-(NSIndexSet *)visibleIndices;
-(void)setVisibleIndices:(NSIndexSet *)arg1 ;
-(void)setGotActiveViewIndexChange:(BOOL)arg1 ;
-(void)setVisibleViewsByIndex:(NSMutableDictionary *)arg1 ;
@end
