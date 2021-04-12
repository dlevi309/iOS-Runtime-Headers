/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
*/


@class NSUserDefaults, NPSManager;

@interface TCSAvailability : NSObject {

	NSUserDefaults* _tinCanDefaults;
	NPSManager* _npsManager;
	BOOL _shouldObserveUnavailabilityDefaultChanges;
	BOOL _shouldShowStatusIndicator;

}

@property (assign,nonatomic) BOOL shouldObserveUnavailabilityDefaultChanges;              //@synthesize shouldObserveUnavailabilityDefaultChanges=_shouldObserveUnavailabilityDefaultChanges - In the implementation block
@property (assign,nonatomic) BOOL shouldShowStatusIndicator;                              //@synthesize shouldShowStatusIndicator=_shouldShowStatusIndicator - In the implementation block
+(id)sharedInstance;
+(BOOL)isUserAvailable;
+(void)setUserAvailable:(BOOL)arg1 ;
+(BOOL)shouldShowWalkieTalkieStatusIndicator;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_postNotificationName:(id)arg1 ;
-(void)_handleDeviceFirstUnlock;
-(void)setShouldObserveUnavailabilityDefaultChanges:(BOOL)arg1 ;
-(BOOL)_calculateShouldShowStatusIndicator;
-(BOOL)_isUserUnavailable;
-(void)_setUserUnavailable:(BOOL)arg1 ;
-(BOOL)shouldShowStatusIndicator;
-(void)setShouldShowStatusIndicator:(BOOL)arg1 ;
-(id)_unavailabilityText:(BOOL)arg1 ;
-(BOOL)shouldObserveUnavailabilityDefaultChanges;
@end

