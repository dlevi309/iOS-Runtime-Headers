/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIPageIndicatorStoreDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@class UIImage, NSMutableArray;

@interface _UIPageIndicatorStore : NSObject {

	SCD_Struct_UI34 _update;
	double _fittingWidth;
	CGSize _cachedSize;
	id<_UIPageIndicatorStoreDelegate> _delegate;
	UIImage* _preferredImage;
	double _indicatorSpacing;
	NSMutableArray* _store;

}

@property (nonatomic,retain) NSMutableArray * store;                                         //@synthesize store=_store - In the implementation block
@property (assign,nonatomic,__weak) id<_UIPageIndicatorStoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * preferredImage;                                       //@synthesize preferredImage=_preferredImage - In the implementation block
@property (assign,nonatomic) double indicatorSpacing;                                        //@synthesize indicatorSpacing=_indicatorSpacing - In the implementation block
@property (nonatomic,readonly) UIImage * indicatorImage; 
-(id)indicatorImageForPage:(long long)arg1 ;
-(void)invalidateLayoutCache;
-(CGSize)indicatorSizeForPage:(long long)arg1 ;
-(long long)lastPage;
-(id)customIndicatorImageForPage:(long long)arg1 ;
-(void)setStore:(NSMutableArray *)arg1 ;
-(id)init;
-(double)indicatorSpacing;
-(NSMutableArray *)store;
-(UIImage *)preferredImage;
-(id<_UIPageIndicatorStoreDelegate>)delegate;
-(double)indicatorContentWidthForRange:(NSRange)arg1 ;
-(void)_removeImageForPage:(long long)arg1 ;
-(long long)numberOfVisibleIndicatorsForStartIndex:(long long)arg1 fittingWidth:(double)arg2 ;
-(CGSize)contentSizeForNumberOfPages:(long long)arg1 ;
-(void)setDelegate:(id<_UIPageIndicatorStoreDelegate>)arg1 ;
-(UIImage *)indicatorImage;
-(void)validateDataStore;
-(long long)objectIndexForPage:(long long)arg1 ;
-(void)updateImage:(id)arg1 forPage:(long long)arg2 ;
-(CGSize)sizeForMaximumContentSizeFittingWidth:(double)arg1 ;
-(void)updateStoreForNumberOfPages:(long long)arg1 ;
-(void)setPreferredImage:(UIImage *)arg1 ;
-(long long)_objectIndexForPage:(long long)arg1 lower:(long long)arg2 upper:(long long)arg3 ;
-(void)_insertImage:(id)arg1 forPage:(long long)arg2 ;
-(double)indicatorPositionForContinuousPage:(double)arg1 ;
-(void)_resetStore;
-(void)setIndicatorSpacing:(double)arg1 ;
-(CGSize)indicatorSize;
@end

