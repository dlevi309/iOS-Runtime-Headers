/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/


@class NSString, NSDictionary, NSArray;

@interface CPAnalyticsEventMatcher : NSObject {

	NSString* _eventKeyToMatch;
	NSDictionary* _eventPropertiesToMatch;
	NSArray* _conditionalChecks;

}

@property (nonatomic,readonly) NSString * eventKeyToMatch;                         //@synthesize eventKeyToMatch=_eventKeyToMatch - In the implementation block
@property (nonatomic,readonly) NSDictionary * eventPropertiesToMatch;              //@synthesize eventPropertiesToMatch=_eventPropertiesToMatch - In the implementation block
@property (nonatomic,readonly) NSArray * conditionalChecks;                        //@synthesize conditionalChecks=_conditionalChecks - In the implementation block
+(id)eventMatcherWithConfiguration:(id)arg1 ;
+(id)eventMatcherWithEventName:(id)arg1 ;
+(id)eventMatcherWithEventName:(id)arg1 properties:(id)arg2 ;
-(BOOL)doesMatch:(id)arg1 ;
-(NSDictionary *)eventPropertiesToMatch;
-(NSArray *)conditionalChecks;
-(id)initWithConfig:(id)arg1 ;
-(id)_validateAndParseEventProperties:(id)arg1 ;
-(id)_validateAndParseConditionalChecks:(id)arg1 ;
-(NSString *)eventKeyToMatch;
-(id)_validateAndParseEventKey:(id)arg1 ;
@end

