/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
*/

@class NSDate, NSString, NSDictionary;


@protocol APPCMetricable
@property (readonly,nonatomic) long long route; 
@property (readonly,nonatomic) long long metric; 
@property (readonly,nonatomic) NSDate * timestamp; 
@property (readonly,nonatomic) NSString * contentId; 
@property (readonly,nonatomic) NSString * clientBundleIdentifier; 
@property (readonly,nonatomic) NSString * deviceIdentifier; 
@property (readonly,nonatomic) NSString * userIdentifier; 
@property (readonly,nonatomic) NSDictionary * properties; 
@required
-(NSString *)deviceIdentifier;
-(NSString *)contentId;
-(NSString *)clientBundleIdentifier;
-(NSString *)userIdentifier;
-(NSDictionary *)properties;
-(long long)route;
-(NSDate *)timestamp;
-(long long)metric;

@end

