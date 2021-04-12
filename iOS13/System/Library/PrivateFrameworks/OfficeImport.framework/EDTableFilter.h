/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@interface EDTableFilter : NSObject {

	int mScale;
	int mOperator;
	double mValue;
	double mFilterValue;

}
+(id)edTableFilter;
-(id)description;
-(int)operatorType;
-(double)value;
-(void)setValue:(double)arg1 ;
-(int)scale;
-(void)setScale:(int)arg1 ;
-(void)setOperatorType:(int)arg1 ;
-(void)setFilterValue:(double)arg1 ;
-(double)filterValue;
@end

