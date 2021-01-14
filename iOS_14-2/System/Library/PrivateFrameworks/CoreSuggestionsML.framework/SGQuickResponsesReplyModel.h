/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


@class NSArray;

@interface SGQuickResponsesReplyModel : NSObject {

	BOOL _dynamicLabel;
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
@property (nonatomic,readonly) BOOL dynamicLabel;                                  //@synthesize dynamicLabel=_dynamicLabel - In the implementation block
+(id)semanticClassesForArray:(id)arg1 ;
-(unsigned long long)category;
-(id)initWithDictionary:(id)arg1 index:(unsigned long long)arg2 ;
-(unsigned long long)semanticClassIndex;
-(NSArray *)semanticClasses;
-(NSArray *)selectedPseudocounts;
-(double)scoreWeight;
-(BOOL)dynamicLabel;
@end

