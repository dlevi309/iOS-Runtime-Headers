/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@interface CLSAssetFaceInformationSummary : NSObject {

	unsigned short _numberOfFaces;
	unsigned short _numberOfFacesOfVerifiedPersons;
	unsigned short _numberOfGoodFaces;
	unsigned short _numberOfGoodFacesOfVerifiedPersons;
	double _averageFaceQuality;
	double _averageFaceQualityOfVerifiedPersons;

}

@property (nonatomic,readonly) unsigned short numberOfFaces;                                   //@synthesize numberOfFaces=_numberOfFaces - In the implementation block
@property (nonatomic,readonly) unsigned short numberOfFacesOfVerifiedPersons;                  //@synthesize numberOfFacesOfVerifiedPersons=_numberOfFacesOfVerifiedPersons - In the implementation block
@property (nonatomic,readonly) unsigned short numberOfGoodFaces;                               //@synthesize numberOfGoodFaces=_numberOfGoodFaces - In the implementation block
@property (nonatomic,readonly) unsigned short numberOfGoodFacesOfVerifiedPersons;              //@synthesize numberOfGoodFacesOfVerifiedPersons=_numberOfGoodFacesOfVerifiedPersons - In the implementation block
@property (nonatomic,readonly) double averageFaceQuality;                                      //@synthesize averageFaceQuality=_averageFaceQuality - In the implementation block
@property (nonatomic,readonly) double averageFaceQualityOfVerifiedPersons;                     //@synthesize averageFaceQualityOfVerifiedPersons=_averageFaceQualityOfVerifiedPersons - In the implementation block
-(unsigned short)numberOfFaces;
-(id)initWithNumberOfFaces:(unsigned long long)arg1 numberOfFacesOfVerifiedPersons:(unsigned long long)arg2 numberOfGoodFaces:(unsigned long long)arg3 numberOfGoodFacesOfVerifiedPersons:(unsigned long long)arg4 averageFaceQuality:(double)arg5 averageFaceQualityOfVerifiedPersons:(double)arg6 ;
-(unsigned short)numberOfFacesOfVerifiedPersons;
-(unsigned short)numberOfGoodFaces;
-(unsigned short)numberOfGoodFacesOfVerifiedPersons;
-(double)averageFaceQuality;
-(double)averageFaceQualityOfVerifiedPersons;
@end

