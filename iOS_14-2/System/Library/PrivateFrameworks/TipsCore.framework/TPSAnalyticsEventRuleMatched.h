/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventRuleMatched : TPSAnalyticsEvent {

	NSString* _contentID;
	NSString* _ruleID;

}

@property (nonatomic,readonly) NSString * contentID;              //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,readonly) NSString * ruleID;                 //@synthesize ruleID=_ruleID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)eventWithContentID:(id)arg1 ruleID:(id)arg2 ;
-(NSString *)ruleID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)eventName;
-(NSString *)contentID;
-(id)_initWithContentID:(id)arg1 ruleID:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)mutableAnalyticsEventRepresentation;
@end

