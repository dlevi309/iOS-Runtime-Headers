/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSSet, PGTitleGeneratorDateMatching, PHAsset, PHAssetCollection, PGTitle, NSLocale;

@interface PGTitleGenerator : NSObject {

	BOOL _isForHighlight;
	NSSet* _momentNodes;
	PGTitleGeneratorDateMatching* _dateMatching;
	PHAsset* _keyAsset;
	PHAssetCollection* _curatedAssetCollection;
	PHAssetCollection* _assetCollection;
	PGTitle* _title;
	PGTitle* _subtitle;
	NSSet* _usedLocationNodes;
	NSLocale* _locale;
	unsigned long long _preferredTitleType;
	unsigned long long _lineBreakBehavior;

}

@property (nonatomic,readonly) PHAssetCollection * assetCollection;                      //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,readonly) NSSet * momentNodes;                                      //@synthesize momentNodes=_momentNodes - In the implementation block
@property (nonatomic,retain) NSSet * usedLocationNodes;                                  //@synthesize usedLocationNodes=_usedLocationNodes - In the implementation block
@property (nonatomic,readonly) PGTitleGeneratorDateMatching * dateMatching;              //@synthesize dateMatching=_dateMatching - In the implementation block
@property (nonatomic,readonly) PHAsset * keyAsset;                                       //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,readonly) PHAssetCollection * curatedAssetCollection;               //@synthesize curatedAssetCollection=_curatedAssetCollection - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                          //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) PGTitle * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) PGTitle * subtitle;                                       //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) unsigned long long preferredTitleType;                      //@synthesize preferredTitleType=_preferredTitleType - In the implementation block
@property (assign,nonatomic) unsigned long long lineBreakBehavior;                       //@synthesize lineBreakBehavior=_lineBreakBehavior - In the implementation block
@property (assign,nonatomic) BOOL isForHighlight;                                        //@synthesize isForHighlight=_isForHighlight - In the implementation block
-(NSLocale *)locale;
-(PHAsset *)keyAsset;
-(void)setLocale:(NSLocale *)arg1 ;
-(PGTitle *)subtitle;
-(PHAssetCollection *)assetCollection;
-(NSSet *)momentNodes;
-(PGTitle *)title;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(BOOL)_useSplitTimeTitlesIfNeeded;
-(id)initWithMomentNodes:(id)arg1 type:(long long)arg2 ;
-(BOOL)_triggerDefaultTitleGenerationIfNil;
-(NSSet *)usedLocationNodes;
-(void)setUsedLocationNodes:(NSSet *)arg1 ;
-(unsigned long long)lineBreakBehavior;
-(void)setLineBreakBehavior:(unsigned long long)arg1 ;
-(PHAssetCollection *)curatedAssetCollection;
-(BOOL)isForHighlight;
-(id)initWithMomentNode:(id)arg1 referenceDateInterval:(id)arg2 keyAsset:(id)arg3 curatedAssetCollection:(id)arg4 assetCollection:(id)arg5 type:(long long)arg6 ;
-(id)initWithMomentNodes:(id)arg1 referenceDateInterval:(id)arg2 keyAsset:(id)arg3 curatedAssetCollection:(id)arg4 assetCollection:(id)arg5 type:(long long)arg6 ;
-(id)initWithMomentNode:(id)arg1 type:(long long)arg2 ;
-(void)_generateTitleAndSubtitle;
-(id)_defaultTitle;
-(id)_defaultLocationTitle;
-(id)_defaultTimeTitle;
-(id)_splitTimeTitles;
-(unsigned long long)_allowedTimeTitleFormats;
-(id)_addressNodeFromKeyAsset;
-(id)_addressNodesFromCuratedAssetCollection;
-(PGTitleGeneratorDateMatching *)dateMatching;
-(unsigned long long)preferredTitleType;
-(void)setPreferredTitleType:(unsigned long long)arg1 ;
-(void)setIsForHighlight:(BOOL)arg1 ;
@end

