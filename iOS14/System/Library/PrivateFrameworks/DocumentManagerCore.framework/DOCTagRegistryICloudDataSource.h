/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
*/


@protocol OS_dispatch_queue, DOCTagRegistryDelegate;
@class NSUbiquitousKeyValueStore, NSObject;

@interface DOCTagRegistryICloudDataSource : NSObject {

	NSUbiquitousKeyValueStore* _store;
	NSObject* _iCloudToken;
	NSObject*<OS_dispatch_queue> _workingQueue;
	id<DOCTagRegistryDelegate> _delegate;

}

@property (nonatomic,retain) NSUbiquitousKeyValueStore * store;                        //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSObject * iCloudToken;                                   //@synthesize iCloudToken=_iCloudToken - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workingQueue;              //@synthesize workingQueue=_workingQueue - In the implementation block
@property (assign,nonatomic,__weak) id<DOCTagRegistryDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(void)setStore:(NSUbiquitousKeyValueStore *)arg1 ;
-(NSUbiquitousKeyValueStore *)store;
-(id<DOCTagRegistryDelegate>)delegate;
-(void)setDelegate:(id<DOCTagRegistryDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workingQueue;
-(void)dealloc;
-(void)writeTagsToCloud;
-(void)isICloudAvailableWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setICloudToken:(NSObject *)arg1 ;
-(void)syncTagsWithCloud:(BOOL)arg1 isICloudAvailable:(BOOL)arg2 ;
-(void)iCloudTokenWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)kvsStoreDidChange:(id)arg1 ;
-(void)ubiquityIdentityDidChange;
-(NSObject *)iCloudToken;
-(void)syncTagsWithCloud:(BOOL)arg1 ;
-(id)iCloudTagsDictionary;
-(void)readTagsFromCloud:(BOOL)arg1 ;
-(long long)iCloudTagVersion;
-(long long)iCloudTagSerialNumber;
-(id)iCloudTags;
@end

