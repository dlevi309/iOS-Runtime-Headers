/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CHDChartType.h>

@interface CHDBubbleType : CHDChartType {

	BOOL mShowNegativeBubbles;
	BOOL mSizeRepresentsRadius;
	int mBubbleScale;

}
-(id)initWithChart:(id)arg1 ;
-(BOOL)is3DType;
-(int)defaultLabelPosition;
-(BOOL)isShowNegBubbles;
-(void)setShowNegBubbles:(BOOL)arg1 ;
-(int)bubbleScale;
-(void)setBubbleScale:(int)arg1 ;
-(BOOL)isSizeRepresentingRadius;
-(void)setSizeRepresentsRadius:(BOOL)arg1 ;
@end

