/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBSection : NSObject
+(void)readHeaderFrom:(id)arg1 type:(int)arg2 index:(int)arg3 header:(id)arg4 ;
+(void)mapPrinterSettings:(WrdSectionProperties*)arg1 toSection:(id)arg2 ;
+(void)mapSectionProperties:(WrdSectionProperties*)arg1 toSection:(id)arg2 ;
+(void)readFrom:(id)arg1 textRun:(WrdSectionTextRun*)arg2 document:(id)arg3 index:(int)arg4 section:(id)arg5 ;
+(void)mapSection:(id)arg1 toSectionProperties:(WrdSectionProperties*)arg2 ;
@end

