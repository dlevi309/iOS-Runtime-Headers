/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGGraphIngestPlace.h>

@class NSString;

@interface PGGraphResolvedPlace : NSObject <PGGraphIngestPlace> {

	NSString* _placeInterestType;
	double _confidence;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * placeInterestType;              //@synthesize placeInterestType=_placeInterestType - In the implementation block
@property (nonatomic,readonly) double confidence;                         //@synthesize confidence=_confidence - In the implementation block
-(double)confidence;
-(NSString *)placeInterestType;
-(id)initWithPlaceOfInterestType:(id)arg1 confidence:(double)arg2 ;
@end

