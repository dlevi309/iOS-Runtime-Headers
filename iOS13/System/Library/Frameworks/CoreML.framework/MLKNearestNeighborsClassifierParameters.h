/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)numberOfDimensions;
-(void)setNumberOfDimensions:(unsigned long long)arg1 ;
-(long long)indexType;
-(void)setIndexType:(long long)arg1 ;
-(NSObject *)defaultLabel;
-(void)setDefaultLabel:(NSObject *)arg1 ;
-(long long)weightingScheme;
-(void)setWeightingScheme:(long long)arg1 ;
-(NSString *)nearestLabelsFeatureName;
-(void)setNearestLabelsFeatureName:(NSString *)arg1 ;
-(NSString *)nearestDistancesFeatureName;
-(void)setNearestDistancesFeatureName:(NSString *)arg1 ;
-(unsigned long long)leafSize;
-(void)setLeafSize:(unsigned long long)arg1 ;
@end

