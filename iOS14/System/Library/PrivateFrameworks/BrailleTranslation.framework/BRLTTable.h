/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
*/


@class NSBundle, NSString;

@interface BRLTTable : NSObject {

	NSBundle* _bundle;
	NSString* _serviceIdentifier;
	NSString* _language;
	NSString* _variant;

}

@property (nonatomic,retain) NSBundle * _bundle;                                    //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * serviceIdentifier;                        //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * language;                                 //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) NSString * variant;                                  //@synthesize variant=_variant - In the implementation block
@property (nonatomic,readonly) NSString * tableIdentifier; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSString * localizedNameWithService; 
@property (nonatomic,readonly) NSString * localizedLanguage; 
@property (nonatomic,readonly) NSString * localizedVariant; 
@property (nonatomic,readonly) NSString * localizedService; 
@property (nonatomic,readonly) BOOL supportsTranslationModeContracted; 
@property (nonatomic,readonly) BOOL supportsTranslationMode8Dot; 
-(NSString *)localizedName;
-(void)set_bundle:(NSBundle *)arg1 ;
-(NSString *)variant;
-(NSString *)tableIdentifier;
-(NSBundle *)_bundle;
-(NSString *)serviceIdentifier;
-(id)description;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)language;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithServiceIdentifier:(id)arg1 language:(id)arg2 variant:(id)arg3 ;
-(id)_brailleTableDictionary;
-(NSString *)localizedVariant;
-(NSString *)localizedLanguage;
-(NSString *)localizedService;
-(BOOL)_isEqualToTable:(id)arg1 ;
-(id)initWithServiceIdentifier:(id)arg1 tableIdentifier:(id)arg2 ;
-(NSString *)localizedNameWithService;
-(BOOL)supportsTranslationModeContracted;
-(BOOL)supportsTranslationMode8Dot;
@end

