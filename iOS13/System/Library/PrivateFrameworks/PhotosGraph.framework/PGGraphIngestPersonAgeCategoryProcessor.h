/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGGraphIngestProcessor.h>

@class NSDictionary, NSString;

@interface PGGraphIngestPersonAgeCategoryProcessor : NSObject <PGGraphIngestProcessor> {

	NSDictionary* _confidenceThresholdByChildSceneIdentifier;
	NSDictionary* _confidenceThresholdByAdultSceneIdentifier;

}

@property (nonatomic,readonly) NSDictionary * confidenceThresholdByChildSceneIdentifier;              //@synthesize confidenceThresholdByChildSceneIdentifier=_confidenceThresholdByChildSceneIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * confidenceThresholdByAdultSceneIdentifier;              //@synthesize confidenceThresholdByAdultSceneIdentifier=_confidenceThresholdByAdultSceneIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldRunWithGraphUpdate:(id)arg1 ;
-(void)runWithGraphUpdate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)processPersonAgeCategoryForPersonNodes:(id)arg1 graph:(id)arg2 withProgressBlock:(/*^block*/id)arg3 ;
-(unsigned long long)_ageCategoryForPersonNode:(id)arg1 graph:(id)arg2 ;
-(unsigned long long)_ageCategoryFromPHFaceAgeType:(unsigned short)arg1 ;
-(unsigned long long)_ageCategoryFromBirthdayDateForPersonNode:(id)arg1 ;
-(NSDictionary *)confidenceThresholdByChildSceneIdentifier;
-(NSDictionary *)confidenceThresholdByAdultSceneIdentifier;
-(unsigned long long)_ageCategoryFromAssetSamplingForPersonNode:(id)arg1 graph:(id)arg2 ;
@end

