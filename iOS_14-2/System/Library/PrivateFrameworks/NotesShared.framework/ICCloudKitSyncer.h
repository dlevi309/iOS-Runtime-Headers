/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

