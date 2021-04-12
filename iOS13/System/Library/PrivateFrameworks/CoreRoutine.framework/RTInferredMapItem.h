/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTMapItem;

@interface RTInferredMapItem : NSObject <NSCopying, NSSecureCoding> {

	RTMapItem* _mapItem;
	double _confidence;
	unsigned long long _source;

}

@property (nonatomic,readonly) RTMapItem * mapItem;                    //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) double confidence;                      //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) unsigned long long source;              //@synthesize source=_source - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)hasKnownTypeItem:(id)arg1 ;
+(double)consolidatedConfidenceFromConfidences:(id)arg1 ;
+(unsigned long long)consolidatedSourceFromInferredMapItems:(id)arg1 ;
+(id)heaviestMapItemFrom:(id)arg1 closestToLocation:(id)arg2 distanceCalculator:(id)arg3 error:(id*)arg4 ;
+(id)dedupeInferredMapItems:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)source;
-(double)confidence;
-(RTMapItem *)mapItem;
-(id)initWithMapItem:(id)arg1 confidence:(double)arg2 source:(unsigned long long)arg3 ;
@end

