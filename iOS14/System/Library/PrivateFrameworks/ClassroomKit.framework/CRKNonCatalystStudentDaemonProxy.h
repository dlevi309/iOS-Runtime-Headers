/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKStudentDaemonXPCInterface.h>

@protocol OS_dispatch_queue;
@class CRKValidXPCConnectionProvider, NSObject;

@interface CRKNonCatalystStudentDaemonProxy : NSObject <CRKStudentDaemonXPCInterface> {

	CRKValidXPCConnectionProvider* _connectionProvider;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,readonly) CRKValidXPCConnectionProvider * connectionProvider;              //@synthesize connectionProvider=_connectionProvider - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue;                      //@synthesize callbackQueue=_callbackQueue - In the implementation block
-(id)init;
-(id)initWithCallbackQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(CRKValidXPCConnectionProvider *)connectionProvider;
-(void)fetchConfiguration:(/*^block*/id)arg1 ;
-(void)setConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setActiveStudentIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)studentDidAuthenticate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchResourceFromURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchSetOfActiveRestrictionUUIDsForClientType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fetchConfigurationType:(/*^block*/id)arg1 ;
-(void)fetchConfigurationType:(/*^block*/id)arg1 ;
-(void)_setAdHocConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAdHocConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fetchAdHocConfiguration:(/*^block*/id)arg1 ;
-(void)fetchAdHocConfiguration:(/*^block*/id)arg1 ;
-(void)_setConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fetchConfiguration:(/*^block*/id)arg1 ;
-(void)_setActiveStudentIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_studentDidAuthenticate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fetchResourceFromURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fetchSetOfActiveRestrictionUUIDsForClientType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)setOfActiveRestrictionUUIDs:(id)arg1 ;
@end

