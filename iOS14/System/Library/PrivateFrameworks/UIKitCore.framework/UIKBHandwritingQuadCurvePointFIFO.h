/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBHandwritingPointFIFO.h>

@class NSMutableArray;

@interface UIKBHandwritingQuadCurvePointFIFO : UIKBHandwritingPointFIFO {

	/*^block*/id _emissionHandler;
	double _scale;
	NSMutableArray* _prevPoints;
	SCD_Struct_UI99 _lastPoint;

}

@property (assign,nonatomic) double scale;                             //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) NSMutableArray * prevPoints;              //@synthesize prevPoints=_prevPoints - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI98 lastPoint;                //@synthesize lastPoint=_lastPoint - In the implementation block
@property (copy) id emissionHandler;                                   //@synthesize emissionHandler=_emissionHandler - In the implementation block
-(void)clear;
-(void)flush;
-(void)addPoint:(SCD_Struct_UI98)arg1 ;
-(NSMutableArray *)prevPoints;
-(double)scale;
-(void)setPrevPoints:(NSMutableArray *)arg1 ;
-(id)initWithFIFO:(id)arg1 scale:(double)arg2 ;
-(id)emissionHandler;
-(void)setEmissionHandler:(id)arg1 ;
-(SCD_Struct_UI98)lastPoint;
-(void)setScale:(double)arg1 ;
-(void)setLastPoint:(SCD_Struct_UI98)arg1 ;
@end

