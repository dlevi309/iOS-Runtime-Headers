/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <libobjc.A.dylib/FBSServiceFacilityClientContext.h>

@protocol FBApplicationDataStoreRepository, OS_dispatch_queue, FBSServiceFacilityClientHandle, FBApplicationDataStoreRepositoryServerClientContextDelegate;
@class NSSet, NSObject, NSString;

@interface FBApplicationDataStoreRepositoryServerClientContext : NSObject <FBSServiceFacilityClientContext> {

	id<FBApplicationDataStoreRepository> _dataStore;
	NSSet* _prefetchedKeys;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _interestedInAllChanges;
	BOOL _observingChanges;
	id<FBSServiceFacilityClientHandle> _client;
	id<FBApplicationDataStoreRepositoryServerClientContextDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBApplicationDataStoreRepositoryServerClientContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL interestedInAllChanges;                                                                  //@synthesize interestedInAllChanges=_interestedInAllChanges - In the implementation block
@property (nonatomic,copy) NSSet * prefetchedKeys;                                                                         //@synthesize prefetchedKeys=_prefetchedKeys - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBSServiceFacilityClientHandle> clientHandle;                                       //@synthesize client=_client - In the implementation block
-(void)dealloc;
-(id<FBApplicationDataStoreRepositoryServerClientContextDelegate>)delegate;
-(void)setDelegate:(id<FBApplicationDataStoreRepositoryServerClientContextDelegate>)arg1 ;
-(NSSet *)prefetchedKeys;
-(void)setPrefetchedKeys:(NSSet *)arg1 ;
-(id)initWithDataStore:(id)arg1 ;
-(void)_repositoryInvalidated:(id)arg1 ;
-(void)_queue_updateObservers;
-(void)_valueChanged:(id)arg1 ;
-(id<FBSServiceFacilityClientHandle>)clientHandle;
-(void)setClientHandle:(id<FBSServiceFacilityClientHandle>)arg1 ;
-(void)setInterestedInAllChanges:(BOOL)arg1 ;
-(BOOL)interestedInAllChanges;
@end

