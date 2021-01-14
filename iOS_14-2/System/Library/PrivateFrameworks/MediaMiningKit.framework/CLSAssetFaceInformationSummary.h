/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSDictionary;

@interface CLSAssetFaceInformationSummary : NSObject {

	unsigned short _numberOfFaces;
	unsigned short _numberOfFacesOfVerifiedPersons;
	unsigned short _numberOfFacesOfHiddenPersons;
	unsigned short _numberOfGoodFaces;
	unsigned short _numberOfGoodFacesOfVerifiedPersons;
	double _averageFaceQuality;
	double _averageFaceQualityOfVerifiedPersons;
	NSDictionary* _faceInformationByPersonLocalIdentifier;

}

@property (readonly) unsigned short numberOfFaces;                                       //@synthesize numberOfFaces=_numberOfFaces - In the implementation block
@property (readonly) unsigned short numberOfFacesOfVerifiedPersons;                      //@synthesize numberOfFacesOfVerifiedPersons=_numberOfFacesOfVerifiedPersons - In the implementation block
@property (readonly) unsigned short numberOfFacesOfHiddenPersons;                        //@synthesize numberOfFacesOfHiddenPersons=_numberOfFacesOfHiddenPersons - In the implementation block
@property (readonly) unsigned short numberOfGoodFaces;                                   //@synthesize numberOfGoodFaces=_numberOfGoodFaces - In the implementation block
@property (readonly) unsigned short numberOfGoodFacesOfVerifiedPersons;                  //@synthesize numberOfGoodFacesOfVerifiedPersons=_numberOfGoodFacesOfVerifiedPersons - In the implementation block
@property (readonly) double averageFaceQuality;                                          //@synthesize averageFaceQuality=_averageFaceQuality - In the implementation block
@property (readonly) double averageFaceQualityOfVerifiedPersons;                         //@synthesize averageFaceQualityOfVerifiedPersons=_averageFaceQualityOfVerifiedPersons - In the implementation block
@property (readonly) NSDictionary * faceInformationByPersonLocalIdentifier;              //@synthesize faceInformationByPersonLocalIdentifier=_faceInformationByPersonLocalIdentifier - In the implementation block
-(unsigned short)numberOfFaces;
-(unsigned short)numberOfGoodFaces;
-(unsigned short)numberOfFacesOfHiddenPersons;
-(double)averageFaceQuality;
-(unsigned short)numberOfFacesOfVerifiedPersons;
-(NSDictionary *)faceInformationByPersonLocalIdentifier;
-(id)initWithNumberOfFaces:(unsigned long long)arg1 numberOfFacesOfVerifiedPersons:(unsigned long long)arg2 numberOfFacesOfHiddenPersons:(unsigned long long)arg3 numberOfGoodFaces:(unsigned long long)arg4 numberOfGoodFacesOfVerifiedPersons:(unsigned long long)arg5 averageFaceQuality:(double)arg6 averageFaceQualityOfVerifiedPersons:(double)arg7 faceInformationByPersonLocalIdentifier:(id)arg8 ;
-(unsigned short)numberOfGoodFacesOfVerifiedPersons;
-(double)averageFaceQualityOfVerifiedPersons;
@end

