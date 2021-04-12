/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)hostingApplicationBundleIDForPid:(int)arg1 ;
+(id)initializationContextForClient:(id)arg1 ;
+(id)_hostProcessForProcess:(id)arg1 ;
-(UISApplicationInitializationContext *)applicationInitializationContext;
-(id)initWithApplication:(id)arg1 ;
-(id)initWithClient:(id)arg1 host:(id)arg2 ;
-(long long)_main_effectiveClassicMode;
-(id)_main_applicationInitializationContext;
-(id)_main_displayContext;
-(id)_main_deviceContext;
-(id)_main_persistenceIDs;
@end

