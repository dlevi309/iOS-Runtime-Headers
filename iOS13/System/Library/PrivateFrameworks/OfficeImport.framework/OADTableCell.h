/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(id)properties;
-(void)setProperties:(id)arg1 ;
-(BOOL)merge:(int)arg1 ;
-(int)rowSpan;
-(id)textBody;
-(void)setTextBody:(id)arg1 ;
-(void)setRowSpan:(int)arg1 ;
-(void)setTopRow:(int)arg1 ;
-(int)topRow;
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

