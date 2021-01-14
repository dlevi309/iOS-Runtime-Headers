/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
*/

#import <Search/Search-Structs.h>
#import <SpotlightServices/SFSearchResult_SpotlightExtras.h>

@class NSString;

@interface SFSearchResult_Compatibility : SFSearchResult_SpotlightExtras

@property (nonatomic,retain) NSString * resultIdentifier; 
@property (nonatomic,retain) NSString * externalIdentifier; 
@property (nonatomic,retain) NSString * compatibilityTitle; 
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(void)setUniqueIdentifier:(id)arg1 ;
-(Class)classForKeyedArchiver;
-(void)setResultIdentifier:(NSString *)arg1 ;
-(id)simpleTitle;
-(id)uniqueIdentifier;
-(id)debugDescription;
-(NSString *)externalIdentifier;
-(Class)classForCoder;
-(id)copy;
-(void)setCompatibilityTitle:(NSString *)arg1 ;
-(NSString *)compatibilityTitle;
-(void)setSimpleTitle:(id)arg1 ;
-(id)section_header;
-(NSString *)resultIdentifier;
-(BOOL)isQuickGlance;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

