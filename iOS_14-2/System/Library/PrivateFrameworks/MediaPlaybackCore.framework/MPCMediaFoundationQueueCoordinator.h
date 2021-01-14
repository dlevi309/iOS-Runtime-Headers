/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/MPAVQueueCoordinating.h>

@protocol MFPlaybackStackControllerMFQueueManagement;
@class MPAVItem, NSArray, NSString;

@interface MPCMediaFoundationQueueCoordinator : NSObject <MPAVQueueCoordinating> {

	id<MFPlaybackStackController><MFQueueManagement> _playbackStackController;

}

@property (nonatomic,__weak,readonly) id<MFPlaybackStackController><MFQueueManagement> playbackStackController;              //@synthesize playbackStackController=_playbackStackController - In the implementation block
@property (nonatomic,readonly) MPAVItem * currentItem; 
@property (assign,nonatomic) BOOL shouldExpectEmptyQueue; 
@property (assign,nonatomic) BOOL shouldDeferItemLoading; 
@property (nonatomic,readonly) NSArray * items; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldExpectEmptyQueue;
-(void)setShouldExpectEmptyQueue:(BOOL)arg1 ;
-(NSArray *)items;
-(void)setShouldDeferItemLoading:(BOOL)arg1 ;
-(BOOL)shouldDeferItemLoading;
-(MPAVItem *)currentItem;
-(void)reset;
-(void)reloadItemsKeepingCurrentItem:(BOOL)arg1 ;
-(id<MFPlaybackStackController><MFQueueManagement>)playbackStackController;
-(id)initWithStackController:(id)arg1 ;
@end

