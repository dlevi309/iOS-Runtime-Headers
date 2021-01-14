/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/


@protocol OS_dispatch_queue, CPSAppInfoFetching, CPSBusinessItemFetching, OS_dispatch_source, CPSLegacyAppInstalling;
@class NSMutableDictionary, NSObject, CPSInstallationController, NSArray;

@interface CPSSessionManager : NSObject {

	NSMutableDictionary* _sessions;
	NSObject*<OS_dispatch_queue> _queue;
	id<CPSAppInfoFetching> _appInfoFetcher;
	id<CPSBusinessItemFetching> _businessItemFetcher;
	NSObject*<OS_dispatch_source> _memoryPressureSource;
	CPSInstallationController* _clipInstaller;
	id<CPSLegacyAppInstalling> _legacyInstaller;

}

@property (nonatomic,readonly) CPSInstallationController * clipInstaller;              //@synthesize clipInstaller=_clipInstaller - In the implementation block
@property (nonatomic,retain) id<CPSLegacyAppInstalling> legacyInstaller;               //@synthesize legacyInstaller=_legacyInstaller - In the implementation block
@property (nonatomic,readonly) NSArray * allSessions; 
+(id)sharedManager;
-(id)init;
-(NSArray *)allSessions;
-(id<CPSLegacyAppInstalling>)legacyInstaller;
-(void)_setUpMemoryPressureHandler;
-(void)_handleMemoryPressure:(unsigned long long)arg1 ;
-(void)getSessionWithURL:(id)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)sessionWithURL:(id)arg1 createIfNoExist:(BOOL)arg2 ;
-(void)clearSessionWithURL:(id)arg1 ;
-(void)getSessionWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CPSInstallationController *)clipInstaller;
-(void)setLegacyInstaller:(id<CPSLegacyAppInstalling>)arg1 ;
@end

