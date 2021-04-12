/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/


@interface TSNotificationSettings : NSObject {

	 authorizationStatus;
	 sound;
	 badge;
	 showOnLockScreen;
	 showInNotificationCenter;
	 showBanners;

}

@property (readonly,nonatomic) long long authorizationStatus; 
@property (readonly,nonatomic) BOOL sound; 
@property (readonly,nonatomic) BOOL badge; 
@property (readonly,nonatomic) BOOL showOnLockScreen; 
@property (readonly,nonatomic) BOOL showInNotificationCenter; 
@property (readonly,nonatomic) BOOL showBanners; 
-(BOOL)showBanners;
-(BOOL)sound;
-(id)init;
-(BOOL)badge;
-(long long)authorizationStatus;
-(BOOL)showInNotificationCenter;
-(id)initWithSystemSettings:(id)arg1 ;
-(BOOL)showOnLockScreen;
@end

