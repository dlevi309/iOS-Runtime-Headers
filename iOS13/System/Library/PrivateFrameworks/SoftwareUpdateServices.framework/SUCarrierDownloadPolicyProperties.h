/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SUCarrierDownloadPolicyProperties : NSObject <NSSecureCoding>
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_boolForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(unsigned long long)_unsignedIntegerForKey:(id)arg1 defaultValue:(long long)arg2 ;
-(id)_numberForKey:(id)arg1 ;
-(long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2 ;
-(long long)_longLongForKey:(id)arg1 defaultValue:(long long)arg2 ;
-(BOOL)_isValidHour:(long long)arg1 ;
-(id)_carrierSUProperties;
-(BOOL)isDownloadFree;
-(BOOL)isDownloadAllowable;
-(BOOL)isDownloadAllowableOver2G;
-(BOOL)isAutoDownloadAllowable;
-(long long)maximumDownloadSizeInBytes;
-(unsigned long long)numberOfDaysToWaitForCellularAutoDownload;
-(long long)peakStartHour;
-(long long)peakEndHour;
@end

