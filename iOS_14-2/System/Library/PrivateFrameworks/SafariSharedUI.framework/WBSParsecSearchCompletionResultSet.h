/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class NSArray, NSMutableDictionary, NSString;

@interface WBSParsecSearchCompletionResultSet : NSObject {

	NSArray* _patternStrings;
	NSMutableDictionary* _patternStringsToPatterns;
	NSString* _status;
	NSString* _errorCodeString;
	NSString* _completionString;
	NSString* _prefix;
	NSString* _feedbackQueryIdentifier;
	NSArray* _results;
	double _maxAge;
	double _completionScore;

}

@property (nonatomic,copy) NSString * status;                                   //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSString * errorCodeString;                      //@synthesize errorCodeString=_errorCodeString - In the implementation block
@property (nonatomic,readonly) NSString * completionString;                     //@synthesize completionString=_completionString - In the implementation block
@property (nonatomic,readonly) NSString * prefix;                               //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,readonly) NSString * feedbackQueryIdentifier;              //@synthesize feedbackQueryIdentifier=_feedbackQueryIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * results;                               //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) double maxAge;                                   //@synthesize maxAge=_maxAge - In the implementation block
@property (nonatomic,readonly) double completionScore;                          //@synthesize completionScore=_completionScore - In the implementation block
+(id)resultSetSchemaWithCache:(id)arg1 ;
+(id)resultSetWithDictionary:(id)arg1 cache:(id)arg2 ;
-(NSArray *)results;
-(NSString *)prefix;
-(NSString *)completionString;
-(double)maxAge;
-(double)completionScore;
-(void)setStatus:(NSString *)arg1 ;
-(NSString *)status;
-(void)enumeratePatternsUsingBlock:(/*^block*/id)arg1 ;
-(id)_initWithDictionary:(id)arg1 cache:(id)arg2 ;
-(NSString *)errorCodeString;
-(NSString *)feedbackQueryIdentifier;
@end

