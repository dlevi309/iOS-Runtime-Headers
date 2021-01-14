/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGAssetFeatureExtractor.h>

@class PHFetchResult;

@interface PGFeatureExtractorFrequentPeople : PGAssetFeatureExtractor {

	unsigned long long _numberOfFrequentPeopleToExtract;
	PHFetchResult* _frequencySortedPersons;

}

@property (nonatomic,readonly) unsigned long long numberOfFrequentPeopleToExtract;              //@synthesize numberOfFrequentPeopleToExtract=_numberOfFrequentPeopleToExtract - In the implementation block
@property (nonatomic,retain) PHFetchResult * frequencySortedPersons;                            //@synthesize frequencySortedPersons=_frequencySortedPersons - In the implementation block
-(id)featureNames;
-(id)name;
-(long long)featureLength;
-(id)floatVectorWithEntity:(id)arg1 error:(id*)arg2 ;
-(id)initWithNumberOfFrequentPeopleToExtract:(unsigned long long)arg1 ;
-(unsigned long long)numberOfFrequentPeopleToExtract;
-(PHFetchResult *)frequencySortedPersons;
-(void)setFrequencySortedPersons:(PHFetchResult *)arg1 ;
@end

