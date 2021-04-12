/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(id)initWithCount:(unsigned long long)arg1 ;
-(const float*)ptr;
-(float)density;
-(float)maxValue;
-(float)minValue;
-(void)enumerateValuesWithBlock:(/*^block*/id)arg1 ;
-(float)valueAt:(unsigned long long)arg1 ;
-(id)initWithFloats:(const float*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithFloatsNoCopy:(float*)arg1 count:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(id)initWithFloatsNoCopy:(float*)arg1 count:(unsigned long long)arg2 deallocator:(/*^block*/id)arg3 ;
-(id)initWithNumbers:(id)arg1 ;
-(id)sliceFrom:(int)arg1 to:(int)arg2 ;
-(id)vecByAppendingVec:(id)arg1 ;
-(float)cosineDistanceFrom:(id)arg1 ;
-(float)l1norm;
-(float)l2norm;
-(void)enumerateNonZeroValuesWithBlock:(/*^block*/id)arg1 ;
@end

