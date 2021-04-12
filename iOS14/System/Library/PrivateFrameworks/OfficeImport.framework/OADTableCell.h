/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OADTextBody, OADTableCellProperties;

@interface OADTableCell : NSObject {

	OADTextBody* mTextBody;
	OADTableCellProperties* mProperties;
	int mRowSpan;
	int mGridSpan;
	BOOL mHorzMerge;
	BOOL mVertMerge;
	int mTopRow;
	int mLeftColumn;

}
-(BOOL)merge:(int)arg1 ;
-(id)properties;
-(id)init;
-(int)rowSpan;
-(void)setRowSpan:(int)arg1 ;
-(id)textBody;
-(void)setTopRow:(int)arg1 ;
-(id)description;
-(int)topRow;
-(void)setProperties:(id)arg1 ;
-(void)setTextBody:(id)arg1 ;
-(BOOL)horzMerge;
-(BOOL)vertMerge;
-(int)gridSpan;
-(void)setGridSpan:(int)arg1 ;
-(void)setHorzMerge:(BOOL)arg1 ;
-(void)setVertMerge:(BOOL)arg1 ;
-(int)spanAlongDir:(int)arg1 ;
-(int)leftColumn;
-(void)setLeftColumn:(int)arg1 ;
@end

