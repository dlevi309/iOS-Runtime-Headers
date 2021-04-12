/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBHandwritingPointFIFO.h>

@class NSMutableArray;

@interface UIKBHandwritingBoxcarFilterPointFIFO : UIKBHandwritingPointFIFO {

	NSMutableArray* _prevPoints;
	unsigned long long _width;

}

@property (nonatomic,retain) NSMutableArray * prevPoints;              //@synthesize prevPoints=_prevPoints - In the implementation block
@property (assign,nonatomic) unsigned long long width;                 //@synthesize width=_width - In the implementation block
-(void)clear;
-(unsigned long long)width;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)flush;
-(void)addPoint:(SCD_Struct_UI88)arg1 ;
-(NSMutableArray *)prevPoints;
-(void)emitAveragedPoint;
-(id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2 ;
-(void)setPrevPoints:(NSMutableArray *)arg1 ;
@end

