/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGMeaningCriteria.h>

@class NSString;

@interface PGMeaningLocationMobilityCriteria : NSObject <PGMeaningCriteria> {

	unsigned long long _locationMobilityType;
	NSString* _locationMobilityLabel;

}

@property (assign,nonatomic) unsigned long long locationMobilityType;              //@synthesize locationMobilityType=_locationMobilityType - In the implementation block
@property (nonatomic,retain) NSString * locationMobilityLabel;                     //@synthesize locationMobilityLabel=_locationMobilityLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)criteriaKey;
+(id)criteriaWithDictionary:(id)arg1 ;
-(unsigned long long)locationMobilityType;
-(NSString *)description;
-(BOOL)isValid;
-(BOOL)passesForMomentNode:(id)arg1 ;
-(void)setLocationMobilityLabel:(NSString *)arg1 ;
-(void)setLocationMobilityType:(unsigned long long)arg1 ;
-(NSString *)locationMobilityLabel;
@end

