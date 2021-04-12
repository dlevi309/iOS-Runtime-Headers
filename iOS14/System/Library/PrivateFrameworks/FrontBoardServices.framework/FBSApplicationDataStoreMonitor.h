/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <libobjc.A.dylib/FBSApplicationDataStoreRepositoryClientObserver.h>

@protocol FBSApplicationDataStoreRepositoryClient;
@class NSHashTable, NSString;

@interface FBSApplicationDataStoreMonitor : NSObject <FBSApplicationDataStoreRepositoryClientObserver> {

	id<FBSApplicationDataStoreRepositoryClient> _client;
	BOOL _clientNeedsCheckin;
	NSHashTable* _observers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)applicationDataStoreRepositoryClient:(id)arg1 application:(id)arg2 changedObject:(id)arg3 forKey:(id)arg4 ;
-(void)applicationDataStoreRepositoryClient:(id)arg1 storeInvalidatedForApplication:(id)arg2 ;
-(BOOL)_hasObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithClient:(id)arg1 ;
-(void)dealloc;
@end

