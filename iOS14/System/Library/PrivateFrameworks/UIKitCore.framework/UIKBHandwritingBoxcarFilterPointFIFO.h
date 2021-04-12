/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)flush;
-(unsigned long long)width;
-(void)addPoint:(SCD_Struct_UI98)arg1 ;
-(NSMutableArray *)prevPoints;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setPrevPoints:(NSMutableArray *)arg1 ;
-(void)emitAveragedPoint;
-(id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2 ;
@end

