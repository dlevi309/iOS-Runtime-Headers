/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBHandwritingPointFIFO.h>

@class NSMutableArray;

@interface UIKBHandwritingQuadCurvePointFIFO : UIKBHandwritingPointFIFO {

	/*^block*/id _emissionHandler;
	double _scale;
	NSMutableArray* _prevPoints;
	SCD_Struct_UI89 _lastPoint;

}

@property (assign,nonatomic) double scale;                             //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) NSMutableArray * prevPoints;              //@synthesize prevPoints=_prevPoints - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI88 lastPoint;                //@synthesize lastPoint=_lastPoint - In the implementation block
@property (copy) id emissionHandler;                                   //@synthesize emissionHandler=_emissionHandler - In the implementation block
-(void)clear;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(void)flush;
-(void)addPoint:(SCD_Struct_UI88)arg1 ;
-(NSMutableArray *)prevPoints;
-(void)setPrevPoints:(NSMutableArray *)arg1 ;
-(void)setLastPoint:(SCD_Struct_UI88)arg1 ;
-(SCD_Struct_UI88)lastPoint;
-(id)emissionHandler;
-(void)setEmissionHandler:(id)arg1 ;
-(id)initWithFIFO:(id)arg1 scale:(double)arg2 ;
@end

