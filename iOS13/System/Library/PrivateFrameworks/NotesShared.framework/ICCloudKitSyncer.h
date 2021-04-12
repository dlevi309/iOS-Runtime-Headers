/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@protocol ICCloudKitSyncerDelegate;
@interface ICCloudKitSyncer : NSObject {

	id<ICCloudKitSyncerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ICCloudKitSyncerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<ICCloudKitSyncerDelegate>)delegate;
-(void)setDelegate:(id<ICCloudKitSyncerDelegate>)arg1 ;
-(void)saveUnsyncedObjectsWithRetryCount:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)saveUnsyncedObjects;
@end

