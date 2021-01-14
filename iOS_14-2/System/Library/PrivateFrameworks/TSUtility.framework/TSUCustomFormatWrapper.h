/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


#import <TSUtility/TSUtility-Structs.h>
@interface TSUCustomFormatWrapper : NSObject {

	TSUCustomFormat* mCustomFormat;

}
-(int)formatType;
-(id)formatName;
-(const SCD_Struct_TS34*)defaultFormatData;
-(const SCD_Struct_TS34*)conditionalFormatDataForValue:(double)arg1 ;
-(id)initWithCustomFormat:(TSUCustomFormat*)arg1 ;
-(const TSUCustomFormat*)pointerToTSUCustomFormat;
@end

