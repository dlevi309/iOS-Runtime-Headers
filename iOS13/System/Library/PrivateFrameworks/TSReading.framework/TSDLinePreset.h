/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class TSDLineEnd, TSDStroke;

@interface TSDLinePreset : NSObject {

	TSDLineEnd* mHeadLineEnd;
	TSDLineEnd* mTailLineEnd;
	TSDStroke* mStroke;

}

@property (nonatomic,copy,readonly) TSDLineEnd * headLineEnd; 
@property (nonatomic,copy,readonly) TSDLineEnd * tailLineEnd; 
@property (nonatomic,copy,readonly) TSDStroke * stroke; 
+(id)lineWithStroke:(id)arg1 headLineEnd:(id)arg2 tailLineEnd:(id)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(TSDStroke *)stroke;
-(TSDLineEnd *)headLineEnd;
-(TSDLineEnd *)tailLineEnd;
-(id)initWithStroke:(id)arg1 headLineEnd:(id)arg2 tailLineEnd:(id)arg3 ;
@end

