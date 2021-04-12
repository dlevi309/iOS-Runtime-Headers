/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UISApplicationInitializationContext;

@interface _UIApplicationConfigurationLoader : NSObject {

	UISApplicationInitializationContext* _applicationInitializationContext;
	AB _hasRequestedPreload;

}

@property (nonatomic,readonly) UISApplicationInitializationContext * applicationInitializationContext; 
@property (nonatomic,readonly) BOOL isFrontBoard; 
@property (nonatomic,readonly) BOOL usesLocalInitializationContext; 
+(id)sharedLoader;
-(void)dealloc;
-(id)_init;
-(BOOL)isFrontBoard;
-(void)startPreloadInitializationContext;
-(UISApplicationInitializationContext *)applicationInitializationContext;
-(id)_appInitializationContextFactoryClass;
-(BOOL)usesLocalInitializationContext;
-(id)_loadInitializationContext;
@end

