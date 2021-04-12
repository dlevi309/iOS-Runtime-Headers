/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

