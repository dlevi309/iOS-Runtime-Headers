/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
*/


#import <ResponseKit/ResponseKit-Structs.h>
@class NSString;

@interface RKLexicalEntity : NSObject {

	NSString* _string;
	NSString* _tokenType;
	NSString* _partOfSpeech;
	NSString* _lemma;
	NSString* _language;
	NSString* _internalWord;
	NSRange _tokenRange;

}

@property (retain) NSString * internalWord;              //@synthesize internalWord=_internalWord - In the implementation block
@property (retain) NSString * string;                    //@synthesize string=_string - In the implementation block
@property (retain) NSString * tokenType;                 //@synthesize tokenType=_tokenType - In the implementation block
@property (retain) NSString * partOfSpeech;              //@synthesize partOfSpeech=_partOfSpeech - In the implementation block
@property (retain) NSString * lemma;                     //@synthesize lemma=_lemma - In the implementation block
@property (retain) NSString * language;                  //@synthesize language=_language - In the implementation block
@property (assign) NSRange tokenRange;                   //@synthesize tokenRange=_tokenRange - In the implementation block
@property (readonly) NSString * word; 
-(NSString *)string;
-(id)description;
-(void)setString:(NSString *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)word;
-(NSString *)tokenType;
-(void)setTokenType:(NSString *)arg1 ;
-(NSString *)partOfSpeech;
-(void)setPartOfSpeech:(NSString *)arg1 ;
-(NSString *)lemma;
-(NSString *)internalWord;
-(void)setInternalWord:(NSString *)arg1 ;
-(void)setLemma:(NSString *)arg1 ;
-(NSRange)tokenRange;
-(void)setTokenRange:(NSRange)arg1 ;
@end

