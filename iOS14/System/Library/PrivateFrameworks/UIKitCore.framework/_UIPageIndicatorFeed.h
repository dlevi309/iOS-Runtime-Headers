/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIPageIndicatorFeedDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray, NSArray;

@interface _UIPageIndicatorFeed : NSObject {

	id<_UIPageIndicatorFeedDelegate> _delegate;
	NSMutableArray* _activeQueue;
	NSMutableArray* _reuseQueue;

}

@property (nonatomic,retain) NSMutableArray * activeQueue;                                  //@synthesize activeQueue=_activeQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * reuseQueue;                                   //@synthesize reuseQueue=_reuseQueue - In the implementation block
@property (nonatomic,readonly) NSArray * indicators; 
@property (assign,nonatomic,__weak) id<_UIPageIndicatorFeedDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)invalidateIndicators;
-(CGSize)indicatorSizeForPage:(long long)arg1 ;
-(id)indicatorForPage:(long long)arg1 ;
-(void)setActiveQueue:(NSMutableArray *)arg1 ;
-(id)init;
-(NSMutableArray *)reuseQueue;
-(id<_UIPageIndicatorFeedDelegate>)delegate;
-(CGSize)indicatorSizeForCustomImage:(id)arg1 ;
-(void)prepareIndicatorsFrom:(long long)arg1 to:(long long)arg2 ;
-(void)setDelegate:(id<_UIPageIndicatorFeedDelegate>)arg1 ;
-(NSArray *)indicators;
-(void)reloadIndicatorImages;
-(id)indicatorForPage:(long long)arg1 forSizeOnly:(BOOL)arg2 ;
-(NSMutableArray *)activeQueue;
-(void)reloadIndicatorImageForPage:(long long)arg1 ;
-(void)setReuseQueue:(NSMutableArray *)arg1 ;
-(void)updateReuseQueue;
@end

