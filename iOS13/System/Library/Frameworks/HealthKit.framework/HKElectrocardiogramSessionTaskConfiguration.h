/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKTaskConfiguration.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKElectrocardiogramSessionConfiguration;

@interface HKElectrocardiogramSessionTaskConfiguration : HKTaskConfiguration <NSCopying> {

	HKElectrocardiogramSessionConfiguration* _sessionConfiguration;

}

@property (nonatomic,copy) HKElectrocardiogramSessionConfiguration * sessionConfiguration;              //@synthesize sessionConfiguration=_sessionConfiguration - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKElectrocardiogramSessionConfiguration *)sessionConfiguration;
-(void)setSessionConfiguration:(HKElectrocardiogramSessionConfiguration *)arg1 ;
@end

