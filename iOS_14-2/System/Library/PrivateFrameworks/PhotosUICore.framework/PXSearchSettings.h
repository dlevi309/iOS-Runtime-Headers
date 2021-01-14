/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@interface PXSearchSettings : PXSettings {

	BOOL _alwaysTrySiriSearch;
	BOOL _enableImplicitTokenization;
	BOOL _implicitTokenizationUsePrefixMatch;
	BOOL _implicitTokenizationLastTokenUsesPrefixMatch;
	BOOL _preventUnnecessaryImplicitTokenization;
	BOOL _exactMatchIgnoreUntokenizedCharacters;
	BOOL _lastImplicitTokenAllowsWordEmbeddings;
	BOOL _newSearchUIEnabled;
	BOOL _forceIndexingFooter;
	unsigned long long _maxNumberOfSuggestionsToShow;
	unsigned long long _maxNumberOfTopAssetColumns;
	unsigned long long _maxNumberOfResultColumns;
	unsigned long long _maxNumberOfTopAssetRows;
	unsigned long long _standardNumberOfTopAssetRows;

}

@property (assign,nonatomic) BOOL alwaysTrySiriSearch;                                         //@synthesize alwaysTrySiriSearch=_alwaysTrySiriSearch - In the implementation block
@property (assign,nonatomic) BOOL enableImplicitTokenization;                                  //@synthesize enableImplicitTokenization=_enableImplicitTokenization - In the implementation block
@property (assign,nonatomic) BOOL implicitTokenizationUsePrefixMatch;                          //@synthesize implicitTokenizationUsePrefixMatch=_implicitTokenizationUsePrefixMatch - In the implementation block
@property (assign,nonatomic) BOOL implicitTokenizationLastTokenUsesPrefixMatch;                //@synthesize implicitTokenizationLastTokenUsesPrefixMatch=_implicitTokenizationLastTokenUsesPrefixMatch - In the implementation block
@property (assign,nonatomic) BOOL preventUnnecessaryImplicitTokenization;                      //@synthesize preventUnnecessaryImplicitTokenization=_preventUnnecessaryImplicitTokenization - In the implementation block
@property (assign,nonatomic) BOOL exactMatchIgnoreUntokenizedCharacters;                       //@synthesize exactMatchIgnoreUntokenizedCharacters=_exactMatchIgnoreUntokenizedCharacters - In the implementation block
@property (assign,nonatomic) BOOL lastImplicitTokenAllowsWordEmbeddings;                       //@synthesize lastImplicitTokenAllowsWordEmbeddings=_lastImplicitTokenAllowsWordEmbeddings - In the implementation block
@property (assign,nonatomic) unsigned long long maxNumberOfSuggestionsToShow;                  //@synthesize maxNumberOfSuggestionsToShow=_maxNumberOfSuggestionsToShow - In the implementation block
@property (assign,nonatomic) unsigned long long maxNumberOfTopAssetColumns;                    //@synthesize maxNumberOfTopAssetColumns=_maxNumberOfTopAssetColumns - In the implementation block
@property (assign,nonatomic) unsigned long long maxNumberOfResultColumns;                      //@synthesize maxNumberOfResultColumns=_maxNumberOfResultColumns - In the implementation block
@property (assign,nonatomic) unsigned long long maxNumberOfTopAssetRows;                       //@synthesize maxNumberOfTopAssetRows=_maxNumberOfTopAssetRows - In the implementation block
@property (assign,nonatomic) unsigned long long standardNumberOfTopAssetRows;                  //@synthesize standardNumberOfTopAssetRows=_standardNumberOfTopAssetRows - In the implementation block
@property (assign,getter=isNewSearchUIEnabled,nonatomic) BOOL newSearchUIEnabled;              //@synthesize newSearchUIEnabled=_newSearchUIEnabled - In the implementation block
@property (assign,nonatomic) BOOL forceIndexingFooter;                                         //@synthesize forceIndexingFooter=_forceIndexingFooter - In the implementation block
+(id)settingsControllerModule;
+(id)_formatIndexingStatusAlertMessageForRemainingCount:(unsigned long long)arg1 ;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;
-(void)setEnableImplicitTokenization:(BOOL)arg1 ;
-(BOOL)lastImplicitTokenAllowsWordEmbeddings;
-(void)setPreventUnnecessaryImplicitTokenization:(BOOL)arg1 ;
-(void)setExactMatchIgnoreUntokenizedCharacters:(BOOL)arg1 ;
-(unsigned long long)maxNumberOfResultColumns;
-(void)setMaxNumberOfResultColumns:(unsigned long long)arg1 ;
-(unsigned long long)maxNumberOfTopAssetRows;
-(void)setImplicitTokenizationUsePrefixMatch:(BOOL)arg1 ;
-(void)setStandardNumberOfTopAssetRows:(unsigned long long)arg1 ;
-(BOOL)enableImplicitTokenization;
-(void)setImplicitTokenizationLastTokenUsesPrefixMatch:(BOOL)arg1 ;
-(void)setMaxNumberOfTopAssetColumns:(unsigned long long)arg1 ;
-(void)setNewSearchUIEnabled:(BOOL)arg1 ;
-(void)setForceIndexingFooter:(BOOL)arg1 ;
-(void)setMaxNumberOfSuggestionsToShow:(unsigned long long)arg1 ;
-(void)setLastImplicitTokenAllowsWordEmbeddings:(BOOL)arg1 ;
-(BOOL)implicitTokenizationLastTokenUsesPrefixMatch;
-(BOOL)forceIndexingFooter;
-(void)setMaxNumberOfTopAssetRows:(unsigned long long)arg1 ;
-(void)setAlwaysTrySiriSearch:(BOOL)arg1 ;
-(unsigned long long)standardNumberOfTopAssetRows;
-(BOOL)alwaysTrySiriSearch;
-(unsigned long long)maxNumberOfSuggestionsToShow;
-(BOOL)preventUnnecessaryImplicitTokenization;
-(BOOL)implicitTokenizationUsePrefixMatch;
-(unsigned long long)maxNumberOfTopAssetColumns;
-(BOOL)isNewSearchUIEnabled;
-(BOOL)exactMatchIgnoreUntokenizedCharacters;
@end

