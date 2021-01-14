/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
*/

#import <libobjc.A.dylib/APPCMetricable.h>

@class NSDate, NSString, NSDictionary;

@interface APPCMetric : NSObject <APPCMetricable> {

	 route;
	 metric;
	 contentId;
	 clientBundleIdentifier;
	 deviceIdentifier;
	 userIdentifier;
	 properties;

}

@property (assign,nonatomic) long long route; 
@property (assign,nonatomic) long long metric; 
@property (copy,nonatomic) NSDate * timestamp; 
@property (copy,nonatomic) NSString * contentId; 
@property (copy,nonatomic) NSString * clientBundleIdentifier; 
@property (copy,nonatomic) NSString * deviceIdentifier; 
@property (copy,nonatomic) NSString * userIdentifier; 
@property (copy,nonatomic) NSDictionary * properties; 
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)contentId;
-(void)setRoute:(long long)arg1 ;
-(NSString *)clientBundleIdentifier;
-(void)setContentId:(NSString *)arg1 ;
-(NSString *)userIdentifier;
-(NSDictionary *)properties;
-(long long)route;
-(id)init;
-(void)setClientBundleIdentifier:(NSString *)arg1 ;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(NSDate *)timestamp;
-(long long)metric;
-(void)setProperties:(NSDictionary *)arg1 ;
-(void)setMetric:(long long)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
@end

