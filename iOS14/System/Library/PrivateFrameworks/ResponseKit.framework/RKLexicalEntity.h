/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)word;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)lemma;
-(id)description;
-(NSString *)partOfSpeech;
-(void)setPartOfSpeech:(NSString *)arg1 ;
-(NSString *)string;
-(NSString *)tokenType;
-(void)setString:(NSString *)arg1 ;
-(void)setTokenType:(NSString *)arg1 ;
-(NSString *)language;
-(NSString *)internalWord;
-(void)setInternalWord:(NSString *)arg1 ;
-(void)setLemma:(NSString *)arg1 ;
-(NSRange)tokenRange;
-(void)setTokenRange:(NSRange)arg1 ;
@end

