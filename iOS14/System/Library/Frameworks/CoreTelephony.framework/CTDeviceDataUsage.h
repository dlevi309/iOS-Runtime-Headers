/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSArray;

@interface CTDeviceDataUsage : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _periods;
	NSMutableDictionary* _apps;
	NSMutableDictionary* _uninstalledApps;
	NSMutableDictionary* _proxiedOnlyApps;
	NSMutableDictionary* _systemServices;
	NSArray* _wifiAssist;

}

@property (assign) unsigned long long periods;                         //@synthesize periods=_periods - In the implementation block
@property (retain) NSMutableDictionary * apps;                         //@synthesize apps=_apps - In the implementation block
@property (retain) NSMutableDictionary * uninstalledApps;              //@synthesize uninstalledApps=_uninstalledApps - In the implementation block
@property (retain) NSMutableDictionary * proxiedOnlyApps;              //@synthesize proxiedOnlyApps=_proxiedOnlyApps - In the implementation block
@property (retain) NSMutableDictionary * systemServices;               //@synthesize systemServices=_systemServices - In the implementation block
@property (retain) NSArray * wifiAssist;                               //@synthesize wifiAssist=_wifiAssist - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)periods;
-(void)setApps:(NSMutableDictionary *)arg1 ;
-(void)setPeriods:(unsigned long long)arg1 ;
-(NSArray *)wifiAssist;
-(id)totalSystemServiceDataUsedForPeriod:(unsigned long long)arg1 ;
-(id)totalUninstalledAppDataUsageForPeriod:(unsigned long long)arg1 ;
-(id)totalProxiedOnlyAppDataUsageForPeriod:(unsigned long long)arg1 ;
-(id)uninstalledAppDataUsageForPeriod:(unsigned long long)arg1 ;
-(id)totalUninstalledAppDataUsedForPeriod:(unsigned long long)arg1 ;
-(id)totalProxiedOnlyAppDataUsedForPeriod:(unsigned long long)arg1 ;
-(id)totalSystemServiceDataUsageForPeriod:(unsigned long long)arg1 ;
-(id)proxiedOnlyAppDataUsageForPeriod:(unsigned long long)arg1 ;
-(NSMutableDictionary *)systemServices;
-(void)setWifiAssist:(NSArray *)arg1 ;
-(id)totalAppDataUsageForPeriod:(unsigned long long)arg1 ;
-(id)systemServiceDataUsageForPeriod:(unsigned long long)arg1 ;
-(id)totalAppDataUsedForPeriod:(unsigned long long)arg1 ;
-(NSMutableDictionary *)uninstalledApps;
-(id)totalDataUsage:(id)arg1 forPeriod:(unsigned long long)arg2 ;
-(NSMutableDictionary *)proxiedOnlyApps;
-(id)totalWifiAssistUsageForPeriod:(unsigned long long)arg1 ;
-(id)totalDataUsageForPeriod:(unsigned long long)arg1 ;
-(id)appDataUsageForPeriod:(unsigned long long)arg1 ;
-(void)setSystemServices:(NSMutableDictionary *)arg1 ;
-(id)dataUsage:(id)arg1 forPeriod:(unsigned long long)arg2 ;
-(id)totalDataUsedForPeriod:(unsigned long long)arg1 ;
-(void)setUninstalledApps:(NSMutableDictionary *)arg1 ;
-(void)setProxiedOnlyApps:(NSMutableDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSMutableDictionary *)apps;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

