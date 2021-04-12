/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKit/UISApplicationSupportServiceDelegate.h>

@class UISApplicationSupportService, NSString;

@interface SBApplicationSupportServiceDelegate : NSObject <UISApplicationSupportServiceDelegate> {

	UISApplicationSupportService* _service;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)service:(id)arg1 overrideClientInitialization:(id)arg2 ;
-(id)service:(id)arg1 initializeClient:(id)arg2 ;
-(void)requestPasscodeUnlockUIForClient:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)destroyScenesWithPersistentIdentifiers:(id)arg1 animationType:(unsigned long long)arg2 destroySessions:(BOOL)arg3 forClient:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_rebuildDefaultContext;
@end

