/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@class HKSPObserverSet, NSString;

@interface HDSPApplicationWorkspaceMonitor : NSObject <LSApplicationWorkspaceObserverProtocol> {

	HKSPObserverSet* _observers;

}

@property (nonatomic,readonly) HKSPObserverSet * observers;              //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(HKSPObserverSet *)observers;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(BOOL)isApplicationInstalled:(id)arg1 ;
@end

