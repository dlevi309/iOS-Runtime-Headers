/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/


@class NSString, NSPredicate;

@interface CPAnalyticsConditional : NSObject {

	NSString* _property;
	NSPredicate* _predicate;

}

@property (nonatomic,readonly) NSString * property;                  //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
-(NSPredicate *)predicate;
-(NSString *)property;
-(id)initWithConfig:(id)arg1 ;
-(id)_validateAndParseConfig:(id)arg1 forKey:(id)arg2 ;
@end

