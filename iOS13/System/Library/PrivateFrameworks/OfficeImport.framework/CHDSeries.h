/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <libobjc.A.dylib/EDKeyedObject.h>

@class CHDChart, CHDChartType, CHDFormula, CHDDataValue, CHDData, EDKeyedCollection, EDCollection, CHDErrorBar, CHDDataLabel, OADGraphicProperties, NSString;

@interface CHDSeries : NSObject <EDKeyedObject> {

	CHDChart* mChart;
	CHDChartType* mChartType;
	unsigned long long mOrder;
	unsigned long long mStyleIndex;
	CHDFormula* mName;
	CHDDataValue* mLastCachedName;
	CHDData* mValueData;
	CHDData* mCategoryData;
	EDKeyedCollection* mDataValuePropertiesCollection;
	EDCollection* mTrendlinesCollection;
	CHDErrorBar* mErrorBarX;
	CHDErrorBar* mErrorBarY;
	CHDDataLabel* mDefaultDataLabel;
	OADGraphicProperties* mGraphicProperties;
	BOOL mDateTimeFormattingFlag;
	BOOL mHiddenFlag;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)seriesWithChart:(id)arg1 ;
-(NSString *)description;
-(id)name;
-(long long)key;
-(BOOL)isEmpty;
-(void)setName:(id)arg1 ;
-(unsigned long long)order;
-(BOOL)isHidden;
-(id)valueData;
-(void)setOrder:(unsigned long long)arg1 ;
-(void)setValueData:(id)arg1 ;
-(id)shallowCopy;
-(unsigned long long)categoryCount;
-(void)setChartType:(id)arg1 ;
-(id)chartType;
-(id)graphicProperties;
-(id)lastCachedName;
-(id)categoryData;
-(BOOL)isDateTimeFormattingFlag;
-(id)dataValuePropertiesCollection;
-(id)defaultDataLabel;
-(id)errorBarYAxis;
-(id)chart;
-(id)initWithChart:(id)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(void)setLastCachedName:(id)arg1 ;
-(void)setDateTimeFormattingFlag:(BOOL)arg1 ;
-(void)setStyleIndex:(unsigned long long)arg1 ;
-(void)setDefaultDataLabel:(id)arg1 ;
-(void)setErrorBarYAxis:(id)arg1 ;
-(void)setErrorBarXAxis:(id)arg1 ;
-(void)clearBackPointers;
-(unsigned long long)styleIndex;
-(void)setCategoryData:(id)arg1 ;
-(void)setDataValuePropertiesCollection:(id)arg1 ;
-(id)trendlineCollection;
-(void)setTrendlineCollection:(id)arg1 ;
-(BOOL)hasTrendlines;
-(void)setErrorBar:(id)arg1 ;
-(BOOL)hasErrorBars;
-(id)errorBarXAxis;
-(void)setHiddenFlag:(BOOL)arg1 ;
-(id)defaultSeriesNameForIndex:(unsigned long long)arg1 ;
@end

