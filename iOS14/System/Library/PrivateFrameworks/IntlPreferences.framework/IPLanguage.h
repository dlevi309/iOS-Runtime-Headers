/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences
*/


@class NSString;

@interface IPLanguage : NSObject {

	NSString* _identifier;
	NSString* _name;
	NSString* _localizedStringForName;

}

@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * localizedStringForName;              //@synthesize localizedStringForName=_localizedStringForName - In the implementation block
@property (nonatomic,readonly) IPLanguage * minimizedLanguage; 
+(id)languageWithIdentifier:(id)arg1 ;
+(id)languageWithIdentifier:(id)arg1 normalize:(BOOL)arg2 ;
+(id)IPLanguagesWithLanguages:(id)arg1 normalize:(BOOL)arg2 ;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLocalizedStringForName:(NSString *)arg1 ;
-(IPLanguage *)minimizedLanguage;
-(NSString *)localizedStringForName;
@end

