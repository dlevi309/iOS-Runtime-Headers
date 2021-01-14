/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXTextParaPropertyBag : NSObject
+(void)readParagraphProperties:(xmlNode*)arg1 paragraphProperties:(id)arg2 drawingState:(id)arg3 ;
+(void)readAlign:(id)arg1 paragraphProperties:(id)arg2 ;
+(void)readFontAlign:(id)arg1 paragraphProperties:(id)arg2 ;
+(id)readSpacing:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(void)readTabList:(xmlNode*)arg1 paragraphProperties:(id)arg2 drawingState:(id)arg3 ;
+(int)readBulletScheme:(id)arg1 ;
@end

