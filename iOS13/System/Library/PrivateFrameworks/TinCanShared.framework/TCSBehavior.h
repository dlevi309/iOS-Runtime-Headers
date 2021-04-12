/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
*/


@class NSString;

@interface TCSBehavior : NSObject {

	int _firstUnlockToken;
	BOOL _isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
	BOOL _isAppleInternalInstall;
	BOOL _isM8Device;
	NSString* _regionCode;

}

@property (nonatomic,readonly) BOOL isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;              //@synthesize isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot=_isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot - In the implementation block
@property (nonatomic,readonly) BOOL isAppleInternalInstall;                                       //@synthesize isAppleInternalInstall=_isAppleInternalInstall - In the implementation block
@property (nonatomic,readonly) BOOL isM8Device;                                                   //@synthesize isM8Device=_isM8Device - In the implementation block
@property (nonatomic,readonly) NSString * regionCode;                                             //@synthesize regionCode=_regionCode - In the implementation block
+(id)regionCode;
+(id)_regionCode;
+(BOOL)isAppleInternalInstall;
+(BOOL)isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
+(id)sharedBehavior;
+(BOOL)_isAppleInternalInstall;
+(BOOL)_isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
+(BOOL)_isM8Device;
+(BOOL)isM8Device;
-(id)init;
-(void)dealloc;
-(NSString *)regionCode;
-(BOOL)isAppleInternalInstall;
-(BOOL)isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
-(void)_handleDeviceFirstUnlock;
-(BOOL)isM8Device;
@end

