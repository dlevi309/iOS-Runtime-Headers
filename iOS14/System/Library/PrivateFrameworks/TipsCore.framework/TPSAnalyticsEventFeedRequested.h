/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventFeedRequested : TPSAnalyticsEvent {

	BOOL _tipFeed;
	NSString* _serviceError;
	NSString* _clientError;

}

@property (nonatomic,retain) NSString * serviceError;              //@synthesize serviceError=_serviceError - In the implementation block
@property (nonatomic,retain) NSString * clientError;               //@synthesize clientError=_clientError - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)tipFeedRequestEventWithServiceError:(id)arg1 clientError:(id)arg2 ;
+(id)rulesFeedRequestEventWithServiceError:(id)arg1 clientError:(id)arg2 ;
-(void)setClientError:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)eventName;
-(NSString *)clientError;
-(NSString *)serviceError;
-(void)setServiceError:(NSString *)arg1 ;
-(id)_initTipFeedRequestWithServiceError:(id)arg1 clientError:(id)arg2 ;
-(id)_initRulesFeedRequestWithServiceError:(id)arg1 clientError:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)mutableAnalyticsEventRepresentation;
@end

