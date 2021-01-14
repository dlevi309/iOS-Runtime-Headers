/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/

@class NSString, NSDate;


@protocol CPAnalyticsEventProtocol <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSDate * timestamp; 
@required
-(NSDate *)timestamp;
-(id)propertyForKey:(id)arg1;
-(NSString *)name;
-(id)copyRawPayload;

@end

