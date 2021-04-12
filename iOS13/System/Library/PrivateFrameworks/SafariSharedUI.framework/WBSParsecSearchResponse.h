/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class WBSParsecSearchCompletionResultSet, NSArray;

@interface WBSParsecSearchResponse : NSObject {

	WBSParsecSearchCompletionResultSet* _bestResultSet;
	double _maxAge;
	unsigned long long _sizeInBytes;
	NSArray* _completionResultSets;

}

@property (nonatomic,readonly) double maxAge;                                                             //@synthesize maxAge=_maxAge - In the implementation block
@property (nonatomic,readonly) unsigned long long sizeInBytes;                                            //@synthesize sizeInBytes=_sizeInBytes - In the implementation block
@property (nonatomic,readonly) NSArray * completionResultSets;                                            //@synthesize completionResultSets=_completionResultSets - In the implementation block
@property (nonatomic,readonly) WBSParsecSearchCompletionResultSet * bestCompletionResultSet; 
@property (nonatomic,readonly) NSArray * statusCodesForCompletionResultSets; 
+(id)searchResponseSchemaWithCache:(id)arg1 ;
-(unsigned long long)sizeInBytes;
-(double)maxAge;
-(id)initWithArray:(id)arg1 responseHeaders:(id)arg2 sizeInBytes:(unsigned long long)arg3 cache:(id)arg4 ;
-(WBSParsecSearchCompletionResultSet *)bestCompletionResultSet;
-(NSArray *)statusCodesForCompletionResultSets;
-(NSArray *)completionResultSets;
@end

