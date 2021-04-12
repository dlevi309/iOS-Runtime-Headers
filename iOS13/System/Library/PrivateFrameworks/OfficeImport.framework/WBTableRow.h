/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBTableRow : NSObject
+(void)readFrom:(id)arg1 textRuns:(id)arg2 to:(id)arg3 index:(unsigned long long)arg4 row:(id)arg5 ;
+(void)readCellsFrom:(id)arg1 textRuns:(id)arg2 level:(int)arg3 to:(id)arg4 properties:(WrdTableProperties*)arg5 tracked:(WrdTableProperties*)arg6 ;
+(void)collectCellProperties:(WrdTableProperties*)arg1 tracked:(WrdTableProperties*)arg2 for:(id)arg3 ;
@end

