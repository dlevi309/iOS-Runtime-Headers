/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

