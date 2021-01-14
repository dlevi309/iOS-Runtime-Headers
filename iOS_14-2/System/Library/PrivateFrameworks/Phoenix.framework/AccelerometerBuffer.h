/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Phoenix.framework/Phoenix
*/


#import <Phoenix/Phoenix-Structs.h>
@class NSMutableArray;

@interface AccelerometerBuffer : NSObject {

	NSMutableArray* _accelBuffer;
	unsigned long long _bufferSize;
	SCD_Struct_Ac2 _movingSum;
	unsigned long long _sampleRate;
	double _localMinBelowAverage;
	double _localMaxAboveAverage;
	double _localMin;
	double _localMax;

}

@property (assign,nonatomic) double localMinBelowAverage;              //@synthesize localMinBelowAverage=_localMinBelowAverage - In the implementation block
@property (assign,nonatomic) double localMaxAboveAverage;              //@synthesize localMaxAboveAverage=_localMaxAboveAverage - In the implementation block
@property (assign,nonatomic) double localMin;                          //@synthesize localMin=_localMin - In the implementation block
@property (assign,nonatomic) double localMax;                          //@synthesize localMax=_localMax - In the implementation block
-(id)description;
-(SCD_Struct_AX0)data;
-(void)reset;
-(void)logBuffer;
-(void)_fillAccelBufferBeforeFirstSampleTimestamp:(double)arg1 ;
-(double)localMaxAboveAverage;
-(void)setLocalMaxAboveAverage:(double)arg1 ;
-(double)localMinBelowAverage;
-(void)setLocalMinBelowAverage:(double)arg1 ;
-(double)localMax;
-(void)setLocalMax:(double)arg1 ;
-(double)localMin;
-(void)setLocalMin:(double)arg1 ;
-(void)resetMovingSum;
-(id)initWithCapacity:(unsigned long long)arg1 accelerometerSampleRateInHz:(unsigned long long)arg2 ;
-(id)bufferWithMovingSum:(SCD_Struct_Ac2*)arg1 ;
-(void)addData:(SCD_Struct_Ac2)arg1 timestamp:(double)arg2 ;
@end

