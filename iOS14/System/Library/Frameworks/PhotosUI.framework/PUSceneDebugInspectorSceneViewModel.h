/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class NSString, NSArray;

@interface PUSceneDebugInspectorSceneViewModel : NSObject {

	BOOL _isIndexed;
	unsigned _sceneIdentifier;
	NSString* _keyword;
	double _threshold;
	NSArray* _synonyms;
	unsigned long long _count;
	unsigned long long _highConfidenceCount;
	double _libraryCoverage;

}

@property (nonatomic,readonly) NSString * keyword;                                //@synthesize keyword=_keyword - In the implementation block
@property (nonatomic,readonly) unsigned sceneIdentifier;                          //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isIndexed;                                    //@synthesize isIndexed=_isIndexed - In the implementation block
@property (nonatomic,readonly) double threshold;                                  //@synthesize threshold=_threshold - In the implementation block
@property (nonatomic,readonly) NSArray * synonyms;                                //@synthesize synonyms=_synonyms - In the implementation block
@property (assign,nonatomic) unsigned long long count;                            //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned long long highConfidenceCount;              //@synthesize highConfidenceCount=_highConfidenceCount - In the implementation block
@property (assign,nonatomic) double libraryCoverage;                              //@synthesize libraryCoverage=_libraryCoverage - In the implementation block
-(void)setCount:(unsigned long long)arg1 ;
-(double)threshold;
-(BOOL)isIndexed;
-(unsigned)sceneIdentifier;
-(NSString *)keyword;
-(unsigned long long)count;
-(id)description;
-(id)concatenatedSynonyms;
-(double)libraryCoverage;
-(id)initWithKeyword:(id)arg1 synonyms:(id)arg2 sceneIdentifier:(unsigned)arg3 indexed:(BOOL)arg4 threshold:(double)arg5 ;
-(unsigned long long)highConfidenceCount;
-(void)setHighConfidenceCount:(unsigned long long)arg1 ;
-(void)setLibraryCoverage:(double)arg1 ;
-(NSArray *)synonyms;
@end

