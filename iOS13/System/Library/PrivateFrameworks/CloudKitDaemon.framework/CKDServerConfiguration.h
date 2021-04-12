/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <libobjc.A.dylib/CKPropertyCoding.h>

@class NSDate, NSMutableDictionary, NSString;

@interface CKDServerConfiguration : NSObject <CKPropertyCoding> {

	NSDate* _expiry;
	NSMutableDictionary* _values;
	NSMutableDictionary* _allowedAppVersionsCache;

}

@property (nonatomic,retain) NSMutableDictionary * values;                               //@synthesize values=_values - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allowedAppVersionsCache;              //@synthesize allowedAppVersionsCache=_allowedAppVersionsCache - In the implementation block
@property (nonatomic,retain) NSDate * expiry;                                            //@synthesize expiry=_expiry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)setValues:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)values;
-(id)initWithValues:(id)arg1 ;
-(NSDate *)expiry;
-(BOOL)isExpired;
-(id)dictionaryPropertyEncoding;
-(id)initWithPropertyDictionary:(id)arg1 ;
-(id)flowControlBudgetForContainer:(id)arg1 ;
-(id)flowControlRegenerationForContainer:(id)arg1 ;
-(id)flowControlMaximumThrottleTime:(id)arg1 ;
-(double)publicIdentitiesExpirationTimeoutForContainer:(id)arg1 ;
-(BOOL)applicationWithBundleID:(id)arg1 canSyncUsingVersion:(id)arg2 forContainer:(id)arg3 ;
-(unsigned long long)maxBatchSizeForContainer:(id)arg1 ;
-(BOOL)allowExpiredDNSBehavior:(id)arg1 ;
-(unsigned long long)c2AllOperationMetricsReportFrequency:(id)arg1 ;
-(unsigned long long)c2AllOperationMetricsReportFrequencyBase:(id)arg1 ;
-(unsigned long long)c2AllOperationGroupMetricsReportFrequency:(id)arg1 ;
-(unsigned long long)c2AllOperationGroupMetricsReportFrequencyBase:(id)arg1 ;
-(unsigned long long)c2NetworkMetricsReportFrequency:(id)arg1 ;
-(unsigned long long)c2NetworkMetricsReportFrequencyBase:(id)arg1 ;
-(unsigned long long)c2ClientOperationMetricsReportFrequency:(id)arg1 ;
-(unsigned long long)c2ClientOperationMetricsReportFrequencyBase:(id)arg1 ;
-(unsigned long long)c2ClientApplicationMetricsReportFrequency:(id)arg1 ;
-(unsigned long long)c2ClientApplicationMetricsReportFrequencyBase:(id)arg1 ;
-(long long)tokenRegisterDaysForContainer:(id)arg1 ;
-(id)transcodeServerPublicKeyURLsForContainer:(id)arg1 ;
-(id)iCloudHostnames;
-(void)setExpiry:(NSDate *)arg1 ;
-(NSMutableDictionary *)allowedAppVersionsCache;
-(void)setAllowedAppVersionsCache:(NSMutableDictionary *)arg1 ;
-(id)valueForKeyPath:(id)arg1 forContainer:(id)arg2 ;
@end

