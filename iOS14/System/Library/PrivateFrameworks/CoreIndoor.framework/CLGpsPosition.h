/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
*/

#import <CoreIndoor/CoreIndoor-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLGpsPosition : NSObject <NSSecureCoding> {

	time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > _expiry;
	SCD_Struct_CL29 _gpsLocation;
	SCD_Struct_CL31 _gpsLocationPrivate;

}

@property (nonatomic,readonly) time_point<std::__1::chrono::steady_clock expiry;              //@synthesize expiry=_expiry - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CL32 gpsLocation;                                   //@synthesize gpsLocation=_gpsLocation - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CL33 gpsLocationPrivate;                            //@synthesize gpsLocationPrivate=_gpsLocationPrivate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(SCD_Struct_CL32)gpsLocation;
-(id)initWithLocation:(const SCD_Struct_CL32*)arg1 andPrivateLocation:(const SCD_Struct_CL33*)arg2 ;
-(id)description;
-(BOOL)isStaleFix:(time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > >)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_CL33)gpsLocationPrivate;
-(time_point<std::__1::chrono::steady_clock)expiry;
@end

