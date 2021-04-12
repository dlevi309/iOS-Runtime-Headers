/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/


@class NSString, NSDictionary, NSArray;

@interface CPAnalyticsEventMatcher : NSObject {

	NSString* _eventKeyToMatch;
	NSDictionary* _eventPropertiesToMatch;
	NSArray* _conditionalChecks;

}

@property (nonatomic,retain) NSArray * conditionalChecks;                          //@synthesize conditionalChecks=_conditionalChecks - In the implementation block
@property (nonatomic,readonly) NSString * eventKeyToMatch;                         //@synthesize eventKeyToMatch=_eventKeyToMatch - In the implementation block
@property (nonatomic,readonly) NSDictionary * eventPropertiesToMatch;              //@synthesize eventPropertiesToMatch=_eventPropertiesToMatch - In the implementation block
-(id)initWithConfig:(id)arg1 ;
-(BOOL)doesMatch:(id)arg1 ;
-(id)_validateAndParseEventKey:(id)arg1 ;
-(id)_validateAndParseEventProperties:(id)arg1 ;
-(id)_validateAndParseConditionalChecks:(id)arg1 ;
-(NSString *)eventKeyToMatch;
-(NSDictionary *)eventPropertiesToMatch;
-(NSArray *)conditionalChecks;
-(void)setConditionalChecks:(NSArray *)arg1 ;
@end

