/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class TSDStroke;

@interface TSTTableStrokePresetData : NSObject {

	TSDStroke* mHorizontalStroke;
	TSDStroke* mVerticalStroke;
	TSDStroke* mExteriorStroke;
	unsigned mVisibleMask;

}

@property (nonatomic,retain) TSDStroke * horizontalStroke; 
@property (nonatomic,retain) TSDStroke * verticalStroke; 
@property (nonatomic,retain) TSDStroke * exteriorStroke; 
@property (assign,nonatomic) unsigned mask; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)mask;
-(void)setMask:(unsigned)arg1 ;
-(id)initWithMask:(unsigned)arg1 horizontalStroke:(id)arg2 verticalStroke:(id)arg3 exteriorStroke:(id)arg4 ;
-(TSDStroke *)horizontalStroke;
-(TSDStroke *)verticalStroke;
-(TSDStroke *)exteriorStroke;
-(void)setHorizontalStroke:(TSDStroke *)arg1 ;
-(void)setVerticalStroke:(TSDStroke *)arg1 ;
-(void)setExteriorStroke:(TSDStroke *)arg1 ;
@end

