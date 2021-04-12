/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences
*/

#import <IntlPreferences/ISMigrator.h>

@interface ISRootMigrator : ISMigrator {

	BOOL _isErase;

}

@property (assign,nonatomic) BOOL isErase;              //@synthesize isErase=_isErase - In the implementation block
-(BOOL)performMigration;
-(id)performMigrationForPreferences:(id)arg1 ;
-(id)performMigrationForUserPreferences:(id)arg1 systemPreferences:(id)arg2 ;
-(BOOL)isErase;
-(void)updateAppleLanguagesSchemaVersionToCurrent;
-(id)importPreferredLanguagesForPreferences:(id)arg1 ;
-(id)appendRegionalVariantsToLanguageIdentifiers:(id)arg1 regionCode:(id)arg2 ;
-(id)importPreferredLanguages_macOS_10_9_forPreferences:(id)arg1 ;
-(void)setIsErase:(BOOL)arg1 ;
@end

