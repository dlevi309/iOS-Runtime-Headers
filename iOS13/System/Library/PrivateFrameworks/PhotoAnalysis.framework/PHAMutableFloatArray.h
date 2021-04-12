/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <PhotoAnalysis/PhotoAnalysis-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableData, NSData;

@interface PHAMutableFloatArray : NSObject <NSCopying, NSMutableCopying> {

	NSMutableData* _data;

}

@property (nonatomic,retain,readonly) NSMutableData * mutableData; 
@property (nonatomic,readonly) float* mutableFloats; 
@property (nonatomic,retain,readonly) NSData * data; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) const float* floats; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)initWithArray:(id)arg1 ;
-(id)array;
-(id)initWithData:(id)arg1 ;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(NSData *)data;
-(void)appendFloat:(float)arg1 ;
-(void)appendArray:(id)arg1 ;
-(BOOL)isApproximatelyEqualTo:(id)arg1 ;
-(NSMutableData *)mutableData;
-(float)sum;
-(float)floatAtIndex:(unsigned long long)arg1 ;
-(id)initWithFloats:(const float*)arg1 count:(unsigned long long)arg2 ;
-(void)appendFloats:(const float*)arg1 count:(unsigned long long)arg2 ;
-(void)appendDoubles:(const double*)arg1 count:(unsigned long long)arg2 ;
-(void)appendNSArray:(id)arg1 ;
-(const float*)floats;
-(float*)mutableFloats;
-(void)subtract:(id)arg1 ;
-(id)floatArrayBySubtracting:(id)arg1 ;
-(float)sumOfSquares;
-(void)setFloat:(float)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)isApproximatelyEqualTo:(id)arg1 epsilon:(float)arg2 ;
-(id)initWithDataTensor:(id)arg1 ;
@end

