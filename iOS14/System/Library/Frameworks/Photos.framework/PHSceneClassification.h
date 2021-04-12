/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


#import <Photos/Photos-Structs.h>
@interface PHSceneClassification : NSObject {

	unsigned _sceneIdentifier;
	double _confidence;
	long long _packedBoundingBoxRect;
	CGRect _boundingBox;

}

@property (assign,nonatomic) long long packedBoundingBoxRect;              //@synthesize packedBoundingBoxRect=_packedBoundingBoxRect - In the implementation block
@property (nonatomic,readonly) unsigned sceneIdentifier;                   //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
@property (nonatomic,readonly) double confidence;                          //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) CGRect boundingBox;                         //@synthesize boundingBox=_boundingBox - In the implementation block
+(id)fetchSceneClassificationsGroupedByAssetLocalIdentifierForAssets:(id)arg1 ;
-(double)confidence;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(unsigned)sceneIdentifier;
-(id)initWithSceneIdentifier:(unsigned)arg1 confidence:(double)arg2 boundingBox:(CGRect)arg3 ;
-(id)description;
-(long long)packedBoundingBoxRect;
-(CGRect)boundingBox;
-(BOOL)isEqualToSceneClassification:(id)arg1 ;
-(unsigned long long)hash;
-(void)setPackedBoundingBoxRect:(long long)arg1 ;
-(id)initWithSceneIdentifier:(unsigned)arg1 confidence:(double)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

