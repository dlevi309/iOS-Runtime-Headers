/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CMMapper.h>

@class EDColumnInfo;

@interface EMColumnInfoMapper : CMMapper {

	EDColumnInfo* edColumnInfo;
	double columnWidth;
	unsigned long long columnSpan;

}
-(double)columnWidth;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithEDColumnInfo:(id)arg1 maxSpan:(unsigned long long)arg2 parent:(id)arg3 ;
-(id)initWithDefaultWidth:(double)arg1 span:(unsigned long long)arg2 parent:(id)arg3 ;
@end

