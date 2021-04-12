/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXWorkbook : NSObject
+(void)setupProcessors:(id)arg1 ;
+(id)edWorkbookFromState:(id)arg1 package:(id)arg2 reader:(id)arg3 fileName:(id)arg4 temporaryDirectory:(id)arg5 delegate:(id)arg6 forThumbnail:(BOOL)arg7 ;
+(void)readStringsFrom:(id)arg1 state:(id)arg2 ;
+(id)edWorkbookFromState:(id)arg1 package:(id)arg2 reader:(id)arg3 resourcesOnly:(BOOL)arg4 fileName:(id)arg5 temporaryDirectory:(id)arg6 delegate:(id)arg7 forThumbnail:(BOOL)arg8 ;
+(void)readStylesFrom:(id)arg1 state:(id)arg2 ;
+(void)readSheetsFrom:(id)arg1 relationNS:(xmlNs*)arg2 state:(id)arg3 delegate:(id)arg4 forThumbnail:(BOOL)arg5 ;
+(void)setupDefaultTextStyleWithState:(id)arg1 ;
+(void)setDefaultParagraphProperties:(id)arg1 ;
@end

