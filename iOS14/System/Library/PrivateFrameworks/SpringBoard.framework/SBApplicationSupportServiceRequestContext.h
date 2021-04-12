/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBApplication, UISApplicationInitializationContext;

@interface SBApplicationSupportServiceRequestContext : NSObject {

	BOOL _hostIsSpringBoard;
	SBApplication* _app;
	SBApplication* _hostApp;
	SBApplication* _extensionContainingApp;
	UISApplicationInitializationContext* _applicationInitializationContext;

}

@property (nonatomic,readonly) UISApplicationInitializationContext * applicationInitializationContext; 
+(id)initializationContextForClient:(id)arg1 ;
+(id)_hostProcessForProcess:(id)arg1 ;
+(id)hostingApplicationBundleIDForPid:(int)arg1 ;
-(unsigned long long)_main_effectiveScreenType;
-(id)initWithApplication:(id)arg1 ;
-(id)_main_persistenceIDs;
-(id)initWithClient:(id)arg1 host:(id)arg2 ;
-(id)_main_deviceContext;
-(id)_main_applicationInitializationContext;
-(long long)_main_effectiveClassicMode;
-(id)_main_displayContext;
-(UISApplicationInitializationContext *)applicationInitializationContext;
@end

