/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class EDResources, EDString, OADGraphicProperties;

@interface CHDDataLabel : NSObject {

	EDResources* mResources;
	EDString* mString;
	unsigned long long mContentFormatId;
	int mPosition;
	BOOL mShowLeaderLines;
	BOOL mShowCategoryName;
	BOOL mShowSeriesName;
	BOOL mShowPercent;
	BOOL mShowBubbleSize;
	BOOL mShowValue;
	BOOL mShowLegendKey;
	BOOL mIsPositionAffineTransform;
	BOOL mContentFormatDerived;
	BOOL mDeleted;
	BOOL mExtensionDetected;
	double mRotation;
	OADGraphicProperties* mGraphicProperties;
	OADGraphicProperties* mLeaderlineGraphicProperties;

}

@property (nonatomic,retain) EDString * string; 
+(id)dataLabelWithResources:(id)arg1 ;
-(EDString *)string;
-(id)description;
-(void)setString:(EDString *)arg1 ;
-(int)position;
-(void)setPosition:(int)arg1 ;
-(void)setShowValue:(BOOL)arg1 ;
-(BOOL)isDeleted;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(void)setDeleted:(BOOL)arg1 ;
-(BOOL)isLabelVisible;
-(id)initWithResources:(id)arg1 ;
-(id)graphicProperties;
-(unsigned long long)contentFormatId;
-(id)contentFormat;
-(BOOL)isShowValue;
-(void)setContentFormatId:(unsigned long long)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(void)setIsContentFormatDerivedFromDataPoints:(BOOL)arg1 ;
-(void)setContentFormat:(id)arg1 ;
-(BOOL)isContentFormatDerivedFromDataPoints;
-(BOOL)isShowLeaderLines;
-(BOOL)hasLeaderLinesGraphics;
-(void)setShowLeaderLines:(BOOL)arg1 ;
-(BOOL)isShowCategoryName;
-(void)setShowCategoryName:(BOOL)arg1 ;
-(BOOL)isShowSeriesName;
-(void)setShowSeriesName:(BOOL)arg1 ;
-(BOOL)isShowPercent;
-(void)setShowPercent:(BOOL)arg1 ;
-(BOOL)isShowBubbleSize;
-(void)setShowBubbleSize:(BOOL)arg1 ;
-(BOOL)isShowLegendKey;
-(void)setShowLegendKey:(BOOL)arg1 ;
-(BOOL)isExtensionDetected;
-(void)setExtensionDetected:(BOOL)arg1 ;
-(BOOL)isCustomLabelBlockingVisibility;
-(id)leaderlineGraphicProperties;
-(void)setLeaderlineGraphicProperties:(id)arg1 ;
-(void)setIsPositionAffineTransform:(BOOL)arg1 ;
-(BOOL)isPositionAffineTransform;
@end

