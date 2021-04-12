/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class EDCollection;

@interface EDPivotField : NSObject {

	int mAxis;
	BOOL mCompact;
	BOOL mDataField;
	BOOL mShowDefaultSubTotal;
	BOOL mInsertBlankRow;
	BOOL mOutlineItems;
	BOOL mShowAllItems;
	BOOL mSubtotalTop;
	unsigned long long mNumFmtId;
	EDCollection* mPivotFieldItems;

}
+(id)pivotField;
-(void)setAxis:(int)arg1 ;
-(int)axis;
-(id)init;
-(id)description;
-(void)setCompact:(BOOL)arg1 ;
-(BOOL)compact;
-(BOOL)dataField;
-(void)setDataField:(BOOL)arg1 ;
-(BOOL)showDefaultSubTotal;
-(void)setShowDefaultSubTotal:(BOOL)arg1 ;
-(BOOL)insertBlankRow;
-(void)setInsertBlankRow:(BOOL)arg1 ;
-(BOOL)outlineItems;
-(void)setOutlineItems:(BOOL)arg1 ;
-(BOOL)showAllItems;
-(void)setShowAllItems:(BOOL)arg1 ;
-(BOOL)subtotalTop;
-(void)setSubtotalTop:(BOOL)arg1 ;
-(unsigned long long)numFmtId;
-(void)setNumFmtId:(unsigned long long)arg1 ;
-(id)pivotFieldItems;
@end

