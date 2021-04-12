/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <DigitalTouchShared/ETPointFIFO.h>

@interface ETBoxcarFilterPointFIFO : ETPointFIFO {

	float _spacing;
	unsigned long long _width;
	vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >* _prevPoints;

}

@property (assign,nonatomic) vector<float __attribute__((ext_vector_type(2))) prevPoints;              //@synthesize prevPoints=_prevPoints - In the implementation block
@property (assign,nonatomic) unsigned long long width;                                                 //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) float spacing;                                                            //@synthesize spacing=_spacing - In the implementation block
-(void)clear;
-(float)spacing;
-(unsigned long long)width;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)flush;
-(id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2 spacing:(float)arg3 ;
-(vector<float __attribute__((ext_vector_type(2))))prevPoints;
-(void)emitAveragedPoint;
-(void)setSpacing:(float)arg1 ;
-(void)setPrevPoints:(vector<float __attribute__((ext_vector_type(2))))arg1 ;
-(void)addPoints:(1*)arg1 count:(unsigned long long)arg2 ;
@end

