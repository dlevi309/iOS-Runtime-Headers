/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface _PKStrokeData : NSObject <NSCopying> {

	unique_ptr<_PKStrokeDataPoints, std::__1::default_delete<_PKStrokeDataPoints> >* _strokeDataPoints;
	PKStrokeDataPointsPrivate _strokeDataPointsPrivate;
	shared_ptr<PKProtobufUnknownFields>* _unknownFields;
	unsigned long long _pointsCount;
	unsigned long long _immutablePointsCount;
	unsigned long long _startIndex;
	long long _inputType;
	double _timestamp;
	NSUUID* _strokeDataUUID;

}

@property (nonatomic,readonly) unsigned long long _pointsCount;                       //@synthesize pointsCount=_pointsCount - In the implementation block
@property (nonatomic,readonly) unsigned long long _startIndex;                        //@synthesize startIndex=_startIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long _immutablePointsCount;              //@synthesize immutablePointsCount=_immutablePointsCount - In the implementation block
@property (nonatomic,readonly) BOOL inflight; 
@property (nonatomic,readonly) long long _inputType;                                  //@synthesize inputType=_inputType - In the implementation block
@property (nonatomic,readonly) double _timestamp;                                     //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSUUID * _strokeDataUUID;                              //@synthesize strokeDataUUID=_strokeDataUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasPointTimestampData; 
@property (nonatomic,readonly) const PKStrokeDataPoints* _points; 
+(id)strokeDataFromDataArchive:(const StrokeData*)arg1 ;
+(void)calculateOffsets;
+(void)_calculateOffsets:(unsigned long long*)arg1 sizes:(unsigned long long*)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)_timestamp;
-(unsigned long long)_startIndex;
-(const PKStrokeDataPoints*)_points;
-(long long)_inputType;
-(PKCompressedStrokePoint)pointAt:(unsigned long long)arg1 ;
-(id)deltaTo:(id)arg1 ;
-(unsigned long long)_pointsCount;
-(BOOL)hasPointTimestampData;
-(BOOL)saveToDataArchive:(StrokeData*)arg1 ;
-(unsigned long long)_immutablePointsCount;
-(id)dataApplying:(id)arg1 ;
-(id)initWithPoints:(PKCompressedStrokePoint*)arg1 count:(unsigned long long)arg2 immutableCount:(unsigned long long)arg3 inputType:(long long)arg4 timestamp:(double)arg5 UUID:(id)arg6 ;
-(void)setPoints:(PKCompressedStrokePoint*)arg1 pointsCount:(unsigned long long)arg2 ;
-(void)setPointsFrom:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithData:(id)arg1 range:(NSRange)arg2 UUID:(id)arg3 ;
-(PKStrokeDataPoints*)_mutablePoints;
-(BOOL)inflight;
-(NSUUID *)_strokeDataUUID;
-(void)readStrokeDataFromArchive:(const StrokeData*)arg1 ;
@end

