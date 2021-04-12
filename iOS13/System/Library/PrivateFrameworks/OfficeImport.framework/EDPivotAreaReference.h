/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@interface EDPivotAreaReference : NSObject {

	BOOL mByPosition;
	BOOL mRelative;
	BOOL mSelected;
	unsigned long long mFieldId;
	unsigned long long mCount;

}
+(id)pivotAreaReference;
-(id)init;
-(id)description;
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(unsigned long long)fieldId;
-(void)setFieldId:(unsigned long long)arg1 ;
-(BOOL)relative;
-(void)setRelative:(BOOL)arg1 ;
-(BOOL)byPosition;
-(void)setByPosition:(BOOL)arg1 ;
@end

