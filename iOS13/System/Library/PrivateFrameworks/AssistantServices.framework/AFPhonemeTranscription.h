/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)orthography;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setOrthography:(NSString *)arg1 ;
-(NSArray *)phonemeSuggestions;
-(void)setPhonemeSuggestions:(NSArray *)arg1 ;
@end

