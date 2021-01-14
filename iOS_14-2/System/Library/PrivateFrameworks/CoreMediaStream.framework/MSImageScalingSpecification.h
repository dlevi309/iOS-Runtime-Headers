/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/


#import <CoreMediaStream/CoreMediaStream-Structs.h>
@interface MSImageScalingSpecification : NSObject {

	int _assetTypeFlags;
	double _nominalShortSideLength;
	double _minimumLongSideLength;
	double _maximumLongSideLength;

}

@property (assign,nonatomic) double nominalShortSideLength;              //@synthesize nominalShortSideLength=_nominalShortSideLength - In the implementation block
@property (assign,nonatomic) double minimumLongSideLength;               //@synthesize minimumLongSideLength=_minimumLongSideLength - In the implementation block
@property (assign,nonatomic) double maximumLongSideLength;               //@synthesize maximumLongSideLength=_maximumLongSideLength - In the implementation block
@property (assign,nonatomic) int assetTypeFlags;                         //@synthesize assetTypeFlags=_assetTypeFlags - In the implementation block
+(id)assetsToGenerateFromImageWithInputSize:(CGSize)arg1 toConformToSpecifications:(id)arg2 ;
+(id)specificationWithSharedAlbumSpecificationString:(id)arg1 ;
-(void)setMaximumLongSideLength:(double)arg1 ;
-(id)description;
-(double)maximumLongSideLength;
-(double)scaleFactorForInputSize:(CGSize)arg1 ;
-(double)nominalShortSideLength;
-(void)setNominalShortSideLength:(double)arg1 ;
-(double)minimumLongSideLength;
-(void)setMinimumLongSideLength:(double)arg1 ;
-(int)assetTypeFlags;
-(void)setAssetTypeFlags:(int)arg1 ;
@end

