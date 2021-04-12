/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <libobjc.A.dylib/PLDiagnosticsProvider.h>

@protocol OS_dispatch_queue, PUFilteredMomentsDataSourceDelegate;
@class NSObject, NSMutableOrderedSet, NSSet, NSOrderedSet, NSString;

@interface PUFilteredMomentsDataSource : NSObject <PLDiagnosticsProvider> {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _taskId;
	NSMutableOrderedSet* _uncommittedContainers;
	NSSet* _uncommittedAssetUUIDs;
	NSOrderedSet* _containers;
	NSSet* _assetUUIDs;
	BOOL _hasPendingChanges;
	BOOL _finished;
	id<PUFilteredMomentsDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PUFilteredMomentsDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished;                                    //@synthesize finished=_finished - In the implementation block
@property (nonatomic,readonly) NSSet * assetUUIDs;                                                 //@synthesize assetUUIDs=_assetUUIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)fetchResult;
-(id)init;
-(id<PUFilteredMomentsDataSourceDelegate>)delegate;
-(BOOL)_inqIsCancelledWithTaskId:(unsigned long long)arg1 ;
-(BOOL)_isCancelledWithTaskId:(unsigned long long)arg1 ;
-(void)_inqClearPendingChanges;
-(void)updateAssetUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateAssetUUIDs:(id)arg1 localIdenifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateAssetUUIDs:(id)arg1 localIdenifiers:(id)arg2 taskId:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)mergePendingChanges;
-(BOOL)isFinished;
-(void)setDelegate:(id<PUFilteredMomentsDataSourceDelegate>)arg1 ;
-(NSSet *)assetUUIDs;
@end

