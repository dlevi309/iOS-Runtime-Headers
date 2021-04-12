/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MPAVItem * currentItem;                                             //@synthesize currentItem=_currentItem - In the implementation block
@property (assign,nonatomic) BOOL shouldExpectEmptyQueue;                                          //@synthesize shouldExpectEmptyQueue=_shouldExpectEmptyQueue - In the implementation block
@property (assign,nonatomic) BOOL shouldDeferItemLoading;                                          //@synthesize shouldDeferItemLoading=_shouldDeferItemLoading - In the implementation block
@property (nonatomic,readonly) NSArray * items;                                                    //@synthesize items=_items - In the implementation block
-(void)reset;
-(id)initWithDataSource:(id)arg1 ;
-(id<MPAVQueueCoordinatingDataSource>)dataSource;
-(NSArray *)items;
-(MPAVItem *)currentItem;
-(void)reloadItemsKeepingCurrentItem:(BOOL)arg1 ;
-(BOOL)shouldExpectEmptyQueue;
-(void)setShouldExpectEmptyQueue:(BOOL)arg1 ;
-(BOOL)shouldDeferItemLoading;
-(void)setShouldDeferItemLoading:(BOOL)arg1 ;
@end

