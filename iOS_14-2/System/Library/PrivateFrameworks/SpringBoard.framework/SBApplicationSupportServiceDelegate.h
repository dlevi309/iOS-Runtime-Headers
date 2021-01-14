/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)service:(id)arg1 initializeClient:(id)arg2 ;
-(id)init;
-(void)destroyScenesWithPersistentIdentifiers:(id)arg1 animationType:(unsigned long long)arg2 destroySessions:(BOOL)arg3 forClient:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)requestPasscodeUnlockUIForClient:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_rebuildDefaultContext;
-(BOOL)service:(id)arg1 overrideClientInitialization:(id)arg2 ;
-(void)dealloc;
@end

