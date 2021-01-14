/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIPointFIFO.h>

@class _UIPointVector;

@interface UIBoxcarFilterPointFIFO : UIPointFIFO {

	unsigned long long _width;
	float _spacing;
	_UIPointVector* _prevPoints;

}

@property (assign,nonatomic) unsigned long long width;                 //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) float spacing;                            //@synthesize spacing=_spacing - In the implementation block
@property (nonatomic,retain) _UIPointVector * prevPoints;              //@synthesize prevPoints=_prevPoints - In the implementation block
-(float)spacing;
-(void)setSpacing:(float)arg1 ;
-(void)clear;
-(void)flush;
-(unsigned long long)width;
-(void)addPoint:;
-(id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2 spacing:(float)arg3 ;
-(_UIPointVector *)prevPoints;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setPrevPoints:(_UIPointVector *)arg1 ;
-(void)emitAveragedPoint;
-(id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2 ;
-(void)dealloc;
@end

