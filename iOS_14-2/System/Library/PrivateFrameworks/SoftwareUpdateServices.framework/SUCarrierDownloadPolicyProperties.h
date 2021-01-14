/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CoreTelephonyClient, NSMutableDictionary;

@interface SUCarrierDownloadPolicyProperties : NSObject <NSSecureCoding> {

	CoreTelephonyClient* _client;
	NSMutableDictionary* _keyMap;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)_boolForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(id)_numberForKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2 ;
-(unsigned long long)_unsignedIntegerForKey:(id)arg1 defaultValue:(long long)arg2 ;
-(void)dealloc;
-(long long)_longLongForKey:(id)arg1 defaultValue:(long long)arg2 ;
-(BOOL)_isValidHour:(long long)arg1 ;
-(BOOL)isDownloadFree;
-(BOOL)isDownloadAllowable;
-(BOOL)isDownloadAllowableOver2G;
-(BOOL)isAutoDownloadAllowable;
-(long long)maximumDownloadSizeInBytes;
-(unsigned long long)numberOfDaysToWaitForCellularDownload;
-(long long)peakStartHour;
-(long long)peakEndHour;
-(BOOL)allowInexpensiveHDMUnlimited;
@end

