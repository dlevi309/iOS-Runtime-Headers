/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@interface PHSceneClassification : NSObject {

	unsigned _sceneIdentifier;
	double _confidence;

}

@property (nonatomic,readonly) unsigned sceneIdentifier;              //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
@property (nonatomic,readonly) double confidence;                     //@synthesize confidence=_confidence - In the implementation block
+(id)fetchSceneClassificationsGroupedByAssetLocalIdentifierForAssets:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(double)confidence;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(unsigned)sceneIdentifier;
-(id)initWithSceneIdentifier:(unsigned)arg1 confidence:(double)arg2 ;
-(BOOL)isEqualToSceneClassification:(id)arg1 ;
@end

