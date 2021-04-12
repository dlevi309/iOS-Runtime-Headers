/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface HKClinicalBrand : NSObject <NSCopying, NSSecureCoding> {

	NSString* _externalID;
	NSString* _batchID;

}

@property (nonatomic,copy,readonly) NSString * externalID;                                                   //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,copy,readonly) NSString * batchID;                                                      //@synthesize batchID=_batchID - In the implementation block
@property (getter=isFakeBrandForTestAccounts,nonatomic,readonly) BOOL fakeBrandForTestAccounts; 
+(BOOL)supportsSecureCoding;
+(id)createFakeBrandForTestAccounts;
-(id)init;
-(NSString *)externalID;
-(NSString *)batchID;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isFakeBrandForTestAccounts;
-(id)initWithExternalID:(id)arg1 batchID:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

