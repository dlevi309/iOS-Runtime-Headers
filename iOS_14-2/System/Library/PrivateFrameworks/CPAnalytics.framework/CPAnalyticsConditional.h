/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/


@class NSString, NSPredicate;

@interface CPAnalyticsConditional : NSObject {

	NSString* _property;
	NSPredicate* _predicate;

}

@property (nonatomic,readonly) NSString * property;                  //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
-(NSString *)property;
-(NSPredicate *)predicate;
-(id)_validateAndParseConfig:(id)arg1 forKey:(id)arg2 ;
-(id)initWithConfig:(id)arg1 ;
@end

