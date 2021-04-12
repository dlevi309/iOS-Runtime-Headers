/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGGraphIngestPlace.h>

@class NSString;

@interface PGGraphResolvedPlace : NSObject <PGGraphIngestPlace> {

	NSString* _placeInterestType;
	double _confidence;

}

@property (nonatomic,readonly) NSString * placeInterestType;              //@synthesize placeInterestType=_placeInterestType - In the implementation block
@property (nonatomic,readonly) double confidence;                         //@synthesize confidence=_confidence - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)confidence;
-(NSString *)placeInterestType;
-(id)initWithPlaceOfInterestType:(id)arg1 confidence:(double)arg2 ;
@end

