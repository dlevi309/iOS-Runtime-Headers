/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
*/

@class NSDate, NSString, NSDictionary;


@protocol APMetricProtocol <NSObject,NSCopying,NSSecureCoding>
@property (nonatomic,readonly) long long route; 
@property (nonatomic,readonly) long long metric; 
@property (nonatomic,readonly) NSDate * timestamp; 
@property (nonatomic,readonly) NSString * contentIdentifier; 
@property (nonatomic,readonly) NSString * contextIdentifier; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * os; 
@property (nonatomic,readonly) NSString * osVersion; 
@property (nonatomic,readonly) NSString * osBuild; 
@property (nonatomic,readonly) NSString * deviceModel; 
@property (nonatomic,readonly) NSString * clientBundleIdentifier; 
@property (nonatomic,readonly) NSString * deviceIdentifier; 
@property (nonatomic,readonly) NSString * userIdentifier; 
@property (nonatomic,readonly) NSDictionary * properties; 
@property (nonatomic,readonly) NSDictionary * internalProperties; 
@property (nonatomic,readonly) long long options; 
@property (nonatomic,readonly) NSDictionary * serverDictionaryRepresentation; 
@property (nonatomic,readonly) BOOL areNetworkDates; 
@required
-(NSString *)deviceIdentifier;
-(NSString *)clientBundleIdentifier;
-(NSString *)userIdentifier;
-(NSString *)deviceModel;
-(NSDictionary *)properties;
-(long long)route;
-(NSString *)osBuild;
-(NSDate *)timestamp;
-(long long)metric;
-(NSString *)osVersion;
-(long long)options;
-(NSString *)contentIdentifier;
-(NSString *)os;
-(NSString *)contextIdentifier;
-(NSString *)identifier;
-(BOOL)areNetworkDates;
-(id)initWithRoute:(long long)arg1 metric:(long long)arg2 contentIdentifier:(id)arg3 contextIdentifier:(id)arg4 identifier:(id)arg5 properties:(id)arg6 internalProperties:(id)arg7 options:(long long)arg8;
-(id)duplicateMetricReplacingIdentifier:(id)arg1;
-(NSDictionary *)internalProperties;
-(NSDictionary *)serverDictionaryRepresentation;

@end

