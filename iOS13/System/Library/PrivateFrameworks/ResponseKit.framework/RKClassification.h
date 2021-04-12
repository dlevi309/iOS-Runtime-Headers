/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
*/


@class NSString, NSArray;

@interface RKClassification : NSObject {

	int _sensitive;
	NSString* _language;
	unsigned long long _sentenceType;
	unsigned long long _gender;
	NSArray* _customResponses;
	NSString* _taggedText;
	NSArray* _sentenceEntities;
	NSArray* _matchedRanges;

}

@property (retain) NSString * language;                          //@synthesize language=_language - In the implementation block
@property (assign) unsigned long long sentenceType;              //@synthesize sentenceType=_sentenceType - In the implementation block
@property (getter=isSensitive) int sensitive;                    //@synthesize sensitive=_sensitive - In the implementation block
@property (assign) unsigned long long gender;                    //@synthesize gender=_gender - In the implementation block
@property (retain) NSArray * customResponses;                    //@synthesize customResponses=_customResponses - In the implementation block
@property (retain) NSString * taggedText;                        //@synthesize taggedText=_taggedText - In the implementation block
@property (retain) NSArray * sentenceEntities;                   //@synthesize sentenceEntities=_sentenceEntities - In the implementation block
@property (retain) NSArray * matchedRanges;                      //@synthesize matchedRanges=_matchedRanges - In the implementation block
-(id)init;
-(int)isSensitive;
-(void)setSensitive:(int)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(unsigned long long)gender;
-(void)setGender:(unsigned long long)arg1 ;
-(NSString *)taggedText;
-(unsigned long long)sentenceType;
-(void)setSentenceType:(unsigned long long)arg1 ;
-(NSArray *)sentenceEntities;
-(NSArray *)customResponses;
-(void)setCustomResponses:(NSArray *)arg1 ;
-(void)setTaggedText:(NSString *)arg1 ;
-(void)setSentenceEntities:(NSArray *)arg1 ;
-(NSArray *)matchedRanges;
-(void)setMatchedRanges:(NSArray *)arg1 ;
@end

