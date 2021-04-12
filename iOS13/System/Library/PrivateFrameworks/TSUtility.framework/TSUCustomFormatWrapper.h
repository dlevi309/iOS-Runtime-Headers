/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


#import <TSUtility/TSUtility-Structs.h>
@interface TSUCustomFormatWrapper : NSObject {

	TSUCustomFormat* mCustomFormat;

}
-(id)initWithCustomFormat:(TSUCustomFormat*)arg1 ;
-(id)formatName;
-(const TSUCustomFormat*)pointerToTSUCustomFormat;
-(int)formatType;
-(const SCD_Struct_TS34*)defaultFormatData;
-(const SCD_Struct_TS34*)conditionalFormatDataForValue:(double)arg1 ;
@end

