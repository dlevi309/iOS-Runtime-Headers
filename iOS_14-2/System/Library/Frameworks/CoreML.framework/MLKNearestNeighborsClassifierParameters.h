/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@class NSObject, NSString;

@interface MLKNearestNeighborsClassifierParameters : NSObject {

	unsigned long long _numberOfDimensions;
	long long _weightingScheme;
	long long _indexType;
	unsigned long long _leafSize;
	NSObject* _defaultLabel;
	NSString* _nearestLabelsFeatureName;
	NSString* _nearestDistancesFeatureName;

}

@property (assign) unsigned long long numberOfDimensions;               //@synthesize numberOfDimensions=_numberOfDimensions - In the implementation block
@property (assign) long long weightingScheme;                           //@synthesize weightingScheme=_weightingScheme - In the implementation block
@property (assign) long long indexType;                                 //@synthesize indexType=_indexType - In the implementation block
@property (assign) unsigned long long leafSize;                         //@synthesize leafSize=_leafSize - In the implementation block
@property (retain) NSObject * defaultLabel;                             //@synthesize defaultLabel=_defaultLabel - In the implementation block
@property (retain) NSString * nearestLabelsFeatureName;                 //@synthesize nearestLabelsFeatureName=_nearestLabelsFeatureName - In the implementation block
@property (retain) NSString * nearestDistancesFeatureName;              //@synthesize nearestDistancesFeatureName=_nearestDistancesFeatureName - In the implementation block
-(void)setLeafSize:(unsigned long long)arg1 ;
-(void)setIndexType:(long long)arg1 ;
-(long long)indexType;
-(long long)weightingScheme;
-(NSObject *)defaultLabel;
-(unsigned long long)leafSize;
-(void)setDefaultLabel:(NSObject *)arg1 ;
-(unsigned long long)numberOfDimensions;
-(void)setNumberOfDimensions:(unsigned long long)arg1 ;
-(void)setWeightingScheme:(long long)arg1 ;
-(NSString *)nearestLabelsFeatureName;
-(void)setNearestLabelsFeatureName:(NSString *)arg1 ;
-(NSString *)nearestDistancesFeatureName;
-(void)setNearestDistancesFeatureName:(NSString *)arg1 ;
@end

