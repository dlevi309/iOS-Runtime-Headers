/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
*/


#import <DataDetectorsNaturalLanguage/DataDetectorsNaturalLanguage-Structs.h>
@class NSMutableArray, NSArray, NSIndexSet, NSString, IPMessage;

@interface IPMessageUnit : NSObject {

	NSMutableArray* _followups;
	NSArray* _flatMessageThread;
	NSArray* _features;
	NSArray* _sentenceFeatures;
	NSArray* _dataFeatures;
	NSArray* _keywordFeatures;
	NSIndexSet* _rejectionRanges;
	NSIndexSet* _proposalAndAcceptationRanges;
	NSIndexSet* _neutralRanges;
	NSString* _bestLanguage;
	NSString* _lowercaseTextTruncated;
	NSString* _text;
	IPMessageUnit* _previous;
	IPMessage* _originalMessage;
	long long _indexInOriginalMessage;
	NSRange _interactedDateRange;

}

@property (copy,readonly) NSString * text;                                //@synthesize text=_text - In the implementation block
@property (copy,readonly) NSString * lowercaseTextTruncated; 
@property (__weak,readonly) IPMessage * originalMessage;                  //@synthesize originalMessage=_originalMessage - In the implementation block
@property (readonly) long long indexInOriginalMessage;                    //@synthesize indexInOriginalMessage=_indexInOriginalMessage - In the implementation block
@property (assign) NSRange interactedDateRange;                           //@synthesize interactedDateRange=_interactedDateRange - In the implementation block
@property (readonly) NSArray * features;                                  //@synthesize features=_features - In the implementation block
@property (readonly) NSArray * sentenceFeatures;                          //@synthesize sentenceFeatures=_sentenceFeatures - In the implementation block
@property (readonly) NSArray * dataFeatures;                              //@synthesize dataFeatures=_dataFeatures - In the implementation block
@property (readonly) NSArray * keywordFeatures;                           //@synthesize keywordFeatures=_keywordFeatures - In the implementation block
@property (__weak,readonly) IPMessageUnit * previous;                     //@synthesize previous=_previous - In the implementation block
@property (readonly) NSArray * followups; 
-(IPMessageUnit *)previous;
-(NSArray *)features;
-(void)setFeatures:(NSArray *)arg1 ;
-(id)description;
-(NSString *)text;
-(IPMessage *)originalMessage;
-(id)initWithText:(id)arg1 originalMessage:(id)arg2 index:(long long)arg3 ;
-(id)bestLanguageID;
-(void)setInteractedDateRange:(NSRange)arg1 ;
-(void)addFollowup:(id)arg1 ;
-(long long)indexInOriginalMessage;
-(void)setDataFeatures:(NSArray *)arg1 ;
-(void)setKeywordFeatures:(NSArray *)arg1 ;
-(void)setSentenceFeatures:(NSArray *)arg1 ;
-(NSArray *)sentenceFeatures;
-(NSArray *)followups;
-(NSString *)lowercaseTextTruncated;
-(id)rejectionRanges;
-(id)neutralRanges;
-(id)proposalAndAcceptationRanges;
-(NSArray *)dataFeatures;
-(NSArray *)keywordFeatures;
-(NSRange)interactedDateRange;
@end

