/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPAVQueueCoordinating.h>

@protocol MPAVQueueCoordinatingDataSource;
@class MPAVItem, NSArray, NSString;

@interface MPNowPlayingInfoQueueCoordinator : NSObject <MPAVQueueCoordinating> {

	BOOL _shouldExpectEmptyQueue;
	BOOL _shouldDeferItemLoading;
	MPAVItem* _currentItem;
	NSArray* _items;
	id<MPAVQueueCoordinatingDataSource> _dataSource;

}

@property (nonatomic,__weak,readonly) id<MPAVQueueCoordinatingDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) MPAVItem * currentItem;                                             //@synthesize currentItem=_currentItem - In the implementation block
@property (assign,nonatomic) BOOL shouldExpectEmptyQueue;                                          //@synthesize shouldExpectEmptyQueue=_shouldExpectEmptyQueue - In the implementation block
@property (assign,nonatomic) BOOL shouldDeferItemLoading;                                          //@synthesize shouldDeferItemLoading=_shouldDeferItemLoading - In the implementation block
@property (nonatomic,readonly) NSArray * items;                                                    //@synthesize items=_items - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldExpectEmptyQueue;
-(id)initWithDataSource:(id)arg1 ;
-(void)setShouldExpectEmptyQueue:(BOOL)arg1 ;
-(id<MPAVQueueCoordinatingDataSource>)dataSource;
-(NSArray *)items;
-(void)setShouldDeferItemLoading:(BOOL)arg1 ;
-(BOOL)shouldDeferItemLoading;
-(MPAVItem *)currentItem;
-(void)reset;
-(void)reloadItemsKeepingCurrentItem:(BOOL)arg1 ;
@end

