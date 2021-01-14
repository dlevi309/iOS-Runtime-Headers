/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface USApplicationUsageReport : NSObject <NSSecureCoding> {

	BOOL _applicationUsageTrusted;
	NSString* _canonicalBundleIdentifier;
	double _totalUsageTime;
	NSDictionary* _applicationUsageByBundleIdentifier;
	NSDictionary* _webUsageByDomain;
	NSDictionary* _userNotificationsByBundleIdentifier;
	NSDictionary* _pickupsByBundleIdentifier;

}

@property (copy) NSDictionary * userNotificationsByBundleIdentifier;                      //@synthesize userNotificationsByBundleIdentifier=_userNotificationsByBundleIdentifier - In the implementation block
@property (copy) NSDictionary * pickupsByBundleIdentifier;                                //@synthesize pickupsByBundleIdentifier=_pickupsByBundleIdentifier - In the implementation block
@property (copy,readonly) NSString * canonicalBundleIdentifier;                           //@synthesize canonicalBundleIdentifier=_canonicalBundleIdentifier - In the implementation block
@property (readonly) BOOL applicationUsageTrusted;                                        //@synthesize applicationUsageTrusted=_applicationUsageTrusted - In the implementation block
@property (readonly) double totalUsageTime;                                               //@synthesize totalUsageTime=_totalUsageTime - In the implementation block
@property (copy,readonly) NSDictionary * applicationUsageByBundleIdentifier;              //@synthesize applicationUsageByBundleIdentifier=_applicationUsageByBundleIdentifier - In the implementation block
@property (copy,readonly) NSDictionary * webUsageByDomain;                                //@synthesize webUsageByDomain=_webUsageByDomain - In the implementation block
@property (readonly) unsigned long long totalUserNotifications; 
@property (readonly) unsigned long long totalPickups; 
@property (copy,readonly) NSString * bundleIdentifier; 
@property (readonly) double applicationUsageTime; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)totalPickups;
-(NSString *)canonicalBundleIdentifier;
-(double)applicationUsageTime;
-(double)totalUsageTime;
-(id)initWithCanonicalBundleIdentifier:(id)arg1 applicationUsageTrusted:(BOOL)arg2 totalUsageTime:(double)arg3 applicationUsageByBundleIdentifier:(id)arg4 webUsageByDomain:(id)arg5 userNotificationsByBundleIdentifier:(id)arg6 pickupsByBundleIdentifier:(id)arg7 ;
-(void)setUserNotificationsByBundleIdentifier:(NSDictionary *)arg1 ;
-(void)setPickupsByBundleIdentifier:(NSDictionary *)arg1 ;
-(NSDictionary *)userNotificationsByBundleIdentifier;
-(NSDictionary *)pickupsByBundleIdentifier;
-(void)_usApplicationUsageReportCommonInitWithCanonicalBundleIdentifier:(id)arg1 applicationUsageTrusted:(BOOL)arg2 totalUsageTime:(double)arg3 applicationUsageByBundleIdentifier:(id)arg4 webUsageByDomain:(id)arg5 userNotificationsByBundleIdentifier:(id)arg6 pickupsByBundleIdentifier:(id)arg7 ;
-(NSDictionary *)applicationUsageByBundleIdentifier;
-(BOOL)applicationUsageTrusted;
-(NSDictionary *)webUsageByDomain;
-(id)initWithBundleIdentifier:(id)arg1 totalUsageTime:(double)arg2 applicationUsageTime:(double)arg3 webUsageByDomain:(id)arg4 ;
-(id)initWithCanonicalBundleIdentifier:(id)arg1 totalUsageTime:(double)arg2 applicationUsageByBundleIdentifier:(id)arg3 webUsageByDomain:(id)arg4 userNotificationsByBundleIdentifier:(id)arg5 pickupsByBundleIdentifier:(id)arg6 ;
-(unsigned long long)totalUserNotifications;
@end

