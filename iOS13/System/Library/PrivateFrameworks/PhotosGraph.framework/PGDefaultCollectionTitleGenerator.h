/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setDebug:(BOOL)arg1 ;
-(PHAsset *)keyAsset;
-(PHAssetCollection *)curatedAssetCollection;
-(id)initWithCollection:(id)arg1 keyAsset:(id)arg2 curatedAssetCollection:(id)arg3 ;
-(BOOL)forDiagnostics;
-(void)setForDiagnostics:(BOOL)arg1 ;
-(BOOL)isDebug;
-(void)_generateTitleAndSubtitleWithManager:(id)arg1 result:(/*^block*/id)arg2 ;
@end

