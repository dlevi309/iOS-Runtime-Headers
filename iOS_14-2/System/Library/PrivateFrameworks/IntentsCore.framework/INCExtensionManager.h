/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface INCExtensionManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _extensions;
	NSMutableDictionary* _killTimers;

}
+(void)initialize;
+(id)sharedManager;
-(id)init;
-(void)fetchExtensionForIntent:(id)arg1 extensionInputItems:(id)arg2 requiresTCC:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)killExtension:(id)arg1 requestIdentifier:(id)arg2 afterTimeout:(double)arg3 ;
-(BOOL)isExtensionLoadedForExtensionBundleIdentifier:(id)arg1 ;
-(void)_resetKillTimerForExtensionWithBundleIdentifier:(id)arg1 ;
-(void)_killExtensionWithBundleIdentifier:(id)arg1 ;
-(void)_manageExtension:(id)arg1 requestIdentifier:(id)arg2 ;
@end

