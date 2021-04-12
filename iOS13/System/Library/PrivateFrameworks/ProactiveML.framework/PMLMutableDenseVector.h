/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProactiveML/PMLDenseVector.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableData;

@interface PMLMutableDenseVector : PMLDenseVector <NSCopying, NSMutableCopying> {

	NSMutableData* _mutableData;

}

@property (nonatomic,readonly) float* mutablePtr; 
@property (nonatomic,readonly) NSMutableData * mutableData;              //@synthesize mutableData=_mutableData - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithMutableData:(id)arg1 ;
-(NSMutableData *)mutableData;
-(void)append:(float)arg1 ;
-(float*)mutablePtr;
-(void)append:(const float*)arg1 count:(unsigned long long)arg2 ;
-(void)processValuesInPlaceWithBlock:(/*^block*/id)arg1 ;
-(void)scaleInPlaceWithInversedFactor:(float)arg1 ;
-(void)scaleInPlaceWithFactor:(float)arg1 ;
-(void)sumInPlaceWithVector:(id)arg1 ;
@end

