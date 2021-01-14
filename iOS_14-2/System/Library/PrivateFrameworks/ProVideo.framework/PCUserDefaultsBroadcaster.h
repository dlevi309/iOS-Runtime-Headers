/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@class NSMutableDictionary;

@interface PCUserDefaultsBroadcaster : NSObject {

	NSMutableDictionary* _userDefaultsBroadcasted;

}
+(id)sharedInstance;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)dealloc;
-(id)observersForUserDefault:(id)arg1 ;
-(void)removeObserver:(id)arg1 forUserDefault:(id)arg2 fromObservers:(id)arg3 ;
-(BOOL)isWeakReferenceHashTableEmpty:(id)arg1 ;
-(void)removeObserversForUserDefault:(id)arg1 ;
-(void)addObserver:(id)arg1 ofUserDefaults:(id)arg2 ;
-(void)removeObserver:(id)arg1 ofUserDefaults:(id)arg2 ;
-(BOOL)hasObserversOfUserDefault:(id)arg1 ;
@end

