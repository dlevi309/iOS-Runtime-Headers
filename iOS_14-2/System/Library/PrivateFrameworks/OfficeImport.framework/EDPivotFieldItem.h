/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)hidden;
-(id)init;
-(unsigned long long)itemIndex;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)expanded;
-(BOOL)childItems;
-(BOOL)missed;
-(void)setType:(int)arg1 ;
-(id)description;
-(void)setChildItems:(BOOL)arg1 ;
-(int)type;
-(void)setItemIndex:(unsigned long long)arg1 ;
-(void)setMissed:(BOOL)arg1 ;
-(BOOL)calculatedMember;
-(void)setCalculatedMember:(BOOL)arg1 ;
-(BOOL)detailsHidden;
-(void)setDetailsHidden:(BOOL)arg1 ;
@end

