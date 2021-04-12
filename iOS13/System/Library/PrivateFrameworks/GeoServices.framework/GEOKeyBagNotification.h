/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@interface GEOKeyBagNotification : NSObject {

	int _currentState;
	int _notifyToken;

}

@property (nonatomic,readonly) int state; 
+(id)sharedObject;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(int)state;
-(BOOL)canAccessFilesWithProtection:(unsigned long long)arg1 ;
-(void)updateState;
-(void)_statusChanged;
-(BOOL)addDataDidBecomeAvailableObserver:(id)arg1 ifTypeIsNotCurrentlyAccessible:(unsigned long long)arg2 ;
@end

