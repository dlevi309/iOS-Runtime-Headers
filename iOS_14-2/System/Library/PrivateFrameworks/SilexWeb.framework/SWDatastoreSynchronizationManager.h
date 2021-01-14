/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWMessageHandler.h>
#import <libobjc.A.dylib/SWDatastoreObserver.h>
#import <libobjc.A.dylib/SWDatastoreSynchronizationManager.h>

@protocol SWDatastoreSynchronizationManager <NSObject>
@end


@protocol SWDatastoreManager, SWDatastoreFactory, SWScriptsManager, SWSessionManager, SWLogger;
@class NSString;

@interface SWDatastoreSynchronizationManager : NSObject <SWMessageHandler, SWDatastoreObserver, SWDatastoreSynchronizationManager> {

	id<SWDatastoreManager> _datastoreManager;
	id<SWDatastoreFactory> _settingsFactory;
	id<SWScriptsManager> _scriptsManager;
	id<SWSessionManager> _sessionManager;
	id<SWLogger> _logger;

}

@property (nonatomic,readonly) id<SWDatastoreManager> datastoreManager;              //@synthesize datastoreManager=_datastoreManager - In the implementation block
@property (nonatomic,readonly) id<SWDatastoreFactory> settingsFactory;               //@synthesize settingsFactory=_settingsFactory - In the implementation block
@property (nonatomic,readonly) id<SWScriptsManager> scriptsManager;                  //@synthesize scriptsManager=_scriptsManager - In the implementation block
@property (nonatomic,readonly) id<SWSessionManager> sessionManager;                  //@synthesize sessionManager=_sessionManager - In the implementation block
@property (nonatomic,readonly) id<SWLogger> logger;                                  //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SWSessionManager>)sessionManager;
-(id<SWLogger>)logger;
-(void)dealloc;
-(id<SWScriptsManager>)scriptsManager;
-(void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2 ;
-(id<SWDatastoreManager>)datastoreManager;
-(id)initWithDatastoreManager:(id)arg1 settingsFactory:(id)arg2 scriptsManager:(id)arg3 messageHandlerManager:(id)arg4 sessionManager:(id)arg5 logger:(id)arg6 ;
-(void)datastoreManager:(id)arg1 didChangeFromDatastore:(id)arg2 originatingSession:(id)arg3 ;
-(id<SWDatastoreFactory>)settingsFactory;
@end

