/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(long long)authorizationStatus;
-(BOOL)sound;
-(BOOL)badge;
-(BOOL)showOnLockScreen;
-(BOOL)showInNotificationCenter;
-(BOOL)showBanners;
-(id)initWithSystemSettings:(id)arg1 ;
@end

