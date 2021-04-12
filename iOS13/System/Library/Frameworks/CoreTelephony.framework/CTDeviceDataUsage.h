/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)periods;
-(NSMutableDictionary *)apps;
-(id)dataUsage:(id)arg1 forPeriod:(unsigned long long)arg2 ;
-(NSMutableDictionary *)uninstalledApps;
-(NSMutableDictionary *)proxiedOnlyApps;
-(NSMutableDictionary *)systemServices;
-(id)totalDataUsage:(id)arg1 forPeriod:(unsigned long long)arg2 ;
-(NSArray *)wifiAssist;
-(id)totalDataUsedForPeriod:(unsigned long long)arg1 ;
-(id)appDataUsageForPeriod:(unsigned long long)arg1 ;
-(id)uninstalledAppDataUsageForPeriod:(unsigned long long)arg1 ;
-(id)proxiedOnlyAppDataUsageForPeriod:(unsigned long long)arg1 ;
-(id)systemServiceDataUsageForPeriod:(unsigned long long)arg1 ;
-(id)totalAppDataUsedForPeriod:(unsigned long long)arg1 ;
-(id)totalUninstalledAppDataUsedForPeriod:(unsigned long long)arg1 ;
-(id)totalProxiedOnlyAppDataUsedForPeriod:(unsigned long long)arg1 ;
-(id)totalSystemServiceDataUsedForPeriod:(unsigned long long)arg1 ;
-(id)totalDataUsageForPeriod:(unsigned long long)arg1 ;
-(id)totalAppDataUsageForPeriod:(unsigned long long)arg1 ;
-(id)totalUninstalledAppDataUsageForPeriod:(unsigned long long)arg1 ;
-(id)totalProxiedOnlyAppDataUsageForPeriod:(unsigned long long)arg1 ;
-(id)totalSystemServiceDataUsageForPeriod:(unsigned long long)arg1 ;
-(id)totalWifiAssistUsageForPeriod:(unsigned long long)arg1 ;
-(void)setPeriods:(unsigned long long)arg1 ;
-(void)setApps:(NSMutableDictionary *)arg1 ;
-(void)setUninstalledApps:(NSMutableDictionary *)arg1 ;
-(void)setProxiedOnlyApps:(NSMutableDictionary *)arg1 ;
-(void)setSystemServices:(NSMutableDictionary *)arg1 ;
-(void)setWifiAssist:(NSArray *)arg1 ;
@end

