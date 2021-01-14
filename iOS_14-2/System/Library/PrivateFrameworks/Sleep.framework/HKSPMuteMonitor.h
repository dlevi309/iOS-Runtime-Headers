/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/


#import <Sleep/Sleep-Structs.h>
@class HKSPObserverSet;

@interface HKSPMuteMonitor : NSObject {

	int _notifyToken;
	HKSPObserverSet* _observers;
	os_unfair_lock_s _lock;
	BOOL _isMuted;

}

@property (nonatomic,readonly) BOOL isMuted; 
-(id)init;
-(void)addObserver:(id)arg1 queue:(id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(void)_updateIsMuted;
-(void)setIsMuted:(BOOL)arg1 ;
-(BOOL)isMuted;
-(void)dealloc;
@end

