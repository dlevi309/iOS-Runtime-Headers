/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@interface GEOKeyBagNotification : NSObject {

	int _currentState;
	int _notifyToken;

}

@property (nonatomic,readonly) int state; 
+(id)sharedObject;
-(id)init;
-(BOOL)addDataDidBecomeAvailableObserver:(id)arg1 ifTypeIsNotCurrentlyAccessible:(unsigned long long)arg2 ;
-(void)updateState;
-(BOOL)canAccessFilesWithProtection:(unsigned long long)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_statusChanged;
-(int)state;
-(void)dealloc;
@end

