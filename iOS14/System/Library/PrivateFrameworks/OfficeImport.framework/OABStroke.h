/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OABStroke : NSObject
+(id)readStrokeFromShapeBaseManager:(id)arg1 state:(id)arg2 ;
+(int)writeCompoundType:(unsigned char)arg1 ;
+(int)writePresetDashStyle:(char)arg1 ;
+(int)writeLineEndType:(unsigned char)arg1 ;
+(int)writeLineEndWidth:(unsigned char)arg1 ;
+(int)writeLineEndLength:(unsigned char)arg1 ;
+(int)writeCapStyle:(unsigned char)arg1 ;
+(void)writePresetDashStyleForCustomDash:(id)arg1 toStroke:(EshStroke*)arg2 state:(id)arg3 ;
+(id)readLineEndWithType:(int)arg1 width:(int)arg2 length:(int)arg3 ;
+(unsigned char)readCapStyle:(int)arg1 ;
+(unsigned char)readCompoundType:(int)arg1 ;
+(unsigned char)readLineEndType:(int)arg1 ;
+(unsigned char)readLineEndWidth:(int)arg1 ;
+(unsigned char)readLineEndLength:(int)arg1 ;
+(char)readPresetDashStyle:(int)arg1 ;
@end

