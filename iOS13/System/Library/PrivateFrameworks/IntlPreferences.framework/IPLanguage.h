/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)languageWithIdentifier:(id)arg1 normalize:(BOOL)arg2 ;
+(id)languageWithIdentifier:(id)arg1 ;
+(id)IPLanguagesWithLanguages:(id)arg1 normalize:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setLocalizedStringForName:(NSString *)arg1 ;
-(IPLanguage *)minimizedLanguage;
-(NSString *)localizedStringForName;
@end

