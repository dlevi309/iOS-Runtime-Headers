/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CTSweetgumCapabilities : NSObject <NSCopying, NSSecureCoding> {

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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)supportsServices;
-(BOOL)supportsUsage;
-(BOOL)supportsPlans;
-(BOOL)supportsApplications;
-(void)setSupportsServices:(BOOL)arg1 ;
-(void)setSupportsUsage:(BOOL)arg1 ;
-(void)setSupportsPlans:(BOOL)arg1 ;
-(void)setSupportsApplications:(BOOL)arg1 ;
@end

