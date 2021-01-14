/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)foregroundAppInfosForCarPlay;
-(void)_updateForAppInfoDictionaries:(id)arg1 displayType:(id)arg2 ;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
-(void)_appInfoDictionariesForDisplayLayout:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleApplicationStateUpdate:(id)arg1 ;
-(id)foregroundAppInfos;
-(void)_updateForAppInfoDictionaries:(id)arg1 ;
-(void)dealloc;
-(id)_foregroundAppInfosFor:(long long)arg1 ;
@end

