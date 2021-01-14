/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGTitleGenerator.h>

@protocol PGEventEnrichment;
@class PHAsset, PHAssetCollection;

@interface PGDefaultCollectionTitleGenerator : PGTitleGenerator {

	BOOL _debug;
	BOOL _forDiagnostics;
	id<PGEventEnrichment> _collection;
	PHAsset* _keyAsset;
	PHAssetCollection* _curatedAssetCollection;

}

@property (nonatomic,readonly) PHAsset * keyAsset;                                      //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,readonly) PHAssetCollection * curatedAssetCollection;              //@synthesize curatedAssetCollection=_curatedAssetCollection - In the implementation block
@property (nonatomic,readonly) id<PGEventEnrichment> collection;                        //@synthesize collection=_collection - In the implementation block
@property (assign,getter=isDebug,nonatomic) BOOL debug;                                 //@synthesize debug=_debug - In the implementation block
@property (assign,nonatomic) BOOL forDiagnostics;                                       //@synthesize forDiagnostics=_forDiagnostics - In the implementation block
-(id<PGEventEnrichment>)collection;
-(PHAsset *)keyAsset;
-(void)setDebug:(BOOL)arg1 ;
-(BOOL)isDebug;
-(PHAssetCollection *)curatedAssetCollection;
-(id)initWithCollection:(id)arg1 keyAsset:(id)arg2 curatedAssetCollection:(id)arg3 ;
-(BOOL)forDiagnostics;
-(void)setForDiagnostics:(BOOL)arg1 ;
-(void)_generateTitleAndSubtitleWithManager:(id)arg1 result:(/*^block*/id)arg2 ;
@end

