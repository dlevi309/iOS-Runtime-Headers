/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OADStroke, OADTableCell3DProperties, OADFill;

@interface OADTableCellProperties : NSObject {

	OADStroke* mLeftStroke;
	OADStroke* mRightStroke;
	OADStroke* mTopStroke;
	OADStroke* mBottomStroke;
	OADStroke* mTopLeftToBottomRightStroke;
	OADStroke* mBottomLeftToTopRightStroke;
	OADTableCell3DProperties* mThreeDProperties;
	OADFill* mFill;
	float mLeftMargin;
	BOOL mIsLeftMarginOverridden;
	float mRightMargin;
	BOOL mIsRightMarginOverridden;
	float mTopMargin;
	BOOL mIsTopMarginOverridden;
	float mBottomMargin;
	BOOL mIsBottomMarginOverridden;
	unsigned char mTextFlow;
	BOOL mIsTextFlowOverridden;
	unsigned char mTextAnchor;
	BOOL mIsTextAnchorOverridden;
	BOOL mTextAnchorCenter;
	BOOL mIsTextAnchorCenterOverridden;
	unsigned char mTextHorizontalOverflow;
	BOOL mIsTextHorizontalOverflowOverridden;

}
-(id)description;
-(void)setLeftMargin:(float)arg1 ;
-(void)setRightMargin:(float)arg1 ;
-(void)setTopMargin:(float)arg1 ;
-(void)setBottomMargin:(float)arg1 ;
-(void)setTextFlow:(unsigned char)arg1 ;
-(unsigned char)textFlow;
-(float)topMargin;
-(id)fill;
-(float)rightMargin;
-(float)bottomMargin;
-(float)leftMargin;
-(void)setFill:(id)arg1 ;
-(BOOL)isLeftMarginOverridden;
-(BOOL)isRightMarginOverridden;
-(BOOL)isTopMarginOverridden;
-(BOOL)isBottomMarginOverridden;
-(unsigned char)textAnchor;
-(id)topStroke;
-(id)bottomStroke;
-(id)leftStroke;
-(id)rightStroke;
-(BOOL)isTextAnchorOverridden;
-(void)setLeftStroke:(id)arg1 ;
-(void)setRightStroke:(id)arg1 ;
-(void)setTopStroke:(id)arg1 ;
-(void)setBottomStroke:(id)arg1 ;
-(void)setTopLeftToBottomRightStroke:(id)arg1 ;
-(void)setBottomLeftToTopRightStroke:(id)arg1 ;
-(void)setTextAnchor:(unsigned char)arg1 ;
-(void)setTextAnchorCenter:(BOOL)arg1 ;
-(void)setTextHorizontalOverflow:(unsigned char)arg1 ;
-(id)topLeftToBottomRightStroke;
-(id)bottomLeftToTopRightStroke;
-(id)stroke:(int)arg1 ;
-(void)setStrokeOfType:(int)arg1 toValue:(id)arg2 ;
-(id)strokeNormalToDir:(int)arg1 bound:(int)arg2 ;
-(id)threeDProperties;
-(void)setThreeDProperties:(id)arg1 ;
-(BOOL)isTextFlowOverridden;
-(BOOL)textAnchorCenter;
-(BOOL)isTextAnchorCenterOverridden;
-(unsigned char)textHorizontalOverflow;
-(BOOL)isTextHorizontalOverflowOverridden;
@end

