/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CMProperty.h>

@interface CMLengthProperty : CMProperty {

	double value;
	int unitType;

}
+(double)convertToPoints:(double)arg1 unit:(int)arg2 ;
+(id)cssStringValue:(double)arg1 unit:(int)arg2 ;
-(int)intValue;
-(id)description;
-(double)value;
-(int)compareValue:(id)arg1 ;
-(id)initWithNumber:(double)arg1 ;
-(int)unitType;
-(id)initWithNumber:(double)arg1 unit:(int)arg2 ;
-(id)cssStringForName:(id)arg1 ;
-(id)cssString;
-(void)addNumber:(double)arg1 unit:(int)arg2 ;
@end

