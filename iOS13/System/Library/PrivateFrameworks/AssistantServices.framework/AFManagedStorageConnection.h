/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFManagedStore.h>

@class NSXPCConnection, NSString;

@interface AFManagedStorageConnection : NSObject <AFManagedStore> {

	NSXPCConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)_connection;
-(void)_clearConnection;
-(id)_synchronousManagedStoreServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_managedStoreService;
-(id)domainObjectForKey:(id)arg1 ;
-(void)setDomainObject:(id)arg1 forKey:(id)arg2 ;
-(id)dataForKey:(id)arg1 inKnowledgeStoreWithName:(id)arg2 ;
-(void)setData:(id)arg1 forKey:(id)arg2 inKnowledgeStoreWithName:(id)arg3 ;
-(void)resetKnowledgeStoreWithName:(id)arg1 ;
-(id)_managedStoreServiceWithErrorHandler:(/*^block*/id)arg1 ;
@end

