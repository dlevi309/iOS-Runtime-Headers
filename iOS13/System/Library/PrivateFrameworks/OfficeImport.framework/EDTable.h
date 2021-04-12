/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class EDResources, NSString, EDReference, EDCollection;

@interface EDTable : NSObject {

	EDResources* mResources;
	unsigned long long mStyleIndex;
	unsigned long long mHeaderRowDxfIndex;
	unsigned long long mTotalsRowDxfIndex;
	unsigned long long mDataAreaDxfIndex;
	unsigned long long mHeaderRowBorderDxfIndex;
	unsigned long long mTotalsRowBorderDxfIndex;
	unsigned long long mDataAreaBorderDxfIndex;
	unsigned long long mTableBorderDxfIndex;
	NSString* mName;
	NSString* mDisplayName;
	EDReference* mTableRange;
	NSString* mStyleName;
	unsigned long long mHeaderRowCount;
	unsigned long long mTotalsRowCount;
	BOOL mShowFirstColumn;
	BOOL mShowLastColumn;
	BOOL mShowRowStripes;
	BOOL mShowColumnStripes;
	EDCollection* mTableColumns;
	EDCollection* mColumnFilters;

}
+(id)tableWithResources:(id)arg1 ;
-(id)description;
-(id)name;
-(void)setName:(id)arg1 ;
-(id)displayName;
-(id)style;
-(void)setStyle:(id)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(id)styleName;
-(id)initWithResources:(id)arg1 ;
-(void)setStyleIndex:(unsigned long long)arg1 ;
-(unsigned long long)styleIndex;
-(id)tableRange;
-(id)tableColumns;
-(id)headerRowBorderDxf;
-(void)setHeaderRowBorderDxf:(id)arg1 ;
-(id)totalsRowBorderDxf;
-(void)setTotalsRowBorderDxf:(id)arg1 ;
-(id)dataAreaBorderDxf;
-(void)setDataAreaBorderDxf:(id)arg1 ;
-(void)setTableBorderDxf:(id)arg1 ;
-(unsigned long long)headerRowBorderDxfIndex;
-(unsigned long long)totalsRowBorderDxfIndex;
-(unsigned long long)dataAreaBorderDxfIndex;
-(unsigned long long)tableBorderDxfIndex;
-(id)headerRowDxf;
-(void)setHeaderRowDxf:(id)arg1 ;
-(id)totalsRowDxf;
-(void)setTotalsRowDxf:(id)arg1 ;
-(id)dataAreaDxf;
-(void)setDataAreaDxf:(id)arg1 ;
-(unsigned long long)headerRowDxfIndex;
-(void)setHeaderRowDxfIndex:(unsigned long long)arg1 ;
-(unsigned long long)totalsRowDxfIndex;
-(void)setTotalsRowDxfIndex:(unsigned long long)arg1 ;
-(unsigned long long)dataAreaDxfIndex;
-(void)setDataAreaDxfIndex:(unsigned long long)arg1 ;
-(BOOL)showRowStripes;
-(BOOL)showColumnStripes;
-(id)tableBorderDxf;
-(BOOL)showFirstColumn;
-(BOOL)showLastColumn;
-(unsigned long long)headerRowCount;
-(unsigned long long)totalsRowCount;
-(void)setStyleName:(id)arg1 ;
-(void)setShowLastColumn:(BOOL)arg1 ;
-(void)setShowRowStripes:(BOOL)arg1 ;
-(void)setShowColumnStripes:(BOOL)arg1 ;
-(void)setTableRange:(id)arg1 ;
-(void)setTotalsRowCount:(unsigned long long)arg1 ;
-(void)setHeaderRowCount:(unsigned long long)arg1 ;
-(void)setHeaderRowBorderDxfIndex:(unsigned long long)arg1 ;
-(void)setDataAreaBorderDxfIndex:(unsigned long long)arg1 ;
-(void)setTotalsRowBorderDxfIndex:(unsigned long long)arg1 ;
-(void)setTableBorderDxfIndex:(unsigned long long)arg1 ;
-(id)columnFilters;
-(void)setShowFirstColumn:(BOOL)arg1 ;
@end

