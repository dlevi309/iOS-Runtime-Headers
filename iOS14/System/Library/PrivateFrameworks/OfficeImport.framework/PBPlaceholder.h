/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PBPlaceholder : NSObject
+(int)placeholderTypeFromTextType:(int)arg1 ;
+(int)readPlaceholderType:(int)arg1 ;
+(int)readPlaceholderSize:(int)arg1 ;
+(int)readPlaceholderOrientation:(int)arg1 ;
+(BOOL)isBodyPlaceholder:(int)arg1 ;
+(BOOL)isTitlePlaceholder:(int)arg1 ;
+(void)writePlaceholder:(id)arg1 toPlaceholderAtom:(PptOEPlaceholderAtom*)arg2 isMaster:(BOOL)arg3 isNotes:(BOOL)arg4 ;
@end

