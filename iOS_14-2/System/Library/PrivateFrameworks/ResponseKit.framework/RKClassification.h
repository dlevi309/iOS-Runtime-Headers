/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)isSensitive;
-(void)setSensitive:(int)arg1 ;
-(id)init;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setGender:(unsigned long long)arg1 ;
-(unsigned long long)gender;
-(NSString *)language;
-(unsigned long long)sentenceType;
-(void)setSentenceType:(unsigned long long)arg1 ;
-(NSArray *)sentenceEntities;
-(NSArray *)customResponses;
-(void)setCustomResponses:(NSArray *)arg1 ;
-(NSString *)taggedText;
-(void)setTaggedText:(NSString *)arg1 ;
-(void)setSentenceEntities:(NSArray *)arg1 ;
-(NSArray *)matchedRanges;
-(void)setMatchedRanges:(NSArray *)arg1 ;
@end

