/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKStrokePoint : NSObject <NSCopying> {

	PKStrokePathPointsPrivate* _strokeDataPointsPrivate;

}

@property (nonatomic,readonly) CGPoint location; 
@property (nonatomic,readonly) double timeOffset; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) double azimuth; 
@property (nonatomic,readonly) double force; 
@property (nonatomic,readonly) double altitude; 
+(shared_ptr<PKStrokePathPointsShared>*)_sharedConstantData;
-(double)force;
-(double)altitude;
-(double)timeOffset;
-(CGSize)size;
-(CGPoint)location;
-(double)opacity;
-(double)azimuth;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(PKCompressedStrokePoint)_compressedPoint;
-(id)initWithSlice:(PKStrokePathPointsPrivate*)arg1 index:(long long)arg2 ;
-(PKStrokePathPointsPrivate*)_strokeDataPointsPrivate;
-(id)initWithLocation:(CGPoint)arg1 timeOffset:(double)arg2 size:(CGSize)arg3 opacity:(double)arg4 force:(double)arg5 azimuth:(double)arg6 altitude:(double)arg7 ;
@end

