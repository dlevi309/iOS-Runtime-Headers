/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface USApplicationUsageReport : NSObject <NSSecureCoding> {

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
@property (readonly) double totalUsageTime;                                               //@synthesize totalUsageTime=_totalUsageTime - In the implementation block
@property (copy,readonly) NSDictionary * applicationUsageByBundleIdentifier;              //@synthesize applicationUsageByBundleIdentifier=_applicationUsageByBundleIdentifier - In the implementation block
@property (copy,readonly) NSDictionary * webUsageByDomain;                                //@synthesize webUsageByDomain=_webUsageByDomain - In the implementation block
@property (readonly) unsigned long long totalUserNotifications; 
@property (readonly) unsigned long long totalPickups; 
@property (copy,readonly) NSString * bundleIdentifier; 
@property (readonly) double applicationUsageTime; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)canonicalBundleIdentifier;
-(unsigned long long)totalPickups;
-(id)initWithCanonicalBundleIdentifier:(id)arg1 totalUsageTime:(double)arg2 applicationUsageByBundleIdentifier:(id)arg3 webUsageByDomain:(id)arg4 userNotificationsByBundleIdentifier:(id)arg5 pickupsByBundleIdentifier:(id)arg6 ;
-(void)setUserNotificationsByBundleIdentifier:(NSDictionary *)arg1 ;
-(void)setPickupsByBundleIdentifier:(NSDictionary *)arg1 ;
-(NSDictionary *)userNotificationsByBundleIdentifier;
-(NSDictionary *)pickupsByBundleIdentifier;
-(double)totalUsageTime;
-(void)_usApplicationUsageReportCommonInitWithCanonicalBundleIdentifier:(id)arg1 totalUsageTime:(double)arg2 applicationUsageByBundleIdentifier:(id)arg3 webUsageByDomain:(id)arg4 userNotificationsByBundleIdentifier:(id)arg5 pickupsByBundleIdentifier:(id)arg6 ;
-(double)applicationUsageTime;
-(NSDictionary *)applicationUsageByBundleIdentifier;
-(NSDictionary *)webUsageByDomain;
-(id)initWithBundleIdentifier:(id)arg1 totalUsageTime:(double)arg2 applicationUsageTime:(double)arg3 webUsageByDomain:(id)arg4 ;
-(unsigned long long)totalUserNotifications;
@end

