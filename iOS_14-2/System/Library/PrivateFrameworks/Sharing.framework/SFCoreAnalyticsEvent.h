/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

@class NSDictionary;


@protocol SFCoreAnalyticsEvent <NSObject>
@property (nonatomic,copy,readonly) NSDictionary * eventPayload; 
@required
+(id)eventName;
-(void)submitEvent;
-(NSDictionary *)eventPayload;

@end

