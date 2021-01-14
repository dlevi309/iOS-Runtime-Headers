/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBCharacterProperties : NSObject
+(void)readFrom:(id)arg1 wrdProperties:(WrdCharacterProperties*)arg2 document:(id)arg3 properties:(id)arg4 ;
+(void)prepareForWriting:(id)arg1 properties:(id)arg2 wrdProperties:(WrdCharacterProperties*)arg3 tracked:(WrdCharacterProperties*)arg4 ;
+(WrdCharacterProperties*)createTrackedPropertiesIfNeeded:(id)arg1 ;
+(void)readFrom:(id)arg1 wrdProperties:(WrdCharacterProperties*)arg2 tracked:(WrdCharacterProperties*)arg3 document:(id)arg4 properties:(id)arg5 ;
+(id)formattingChangeDate:(const WrdDateTimeRef)arg1 ;
@end

