/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WXParagraph : NSObject
+(void)readRunsTo:(id)arg1 state:(id)arg2 ;
+(void)readRunsFrom:(xmlNode*)arg1 paragraphNamespace:(xmlNs*)arg2 to:(id)arg3 targetRun:(id)arg4 state:(id)arg5 ;
+(void)readRFrom:(xmlNode*)arg1 to:(id)arg2 targetRun:(id)arg3 state:(id)arg4 ;
+(void)readSimpleFieldFrom:(xmlNode*)arg1 paragraphNamespace:(xmlNs*)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)readTrackingFrom:(xmlNode*)arg1 paragraphNamespace:(xmlNs*)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)readFrom:(xmlNode*)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)readFromString:(id)arg1 to:(id)arg2 ;
+(void)readAnnotationFrom:(xmlNode*)arg1 paragraphNamespace:(xmlNs*)arg2 to:(id)arg3 state:(id)arg4 ;
@end

