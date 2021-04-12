/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CHDSeries.h>

@class CHDData;

@interface CHDBubbleSeries : CHDSeries {

	CHDData* mSizeData;
	BOOL mBubble3D;
	BOOL mInvertIfNegative;
	BOOL mShowBubbleSize;

}
-(BOOL)isShowBubbleSize;
-(void)setShowBubbleSize:(BOOL)arg1 ;
-(void)setCategoryData:(id)arg1 ;
-(BOOL)isBubble3D;
-(id)sizeData;
-(void)setSizeData:(id)arg1 ;
-(void)setBubble3D:(BOOL)arg1 ;
-(BOOL)isInvertIfNegative;
-(void)setInvertIfNegative:(BOOL)arg1 ;
@end

