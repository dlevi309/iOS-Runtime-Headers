/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCount:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)count;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(id)description;
-(void)setFieldId:(unsigned long long)arg1 ;
-(unsigned long long)fieldId;
-(BOOL)relative;
-(void)setRelative:(BOOL)arg1 ;
-(BOOL)byPosition;
-(void)setByPosition:(BOOL)arg1 ;
@end

