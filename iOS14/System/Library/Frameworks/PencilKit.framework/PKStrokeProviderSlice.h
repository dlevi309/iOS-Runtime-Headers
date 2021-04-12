/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/CHStroke.h>

@class CHEncodedStrokeIdentifier, PKStrokeProviderSliceIdentifier, PKStroke, NSString;

@interface PKStrokeProviderSlice : NSObject <CHStroke> {

	CHEncodedStrokeIdentifier* _encodedStrokeIdentifier;
	PKStrokeProviderSliceIdentifier* _identifier;
	PKStroke* _stroke;
	CGRect _bounds;

}

@property (nonatomic,readonly) CHEncodedStrokeIdentifier * encodedStrokeIdentifier;              //@synthesize encodedStrokeIdentifier=_encodedStrokeIdentifier - In the implementation block
@property (nonatomic,readonly) PKStrokeProviderSliceIdentifier * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) PKStroke * stroke;                                                //@synthesize stroke=_stroke - In the implementation block
@property (nonatomic,retain,readonly) id<CHStrokeIdentifier> strokeIdentifier; 
@property (nonatomic,readonly) CGRect bounds;                                                    //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) unsigned long long strokeAttributes; 
@property (nonatomic,readonly) double startTimestamp; 
@property (nonatomic,readonly) double endTimestamp; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)bounds;
-(PKStroke *)stroke;
-(double)startTimestamp;
-(long long)compareTo:(id)arg1 ;
-(NSString *)description;
-(double)endTimestamp;
-(unsigned long long)hash;
-(PKStrokeProviderSliceIdentifier *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id<CHStrokeIdentifier>)strokeIdentifier;
-(void)enumeratePointsWithDistanceStep:(double)arg1 usingBlock:(/*^block*/id)arg2 ;
-(CGPoint)_splineControlPoint:(long long)arg1 ;
-(long long)_firstPointIndex;
-(long long)_lastPointIndex;
-(double)_lengthOfSplineSegment:(unsigned long long)arg1 ;
-(CGPoint)_interpolatedPointForSplineSegment:(long long)arg1 t:(double)arg2 ;
-(double)_strokeLength;
-(double)_interpolatedTimeForSplineSegment:(long long)arg1 t:(double)arg2 ;
-(void)enumeratePointsWithTimestep:(double)arg1 usingBlock:(/*^block*/id)arg2 ;
-(CHEncodedStrokeIdentifier *)encodedStrokeIdentifier;
-(unsigned long long)strokeAttributes;
-(id)initWithStroke:(id)arg1 tStart:(double)arg2 tEnd:(double)arg3 ;
@end

