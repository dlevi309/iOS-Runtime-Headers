/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isFrontBoard;
-(void)startPreloadInitializationContext;
-(BOOL)usesLocalInitializationContext;
-(id)_init;
-(id)_appInitializationContextFactoryClass;
-(UISApplicationInitializationContext *)applicationInitializationContext;
-(id)_loadInitializationContext;
-(void)dealloc;
@end

