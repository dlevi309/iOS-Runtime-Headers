/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CMProperty.h>

@interface CMLengthProperty : CMProperty {

	double value;
	int unitType;

}
+(double)convertToPoints:(double)arg1 unit:(int)arg2 ;
+(id)cssStringValue:(double)arg1 unit:(int)arg2 ;
-(id)description;
-(int)unitType;
-(int)compareValue:(id)arg1 ;
-(int)intValue;
-(id)initWithNumber:(double)arg1 ;
-(double)value;
-(id)initWithNumber:(double)arg1 unit:(int)arg2 ;
-(id)cssStringForName:(id)arg1 ;
-(id)cssString;
-(void)addNumber:(double)arg1 unit:(int)arg2 ;
@end

