/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXTextCharPropertyBag : NSObject
+(void)readCharacterProperties:(xmlNode*)arg1 characterProperties:(id)arg2 drawingState:(id)arg3 ;
+(unsigned char)readUnderlineType:(id)arg1 ;
+(void)readFormatting:(xmlNode*)arg1 characterProperties:(id)arg2 drawingState:(id)arg3 ;
+(void)readFont:(xmlNode*)arg1 characterProperties:(id)arg2 ;
+(id)oaxUnderlineMap;
+(id)stringWithCapsType:(unsigned char)arg1 ;
+(id)stringWithStrikeThroughType:(unsigned char)arg1 ;
+(id)stringWithUnderlineType:(unsigned char)arg1 ;
@end

