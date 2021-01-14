/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
*/

#import <CTCarrierSpace/CTCarrierSpace-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CTCarrierSpaceCapabilities : NSObject <NSCopying, NSSecureCoding> {

	BOOL _supportsServices;
	BOOL _supportsUsage;
	BOOL _supportsPlans;
	BOOL _supportsApplications;

}

@property (assign,nonatomic) BOOL supportsServices;                  //@synthesize supportsServices=_supportsServices - In the implementation block
@property (assign,nonatomic) BOOL supportsUsage;                     //@synthesize supportsUsage=_supportsUsage - In the implementation block
@property (assign,nonatomic) BOOL supportsPlans;                     //@synthesize supportsPlans=_supportsPlans - In the implementation block
@property (assign,nonatomic) BOOL supportsApplications;              //@synthesize supportsApplications=_supportsApplications - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)supportsUsage;
-(BOOL)supportsPlans;
-(BOOL)supportsServices;
-(void)setSupportsUsage:(BOOL)arg1 ;
-(void)setSupportsPlans:(BOOL)arg1 ;
-(void)setSupportsApplications:(BOOL)arg1 ;
-(BOOL)supportsApplications;
-(void)setSupportsServices:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

