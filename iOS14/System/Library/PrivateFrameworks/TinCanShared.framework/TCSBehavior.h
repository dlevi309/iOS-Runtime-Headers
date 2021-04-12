/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)isAppleInternalInstall;
+(BOOL)isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
+(id)_regionCode;
+(BOOL)_isAppleInternalInstall;
+(id)sharedBehavior;
+(BOOL)_isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
+(BOOL)_isM8Device;
+(BOOL)isM8Device;
-(NSString *)regionCode;
-(id)init;
-(BOOL)isAppleInternalInstall;
-(BOOL)isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
-(void)dealloc;
-(void)_handleDeviceFirstUnlock;
-(BOOL)isM8Device;
@end

