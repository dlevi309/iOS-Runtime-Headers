/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBTableCellBodyProperties : NSObject
+(void)readFrom:(WrdTableProperties*)arg1 tracked:(WrdTableProperties*)arg2 properties:(id)arg3 index:(unsigned long long)arg4 ;
+(void)mapWordProperties:(WrdTableProperties*)arg1 toProperties:(id)arg2 index:(unsigned long long)arg3 ;
+(void)mapProperties:(id)arg1 toWordProperties:(WrdTableProperties*)arg2 index:(unsigned long long)arg3 ;
+(id)formattingChangeDate:(const WrdDateTimeRef)arg1 ;
+(void)write:(id)arg1 wrdProperties:(WrdTableProperties*)arg2 tracked:(WrdTableProperties*)arg3 index:(unsigned long long)arg4 ;
@end

