/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/

#import <libobjc.A.dylib/FBSDisplayLayoutObserver.h>

@protocol OS_dispatch_queue;
@class BKSApplicationStateMonitor, NSMutableDictionary, NSObject, NSString;

@interface SUICApplicationStateHelper : NSObject <FBSDisplayLayoutObserver> {

	BKSApplicationStateMonitor* _appStateMonitor;
	NSMutableDictionary* _foregroundAppInfos;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
-(void)_handleApplicationStateUpdate:(id)arg1 ;
-(id)_foregroundAppInfosFor:(long long)arg1 ;
-(void)_updateForAppInfoDictionaries:(id)arg1 displayType:(id)arg2 ;
-(void)_appInfoDictionariesForDisplayLayout:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)foregroundAppInfos;
-(id)foregroundAppInfosForCarPlay;
-(void)_updateForAppInfoDictionaries:(id)arg1 ;
@end

