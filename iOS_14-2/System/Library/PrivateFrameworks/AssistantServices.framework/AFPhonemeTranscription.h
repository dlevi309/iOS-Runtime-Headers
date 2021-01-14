/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFTranscriptionType.h>

@class NSString, NSArray;

@interface AFPhonemeTranscription : NSObject <AFTranscriptionType> {

	NSString* _orthography;
	NSString* _language;
	NSArray* _phonemeSuggestions;

}

@property (nonatomic,retain) NSString * orthography;                    //@synthesize orthography=_orthography - In the implementation block
@property (nonatomic,retain) NSString * language;                       //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) NSArray * phonemeSuggestions;              //@synthesize phonemeSuggestions=_phonemeSuggestions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setLanguage:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)orthography;
-(void)setOrthography:(NSString *)arg1 ;
-(NSArray *)phonemeSuggestions;
-(void)setPhonemeSuggestions:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)language;
@end

