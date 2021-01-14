/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/


@class NSString, NSArray, AXSSDialectMap;

@interface AXSSLanguageMap : NSObject {

	BOOL _western;
	BOOL _rtl;
	BOOL _ambiguous;
	NSString* _generalLanguageID;
	NSArray* _alternateLanguageIDs;
	NSArray* _dialects;
	NSArray* _associatedAmbiguousLanguages;
	AXSSDialectMap* _defaultDialect;
	AXSSDialectMap* _userLocaleDialect;

}

@property (assign,getter=isWestern,nonatomic) BOOL western;                       //@synthesize western=_western - In the implementation block
@property (assign,getter=isRTL,nonatomic) BOOL rtl;                               //@synthesize rtl=_rtl - In the implementation block
@property (assign,getter=isAmbiguous,nonatomic) BOOL ambiguous;                   //@synthesize ambiguous=_ambiguous - In the implementation block
@property (nonatomic,copy) NSString * generalLanguageID;                          //@synthesize generalLanguageID=_generalLanguageID - In the implementation block
@property (nonatomic,retain) NSArray * alternateLanguageIDs;                      //@synthesize alternateLanguageIDs=_alternateLanguageIDs - In the implementation block
@property (nonatomic,retain) NSArray * dialects;                                  //@synthesize dialects=_dialects - In the implementation block
@property (nonatomic,retain) NSArray * associatedAmbiguousLanguages;              //@synthesize associatedAmbiguousLanguages=_associatedAmbiguousLanguages - In the implementation block
@property (nonatomic,retain) AXSSDialectMap * defaultDialect;                     //@synthesize defaultDialect=_defaultDialect - In the implementation block
@property (nonatomic,retain) AXSSDialectMap * userLocaleDialect;                  //@synthesize userLocaleDialect=_userLocaleDialect - In the implementation block
-(BOOL)isRTL;
-(void)setRtl:(BOOL)arg1 ;
-(id)description;
-(NSArray *)dialects;
-(BOOL)isAmbiguous;
-(BOOL)isWestern;
-(void)setWestern:(BOOL)arg1 ;
-(void)setAmbiguous:(BOOL)arg1 ;
-(void)setDialects:(NSArray *)arg1 ;
-(void)setGeneralLanguageID:(NSString *)arg1 ;
-(void)setAlternateLanguageIDs:(NSArray *)arg1 ;
-(void)setAssociatedAmbiguousLanguages:(NSArray *)arg1 ;
-(NSString *)generalLanguageID;
-(NSArray *)alternateLanguageIDs;
-(AXSSDialectMap *)userLocaleDialect;
-(id)initWithLanguageID:(id)arg1 isWestern:(BOOL)arg2 isAmbiguous:(BOOL)arg3 isRTL:(BOOL)arg4 dialects:(id)arg5 alternateLanguageIDs:(id)arg6 associatedAmbiguousLanguages:(id)arg7 ;
-(AXSSDialectMap *)defaultDialect;
-(id)dialectWithLocaleIdentifier:(id)arg1 ;
-(NSArray *)associatedAmbiguousLanguages;
-(void)setDefaultDialect:(AXSSDialectMap *)arg1 ;
-(void)setUserLocaleDialect:(AXSSDialectMap *)arg1 ;
@end

