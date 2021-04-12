/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
*/

#import <Search/Search-Structs.h>
#import <Search/SFSearchResult_SpotlightExtras.h>

@class NSString;

@interface SFSearchResult_Compatibility : SFSearchResult_SpotlightExtras

@property (nonatomic,retain) NSString * resultIdentifier; 
@property (nonatomic,retain) NSString * externalIdentifier; 
@property (nonatomic,retain) NSString * compatibilityTitle; 
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(Class)classForCoder;
-(Class)classForKeyedArchiver;
-(id)uniqueIdentifier;
-(void)writeTo:(id)arg1 ;
-(void)setUniqueIdentifier:(id)arg1 ;
-(NSString *)externalIdentifier;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(NSString *)resultIdentifier;
-(void)setResultIdentifier:(NSString *)arg1 ;
-(BOOL)isQuickGlance;
-(void)setCompatibilityTitle:(NSString *)arg1 ;
-(NSString *)compatibilityTitle;
-(void)setSimpleTitle:(id)arg1 ;
-(id)simpleTitle;
-(id)section_header;
@end

