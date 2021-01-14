/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/


@interface CLSUtil : NSObject
+(BOOL)isAppleInternalInstall;
+(id)stringFromTimeInterval:(double)arg1 ;
+(void)postNotification:(char*)arg1 ;
+(id)hashData:(id)arg1 lastHash:(id)arg2 ;
+(id)mediumStringFromDate:(id)arg1 ;
+(id)percentNumberFormatter;
+(id)mediumDateFormatter;
+(id)hashData:(id)arg1 lastHashData:(id)arg2 ;
+(BOOL)isSystemIntegrityEnabled;
+(id)percentageStringFromNumber:(id)arg1 ;
+(id)dataFromPath:(id)arg1 makeBackwardCompatible:(BOOL)arg2 error:(id*)arg3 ;
+(id)pathFromData:(id)arg1 ;
+(id)dataFromError:(id)arg1 ;
+(id)errorFromData:(id)arg1 ;
+(id)hashArrayOfStrings:(id)arg1 lastHash:(id)arg2 ;
+(void)postNotificationAsync:(char*)arg1 ;
+(id)userDefaultsConfigurationDictionaryAndReturnError:(id*)arg1 ;
+(void)fetchInfoForAppWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

