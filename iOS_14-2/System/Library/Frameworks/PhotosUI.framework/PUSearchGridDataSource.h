/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUSearchGridDataSourceDelegate, OS_dispatch_queue;
@class NSSet, NSString, NSObject, PHFetchResult;

@interface PUSearchGridDataSource : NSObject {

	BOOL _finished;
	BOOL _hasPendingChanges;
	id<PUSearchGridDataSourceDelegate> _delegate;
	NSSet* _assetUUIDs;
	unsigned long long _searchCategories;
	NSString* _title;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _taskId;
	PHFetchResult* _fetchResult;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) unsigned long long taskId;                                       //@synthesize taskId=_taskId - In the implementation block
@property (assign,nonatomic) BOOL hasPendingChanges;                                          //@synthesize hasPendingChanges=_hasPendingChanges - In the implementation block
@property (nonatomic,retain) PHFetchResult * fetchResult;                                     //@synthesize fetchResult=_fetchResult - In the implementation block
@property (nonatomic,retain) NSSet * assetUUIDs;                                              //@synthesize assetUUIDs=_assetUUIDs - In the implementation block
@property (assign,nonatomic,__weak) id<PUSearchGridDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished;                               //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic) unsigned long long searchCategories;                             //@synthesize searchCategories=_searchCategories - In the implementation block
@property (nonatomic,retain) NSString * title;                                                //@synthesize title=_title - In the implementation block
-(PHFetchResult *)fetchResult;
-(id)init;
-(unsigned long long)taskId;
-(id<PUSearchGridDataSourceDelegate>)delegate;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)_inqIsCancelledWithTaskId:(unsigned long long)arg1 ;
-(BOOL)_isCancelledWithTaskId:(unsigned long long)arg1 ;
-(void)_inqClearPendingChanges;
-(void)setHasPendingChanges:(BOOL)arg1 ;
-(void)updateAssetUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)mergePendingChanges;
-(BOOL)isFinished;
-(void)setDelegate:(id<PUSearchGridDataSourceDelegate>)arg1 ;
-(NSSet *)assetUUIDs;
-(void)setTaskId:(unsigned long long)arg1 ;
-(void)updateFetchResult:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateFetchResult:(id)arg1 taskId:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSearchCategories:(unsigned long long)arg1 ;
-(void)setFetchResult:(PHFetchResult *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(unsigned long long)searchCategories;
-(BOOL)hasPendingChanges;
-(void)setAssetUUIDs:(NSSet *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)title;
@end

