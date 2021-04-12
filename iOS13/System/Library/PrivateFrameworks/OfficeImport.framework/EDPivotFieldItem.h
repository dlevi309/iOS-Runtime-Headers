/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@interface EDPivotFieldItem : NSObject {

	BOOL mChildItems;
	BOOL mExpanded;
	BOOL mCalculatedMember;
	BOOL mMissed;
	BOOL mHidden;
	BOOL mDetailsHidden;
	int mType;
	unsigned long long mItemIndex;

}
+(id)pivotFieldItem;
-(id)init;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(unsigned long long)itemIndex;
-(void)setItemIndex:(unsigned long long)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
-(BOOL)hidden;
-(BOOL)childItems;
-(void)setChildItems:(BOOL)arg1 ;
-(BOOL)missed;
-(void)setMissed:(BOOL)arg1 ;
-(BOOL)calculatedMember;
-(void)setCalculatedMember:(BOOL)arg1 ;
-(BOOL)detailsHidden;
-(void)setDetailsHidden:(BOOL)arg1 ;
@end

