/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class PHAsset;

@interface PGLongTailSuggestionCandidate : NSObject {

	PHAsset* _asset;
	unsigned long long _score;

}

@property (nonatomic,readonly) PHAsset * asset;                       //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) unsigned long long score;              //@synthesize score=_score - In the implementation block
-(unsigned long long)score;
-(PHAsset *)asset;
-(id)initWithAsset:(id)arg1 score:(unsigned long long)arg2 ;
-(BOOL)isValidWithMeNodeLocalIdentifier:(id)arg1 ;
@end

