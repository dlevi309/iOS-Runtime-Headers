/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)dedupeInferredMapItems:(id)arg1 ;
+(double)consolidatedConfidenceFromConfidences:(id)arg1 ;
+(unsigned long long)consolidatedSourceFromInferredMapItems:(id)arg1 ;
+(id)heaviestMapItemFrom:(id)arg1 closestToLocation:(id)arg2 distanceCalculator:(id)arg3 error:(id*)arg4 ;
-(double)confidence;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(RTMapItem *)mapItem;
-(id)initWithMapItem:(id)arg1 confidence:(double)arg2 source:(unsigned long long)arg3 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)source;
@end

