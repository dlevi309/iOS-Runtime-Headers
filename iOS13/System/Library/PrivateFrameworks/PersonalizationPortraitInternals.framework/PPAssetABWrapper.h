/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class NSString;

@interface PPAssetABWrapper : NSObject {

	BOOL _nonWatchOnly;
	NSString* _abGroupOverride;

}

@property (nonatomic,readonly) BOOL nonWatchOnly;                       //@synthesize nonWatchOnly=_nonWatchOnly - In the implementation block
@property (nonatomic,readonly) NSString * abGroupOverride;              //@synthesize abGroupOverride=_abGroupOverride - In the implementation block
+(id)dictionaryForCommonAssetDataRelativePath:(id)arg1 abGroupIdentifier:(id*)arg2 ;
+(id)dictionaryForNonWatchAssetDataRelativePath:(id)arg1 abGroupIdentifier:(id*)arg2 ;
+(id)filesystemPathForNonPlistCommonAssetDataRelativePath:(id)arg1 abGroupIdentifier:(id*)arg2 ;
+(id)filesystemPathForNonPlistNonWatchAssetDataRelativePath:(id)arg1 abGroupIdentifier:(id*)arg2 ;
-(NSString *)abGroupOverride;
-(id)dictionaryForAssetDataRelativePath:(id)arg1 abGroupIdentifier:(id*)arg2 naturalABGroupIdentifier:(id*)arg3 abGroupsInAsset:(id*)arg4 ;
-(id)filesystemPathForNonPlistDataRelativePath:(id)arg1 abGroupIdentifier:(id*)arg2 naturalABGroupIdentifier:(id*)arg3 abGroupsInAsset:(id*)arg4 ;
-(id)_filesystemPathForRelativePath:(id)arg1 ;
-(id)_rawDictionaryForAssetDataRelativePath:(id)arg1 ;
-(id)initCommonAssetWithABGroupOverride:(id)arg1 ;
-(id)initNonWatchAssetWithABGroupOverride:(id)arg1 ;
-(id)initWithABGroupOverride:(id)arg1 nonWatchOnly:(BOOL)arg2 ;
-(BOOL)nonWatchOnly;
@end

