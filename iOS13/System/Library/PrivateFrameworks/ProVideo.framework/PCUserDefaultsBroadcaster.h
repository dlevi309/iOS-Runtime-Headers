/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@class NSMutableDictionary;

@interface PCUserDefaultsBroadcaster : NSObject {

	NSMutableDictionary* _userDefaultsBroadcasted;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)observersForUserDefault:(id)arg1 ;
-(void)removeObserver:(id)arg1 forUserDefault:(id)arg2 fromObservers:(id)arg3 ;
-(BOOL)isWeakReferenceHashTableEmpty:(id)arg1 ;
-(void)removeObserversForUserDefault:(id)arg1 ;
-(void)addObserver:(id)arg1 ofUserDefaults:(id)arg2 ;
-(void)removeObserver:(id)arg1 ofUserDefaults:(id)arg2 ;
-(BOOL)hasObserversOfUserDefault:(id)arg1 ;
@end

