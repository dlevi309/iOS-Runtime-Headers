/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@class AVMediaSelectionOption, NSString;

@interface TVPAudioOption : NSObject {

	int _trackID;
	AVMediaSelectionOption* _avMediaSelectionOption;
	NSString* _localizedDisplayString;
	NSString* _title;
	NSString* _languageCodeFromLocale;
	NSString* _languageCodeBCP47;
	id _propertyListRepresentation;
	NSString* _savedLocaleLanguageCode;

}

@property (nonatomic,retain) AVMediaSelectionOption * avMediaSelectionOption;              //@synthesize avMediaSelectionOption=_avMediaSelectionOption - In the implementation block
@property (nonatomic,copy) NSString * localizedDisplayString;                              //@synthesize localizedDisplayString=_localizedDisplayString - In the implementation block
@property (nonatomic,copy) NSString * title;                                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * languageCodeFromLocale;                              //@synthesize languageCodeFromLocale=_languageCodeFromLocale - In the implementation block
@property (nonatomic,copy) NSString * languageCodeBCP47;                                   //@synthesize languageCodeBCP47=_languageCodeBCP47 - In the implementation block
@property (nonatomic,retain) id propertyListRepresentation;                                //@synthesize propertyListRepresentation=_propertyListRepresentation - In the implementation block
@property (assign,nonatomic) int trackID;                                                  //@synthesize trackID=_trackID - In the implementation block
@property (nonatomic,copy) NSString * savedLocaleLanguageCode;                             //@synthesize savedLocaleLanguageCode=_savedLocaleLanguageCode - In the implementation block
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(id)propertyListRepresentation;
-(void)_currentLocaleDidChange:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(int)trackID;
-(id)initWithOption:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setTrackID:(int)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSString *)languageCodeBCP47;
-(AVMediaSelectionOption *)avMediaSelectionOption;
-(NSString *)languageCodeFromLocale;
-(void)setLocalizedDisplayString:(NSString *)arg1 ;
-(id)initWithSavedTrackID:(int)arg1 savedLocaleLanguageCode:(id)arg2 ;
-(NSString *)localizedDisplayString;
-(void)setAvMediaSelectionOption:(AVMediaSelectionOption *)arg1 ;
-(void)setLanguageCodeFromLocale:(NSString *)arg1 ;
-(void)setLanguageCodeBCP47:(NSString *)arg1 ;
-(void)setPropertyListRepresentation:(id)arg1 ;
-(NSString *)savedLocaleLanguageCode;
-(void)setSavedLocaleLanguageCode:(NSString *)arg1 ;
@end

