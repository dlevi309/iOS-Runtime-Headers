/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OADGraphicProperties, EDCollection, EDResources, NSArray;

@interface CHDLegend : NSObject {

	int mLegendPosition;
	OADGraphicProperties* mGraphicProperties;
	unsigned long long mFontIndex;
	EDCollection* mLegendEntries;
	EDResources* mResources;
	BOOL mIsVertical;
	BOOL mIsOverlay;
	NSArray* mLabelEffects;

}
-(id)description;
-(void)setFont:(id)arg1 ;
-(id)font;
-(void)setIsOverlay:(BOOL)arg1 ;
-(BOOL)isOverlay;
-(unsigned long long)fontIndex;
-(id)initWithResources:(id)arg1 ;
-(void)setFontIndex:(unsigned long long)arg1 ;
-(id)graphicProperties;
-(int)legendPosition;
-(void)setLabelEffects:(id)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(void)setLegendPosition:(int)arg1 ;
-(void)setIsSingleColumnLegend:(BOOL)arg1 ;
-(id)labelEffects;
-(id)legendEntries;
-(BOOL)isSingleColumnLegend;
-(BOOL)isAutoSizeAndPosition;
@end

