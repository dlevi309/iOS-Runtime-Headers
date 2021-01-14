/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@interface EDTableFilter : NSObject {

	int mScale;
	int mOperator;
	double mValue;
	double mFilterValue;

}
+(id)edTableFilter;
-(int)operatorType;
-(int)scale;
-(void)setValue:(double)arg1 ;
-(void)setOperatorType:(int)arg1 ;
-(id)description;
-(void)setScale:(int)arg1 ;
-(double)value;
-(void)setFilterValue:(double)arg1 ;
-(double)filterValue;
@end

