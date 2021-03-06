/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class CHDChart, CHDFormula, EDString, OADGraphicProperties;

@interface CHDTitle : NSObject {

	CHDChart* mChart;
	BOOL mIsAutoGenerated;
	BOOL mPositionAutoGenerated;
	BOOL mSizeAutoGenerated;
	BOOL mIsOverlay;
	CHDFormula* mName;
	EDString* mLastCachedName;
	OADGraphicProperties* mGraphicProperties;
	double mRotation;

}
-(id)description;
-(id)name;
-(void)setName:(id)arg1 ;
-(void)setIsOverlay:(BOOL)arg1 ;
-(BOOL)isOverlay;
-(id)graphicProperties;
-(id)lastCachedName;
-(id)initWithChart:(id)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(void)setIsAutoGenerated:(BOOL)arg1 ;
-(void)setLastCachedName:(id)arg1 ;
-(void)setIsPositionAutoGenerated:(BOOL)arg1 ;
-(void)setTitleRotationAngle:(double)arg1 ;
-(BOOL)isAutoSizeAndPosition;
-(BOOL)isSizeAutoGenerated;
-(BOOL)isCachedTitleEmpty;
-(BOOL)isPositionAutoGenerated;
-(BOOL)isTitleVisible;
-(double)titleRotationAngle;
-(BOOL)isAutoGenerated;
-(void)setIsSizeAutoGenerated:(BOOL)arg1 ;
@end

