/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <UIKitCore/UISystemShellApplication.h>
#import <libobjc.A.dylib/FBSceneClientProvider.h>

@class NSString;

@interface FBSystemApp : UISystemShellApplication <FBSceneClientProvider> {

	id _didFinishLaunchingObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_principalClass;
+(long long)startupInterfaceOrientation;
+(double)systemIdleSleepInterval;
+(id)sharedApplicationLibrary;
+(id)_newApplicationLibrary;
+(void)_instantiateAppInfoProvider;
+(void)_setPrincipalClass:(Class)arg1 ;
+(id)sharedApplicationInfoProvider;
+(BOOL)_optsIntoUIKitWindowHosting;
+(void)initializeSystemServices;
+(void)preFrontBoardInitializationHook;
+(void)postFrontBoardInitializationHook;
+(BOOL)shouldCheckInWithBackboard;
+(BOOL)shouldFixMainThreadPriority;
-(id)init;
-(BOOL)canOpenURL:(id)arg1 ;
-(id)_newSceneForWindow:(id)arg1 oldDisplay:(id)arg2 newDisplay:(id)arg3 ;
-(BOOL)isBootingDark;
-(void)_createFirstSceneIfNecessary;
-(BOOL)wasBootedDark;
-(unsigned long long)lastExitReason;
-(id)fbsSceneWithIdentifier:(id)arg1 ;
-(void)registerInvalidationAction:(id)arg1 ;
-(id)registerHost:(id)arg1 withInitialParameters:(id)arg2 ;
-(void)unregisterHost:(id)arg1 ;
-(void)sendActionsToBackboard:(id)arg1 ;
@end

