/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/


#import <WiFiPolicy/WiFiPolicy-Structs.h>
@class NSCharacterSet, NSMutableDictionary, NSSet;

@interface WiFiLexicon : NSObject {

	LXLexiconRef _lexiconEnglish;
	LXLexiconRef _lexiconUserLocale;
	NSCharacterSet* _tokenizationCharacterSet;
	NSCharacterSet* _tokenizationCharacterSetWithoutUpperCase;
	NSMutableDictionary* _stringCache;
	NSSet* _unwantedEnglishWords;

}

@property (nonatomic,retain) NSCharacterSet * tokenizationCharacterSet;                              //@synthesize tokenizationCharacterSet=_tokenizationCharacterSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * tokenizationCharacterSetWithoutUpperCase;              //@synthesize tokenizationCharacterSetWithoutUpperCase=_tokenizationCharacterSetWithoutUpperCase - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stringCache;                                      //@synthesize stringCache=_stringCache - In the implementation block
@property (nonatomic,retain) NSSet * unwantedEnglishWords;                                           //@synthesize unwantedEnglishWords=_unwantedEnglishWords - In the implementation block
-(id)init;
-(void)dealloc;
-(NSMutableDictionary *)stringCache;
-(NSSet *)unwantedEnglishWords;
-(id)_tokenizeStringForSpecialCharacters:(id)arg1 ;
-(NSCharacterSet *)tokenizationCharacterSet;
-(NSCharacterSet *)tokenizationCharacterSetWithoutUpperCase;
-(BOOL)stringContainsUnwantedWords:(id)arg1 ;
-(void)setTokenizationCharacterSet:(NSCharacterSet *)arg1 ;
-(void)setTokenizationCharacterSetWithoutUpperCase:(NSCharacterSet *)arg1 ;
-(void)setStringCache:(NSMutableDictionary *)arg1 ;
-(void)setUnwantedEnglishWords:(NSSet *)arg1 ;
@end

