/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PBProgTag : NSObject
+(id)binaryTagDataWithName:(const unsigned short*)arg1 inProgTagsParent:(id)arg2 ;
+(void)readClientData:(id)arg1 state:(id)arg2 ;
+(void)readDocumentList:(id)arg1 state:(id)arg2 ;
+(void)readBulletStylesFromDocumentList:(id)arg1 state:(id)arg2 ;
+(void)readBulletImagesFromDocumentList:(id)arg1 state:(id)arg2 ;
+(void)readMacCharStylesFromDocumentList:(id)arg1 state:(id)arg2 ;
+(void)readHyperlinkScreenTipsFromDocumentList:(id)arg1 state:(id)arg2 ;
+(id)readBulletStyleFromClientData:(id)arg1 ;
+(id)readMacCharStyleFromClientData:(id)arg1 ;
+(id)binaryTagDataWithName:(const unsigned short*)arg1 inProgTags:(id)arg2 ;
+(id)ensureBinaryTagDataWithName:(const unsigned short*)arg1 inProgTags:(id)arg2 ;
+(const PBTextFormatProgTagInfo*)textFormatInfoForProgTagName:(const unsigned short*)arg1 ;
+(id)ensureBinaryTagDataWithName:(const unsigned short*)arg1 inProgTagsParent:(id)arg2 ;
+(void)readBulletStylesFromMainMaster:(id)arg1 state:(id)arg2 ;
+(void)readBulletImagesFromContainerParent:(id)arg1 state:(id)arg2 ;
@end

