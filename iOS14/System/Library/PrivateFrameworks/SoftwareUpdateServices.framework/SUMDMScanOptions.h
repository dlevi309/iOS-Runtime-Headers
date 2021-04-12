/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <SoftwareUpdateServices/SUOptionsBase.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SUScanOptions, NSString;

@interface SUMDMScanOptions : SUOptionsBase <NSSecureCoding, NSCopying> {

	SUScanOptions* _scanOptions;

}

@property (nonatomic,retain) SUScanOptions * scanOptions;                                       //@synthesize scanOptions=_scanOptions - In the implementation block
@property (nonatomic,retain,readonly) NSString * requestedProductMarketingVersion; 
@property (nonatomic,readonly) BOOL useDelayPeriod; 
@property (nonatomic,readonly) unsigned long long delayPeriodDays; 
-(void)setScanOptions:(SUScanOptions *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(SUScanOptions *)scanOptions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)useDelayPeriod;
-(BOOL)deviceIsSupervised;
-(NSString *)requestedProductMarketingVersion;
-(id)initWithScanOption:(id)arg1 ;
-(unsigned long long)delayPeriodDays;
@end

