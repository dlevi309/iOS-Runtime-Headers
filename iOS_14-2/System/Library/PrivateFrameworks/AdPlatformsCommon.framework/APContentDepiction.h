/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSArray;

@interface APContentDepiction : NSObject <NSSecureCoding> {

	NSUUID* _identifier;
	unsigned long long _placement;
	unsigned long long _adjacency;
	NSString* _language;
	NSString* _locale;
	NSArray* _searchTerms;
	NSArray* _keywords;
	NSArray* _categories;

}

@property (retain) NSUUID * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (assign) unsigned long long placement;              //@synthesize placement=_placement - In the implementation block
@property (assign) unsigned long long adjacency;              //@synthesize adjacency=_adjacency - In the implementation block
@property (retain) NSString * language;                       //@synthesize language=_language - In the implementation block
@property (retain) NSString * locale;                         //@synthesize locale=_locale - In the implementation block
@property (retain) NSArray * searchTerms;                     //@synthesize searchTerms=_searchTerms - In the implementation block
@property (retain) NSArray * keywords;                        //@synthesize keywords=_keywords - In the implementation block
@property (retain) NSArray * categories;                      //@synthesize categories=_categories - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setCategories:(NSArray *)arg1 ;
-(unsigned long long)placement;
-(NSString *)locale;
-(void)setKeywords:(NSArray *)arg1 ;
-(void)setLocale:(NSString *)arg1 ;
-(id)init;
-(NSArray *)keywords;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setPlacement:(unsigned long long)arg1 ;
-(NSArray *)categories;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)searchTerms;
-(void)setSearchTerms:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(NSString *)language;
-(unsigned long long)adjacency;
-(id)init:(unsigned long long)arg1 adjacency:(unsigned long long)arg2 language:(id)arg3 locale:(id)arg4 searchTerm:(id)arg5 keywords:(id)arg6 categories:(id)arg7 ;
-(void)setAdjacency:(unsigned long long)arg1 ;
@end

