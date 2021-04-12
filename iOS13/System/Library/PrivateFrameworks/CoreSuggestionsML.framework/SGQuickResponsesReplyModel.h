/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


@class NSArray;

@interface SGQuickResponsesReplyModel : NSObject {

	unsigned long long _semanticClassIndex;
	NSArray* _semanticClasses;
	NSArray* _selectedPseudocounts;
	double _scoreWeight;
	unsigned long long _category;

}

@property (nonatomic,readonly) unsigned long long semanticClassIndex;              //@synthesize semanticClassIndex=_semanticClassIndex - In the implementation block
@property (nonatomic,readonly) NSArray * semanticClasses;                          //@synthesize semanticClasses=_semanticClasses - In the implementation block
@property (nonatomic,readonly) NSArray * selectedPseudocounts;                     //@synthesize selectedPseudocounts=_selectedPseudocounts - In the implementation block
@property (nonatomic,readonly) double scoreWeight;                                 //@synthesize scoreWeight=_scoreWeight - In the implementation block
@property (nonatomic,readonly) unsigned long long category;                        //@synthesize category=_category - In the implementation block
+(id)semanticClassesForArray:(id)arg1 ;
-(unsigned long long)category;
-(id)initWithDictionary:(id)arg1 index:(unsigned long long)arg2 ;
-(unsigned long long)semanticClassIndex;
-(NSArray *)semanticClasses;
-(NSArray *)selectedPseudocounts;
-(double)scoreWeight;
@end

