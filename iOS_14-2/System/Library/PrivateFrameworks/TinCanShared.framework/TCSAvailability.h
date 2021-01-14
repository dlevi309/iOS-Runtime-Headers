/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)dealloc;
-(void)_postNotificationName:(id)arg1 ;
-(void)_handleDeviceFirstUnlock;
-(BOOL)_calculateShouldShowStatusIndicator;
-(void)setShouldObserveUnavailabilityDefaultChanges:(BOOL)arg1 ;
-(BOOL)_isUserUnavailable;
-(void)_setUserUnavailable:(BOOL)arg1 ;
-(BOOL)shouldShowStatusIndicator;
-(void)setShouldShowStatusIndicator:(BOOL)arg1 ;
-(id)_unavailabilityText:(BOOL)arg1 ;
-(BOOL)shouldObserveUnavailabilityDefaultChanges;
@end

