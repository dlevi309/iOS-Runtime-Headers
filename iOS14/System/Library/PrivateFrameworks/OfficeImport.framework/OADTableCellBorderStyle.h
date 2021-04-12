/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OADStroke;

@interface OADTableCellBorderStyle : NSObject {

	OADStroke* mLeftStroke;
	OADStroke* mRightStroke;
	OADStroke* mTopStroke;
	OADStroke* mBottomStroke;
	OADStroke* mHorzInsideStroke;
	OADStroke* mVertInsideStroke;
	OADStroke* mTopLeftToBottomRightStroke;
	OADStroke* mBottomLeftToTopRightStroke;

}
+(id)defaultStyle;
+(id)defaultAxisParallelStroke;
+(id)defaultObliqueStroke;
-(id)description;
-(id)stroke:(int)arg1 ;
-(id)shallowCopy;
-(id)topStroke;
-(id)horzInsideStroke;
-(id)bottomStroke;
-(id)leftStroke;
-(id)vertInsideStroke;
-(id)rightStroke;
-(void)setLeftStroke:(id)arg1 ;
-(void)setRightStroke:(id)arg1 ;
-(void)setTopStroke:(id)arg1 ;
-(void)setBottomStroke:(id)arg1 ;
-(void)setHorzInsideStroke:(id)arg1 ;
-(void)setVertInsideStroke:(id)arg1 ;
-(void)setTopLeftToBottomRightStroke:(id)arg1 ;
-(void)setBottomLeftToTopRightStroke:(id)arg1 ;
-(id)topLeftToBottomRightStroke;
-(id)bottomLeftToTopRightStroke;
-(void)setStrokeOfType:(int)arg1 toValue:(id)arg2 ;
-(void)applyOverridesFrom:(id)arg1 ;
@end

