/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBParagraphProperties : NSObject
+(WrdParagraphProperties*)createTrackedPropertiesIfNeeded:(id)arg1 ;
+(void)readFrom:(id)arg1 wrdProperties:(WrdParagraphProperties*)arg2 tracked:(WrdParagraphProperties*)arg3 document:(id)arg4 properties:(id)arg5 ;
+(void)mapWordProperties:(WrdParagraphProperties*)arg1 reader:(id)arg2 toProperties:(id)arg3 ;
+(id)formattingChangeDate:(const WrdDateTime*)arg1 ;
@end

