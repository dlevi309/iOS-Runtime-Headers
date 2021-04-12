/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableData, NSData;

@interface PMLDenseVector : NSObject <NSCopying, NSMutableCopying> {

	NSMutableData* _data;

}

@property (nonatomic,readonly) const float* ptr; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSData * data; 
+(id)denseVectorFromNumbers:(id)arg1 ;
-(float)density;
-(id)init;
-(unsigned long long)count;
-(const float*)ptr;
-(id)initWithData:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithCount:(unsigned long long)arg1 ;
-(float)l1norm;
-(float)l2norm;
-(NSData *)data;
-(float)maxValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)minValue;
-(void)enumerateValuesWithBlock:(/*^block*/id)arg1 ;
-(id)initWithFloats:(const float*)arg1 count:(unsigned long long)arg2 ;
-(float)valueAt:(unsigned long long)arg1 ;
-(float)cosineDistanceFrom:(id)arg1 ;
-(id)initWithNumbers:(id)arg1 ;
-(id)initWithFloatsNoCopy:(float*)arg1 count:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(id)initWithFloatsNoCopy:(float*)arg1 count:(unsigned long long)arg2 deallocator:(/*^block*/id)arg3 ;
-(id)sliceFrom:(int)arg1 to:(int)arg2 ;
-(id)vecByAppendingVec:(id)arg1 ;
-(void)enumerateNonZeroValuesWithBlock:(/*^block*/id)arg1 ;
@end

