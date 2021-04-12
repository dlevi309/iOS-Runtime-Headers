/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/

#import <Proximity/Proximity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PRRoseSolution : NSObject <NSCopying, NSSecureCoding> {

	BOOL _mach_continuous_time_valid;
	BOOL _az_valid;
	BOOL _el_valid;
	BOOL _soi_rssi_valid;
	long long _variant;
	unsigned long long _mac_addr;
	double _mach_absolute_time_sec;
	double _mach_continuous_time_sec;
	double _range_m;
	double _range_unc_m;
	double _az_deg;
	double _el_deg;
	double _az_unc_deg;
	double _el_unc_deg;
	double _fov_confidence;
	double _soi_rssi_dbm;
	long long _antenna_type;

}

@property (nonatomic,readonly) long long variant;                            //@synthesize variant=_variant - In the implementation block
@property (nonatomic,readonly) unsigned long long mac_addr;                  //@synthesize mac_addr=_mac_addr - In the implementation block
@property (nonatomic,readonly) double mach_absolute_time_sec;                //@synthesize mach_absolute_time_sec=_mach_absolute_time_sec - In the implementation block
@property (nonatomic,readonly) BOOL mach_continuous_time_valid;              //@synthesize mach_continuous_time_valid=_mach_continuous_time_valid - In the implementation block
@property (nonatomic,readonly) double mach_continuous_time_sec;              //@synthesize mach_continuous_time_sec=_mach_continuous_time_sec - In the implementation block
@property (nonatomic,readonly) double range_m;                               //@synthesize range_m=_range_m - In the implementation block
@property (nonatomic,readonly) double range_unc_m;                           //@synthesize range_unc_m=_range_unc_m - In the implementation block
@property (nonatomic,readonly) BOOL az_valid;                                //@synthesize az_valid=_az_valid - In the implementation block
@property (nonatomic,readonly) BOOL el_valid;                                //@synthesize el_valid=_el_valid - In the implementation block
@property (nonatomic,readonly) double az_deg;                                //@synthesize az_deg=_az_deg - In the implementation block
@property (nonatomic,readonly) double el_deg;                                //@synthesize el_deg=_el_deg - In the implementation block
@property (nonatomic,readonly) double az_unc_deg;                            //@synthesize az_unc_deg=_az_unc_deg - In the implementation block
@property (nonatomic,readonly) double el_unc_deg;                            //@synthesize el_unc_deg=_el_unc_deg - In the implementation block
@property (nonatomic,readonly) double fov_confidence;                        //@synthesize fov_confidence=_fov_confidence - In the implementation block
@property (nonatomic,readonly) BOOL soi_rssi_valid;                          //@synthesize soi_rssi_valid=_soi_rssi_valid - In the implementation block
@property (nonatomic,readonly) double soi_rssi_dbm;                          //@synthesize soi_rssi_dbm=_soi_rssi_dbm - In the implementation block
@property (nonatomic,readonly) long long antenna_type;                       //@synthesize antenna_type=_antenna_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)variant;
-(double)range_m;
-(double)range_unc_m;
-(BOOL)az_valid;
-(double)az_deg;
-(double)az_unc_deg;
-(BOOL)el_valid;
-(double)el_deg;
-(double)el_unc_deg;
-(double)mach_absolute_time_sec;
-(id)initWithVariant:(long long)arg1 macAddr:(unsigned long long)arg2 machAbsTime_sec:(double)arg3 machContTimeValid:(BOOL)arg4 machContTime_sec:(double)arg5 range_m:(double)arg6 rangeUnc_m:(double)arg7 azValid:(BOOL)arg8 elValid:(BOOL)arg9 az_deg:(double)arg10 el_deg:(double)arg11 azUnc_deg:(double)arg12 elUnc_deg:(double)arg13 fovConfidence:(double)arg14 soiRssiValid:(BOOL)arg15 soiRssi_dBm:(double)arg16 antennaType:(long long)arg17 ;
-(unsigned long long)mac_addr;
-(BOOL)mach_continuous_time_valid;
-(double)mach_continuous_time_sec;
-(double)fov_confidence;
-(BOOL)soi_rssi_valid;
-(double)soi_rssi_dbm;
-(long long)antenna_type;
@end

