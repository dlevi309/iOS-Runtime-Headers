/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic,__weak) id<FBSServiceFacilityClientHandle> clientHandle;                                       //@synthesize client=_client - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDataStore:(id)arg1 ;
-(void)_valueChanged:(id)arg1 ;
-(void)_repositoryInvalidated:(id)arg1 ;
-(id<FBApplicationDataStoreRepositoryServerClientContextDelegate>)delegate;
-(void)setDelegate:(id<FBApplicationDataStoreRepositoryServerClientContextDelegate>)arg1 ;
-(void)setPrefetchedKeys:(NSSet *)arg1 ;
-(NSSet *)prefetchedKeys;
-(void)dealloc;
-(void)_queue_updateObservers;
-(id<FBSServiceFacilityClientHandle>)clientHandle;
-(void)setClientHandle:(id<FBSServiceFacilityClientHandle>)arg1 ;
-(void)setInterestedInAllChanges:(BOOL)arg1 ;
-(BOOL)interestedInAllChanges;
@end

