/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSString, LCServiceLoggingParameters, NSData;

@interface LCServiceApplicationConfiguration : PBCodable {

	BOOL _hasBundleIdentifier;
	BOOL _hasApplicationParameters;
	NSArray* _categories;
	NSArray* _blacklistedCategories;
	NSString* _bundleIdentifier;
	LCServiceLoggingParameters* _applicationParameters;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                                       //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasBundleIdentifier;                                        //@synthesize hasBundleIdentifier=_hasBundleIdentifier - In the implementation block
@property (nonatomic,retain) LCServiceLoggingParameters * applicationParameters;              //@synthesize applicationParameters=_applicationParameters - In the implementation block
@property (assign,nonatomic) BOOL hasApplicationParameters;                                   //@synthesize hasApplicationParameters=_hasApplicationParameters - In the implementation block
@property (nonatomic,copy) NSArray * categories;                                              //@synthesize categories=_categories - In the implementation block
@property (nonatomic,copy) NSArray * blacklistedCategories;                                   //@synthesize blacklistedCategories=_blacklistedCategories - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(void)setCategories:(NSArray *)arg1 ;
-(NSArray *)categories;
-(NSData *)jsonData;
-(NSString *)bundleIdentifier;
-(id)initWithDictionary:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasBundleIdentifier;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setApplicationParameters:(LCServiceLoggingParameters *)arg1 ;
-(void)addCategories:(id)arg1 ;
-(void)addBlacklistedCategories:(int)arg1 ;
-(LCServiceLoggingParameters *)applicationParameters;
-(NSArray *)blacklistedCategories;
-(void)clearCategories;
-(unsigned long long)categoriesCount;
-(id)categoriesAtIndex:(unsigned long long)arg1 ;
-(void)clearBlacklistedCategories;
-(unsigned long long)blacklistedCategoriesCount;
-(int)blacklistedCategoriesAtIndex:(unsigned long long)arg1 ;
-(void)setBlacklistedCategories:(NSArray *)arg1 ;
-(void)setHasBundleIdentifier:(BOOL)arg1 ;
-(BOOL)hasApplicationParameters;
-(void)setHasApplicationParameters:(BOOL)arg1 ;
@end

