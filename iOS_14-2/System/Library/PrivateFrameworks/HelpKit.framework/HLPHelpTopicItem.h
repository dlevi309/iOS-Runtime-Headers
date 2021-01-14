/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
*/

#import <HelpKit/HelpKit-Structs.h>
#import <HelpKit/HLPHelpItem.h>

@class NSString, NSArray;

@interface HLPHelpTopicItem : HLPHelpItem {

	NSString* _anchor;
	NSString* _hrefID;
	NSString* _glossaryIdentifierString;
	NSArray* _categories;

}

@property (nonatomic,copy) NSString * anchor;                                          //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,copy) NSString * hrefID;                                          //@synthesize hrefID=_hrefID - In the implementation block
@property (nonatomic,copy) NSString * glossaryIdentifierString;                        //@synthesize glossaryIdentifierString=_glossaryIdentifierString - In the implementation block
@property (nonatomic,copy) NSArray * categories;                                       //@synthesize categories=_categories - In the implementation block
@property (getter=isPassionPoints,nonatomic,readonly) BOOL passionPoints; 
@property (getter=isGlossary,nonatomic,readonly) BOOL glossary; 
@property (getter=isCopyright,nonatomic,readonly) BOOL copyright; 
-(void)setCategories:(NSArray *)arg1 ;
-(NSArray *)categories;
-(id)debugDescription;
-(NSString *)hrefID;
-(NSString *)anchor;
-(void)setAnchor:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setGlossaryIdentifierString:(NSString *)arg1 ;
-(void)setHrefID:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 helpBookURL:(id)arg2 serverType:(long long)arg3 ;
-(BOOL)isPassionPoints;
-(NSString *)glossaryIdentifierString;
-(BOOL)categoryContainKey:(id)arg1 ;
-(BOOL)isGlossary;
-(BOOL)isCopyright;
@end

