/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OAXClient.h>

@interface WXOfficeArtClient : OAXClient
-(void)readClientDataFromNode:(xmlNode*)arg1 toDrawable:(id)arg2 state:(id)arg3 ;
-(xmlNode*)genericNonVisualPropertiesNodeForDrawableNode:(xmlNode*)arg1 inNamespace:(id)arg2 state:(id)arg3 ;
-(id)readClientDrawableFromXmlNode:(xmlNode*)arg1 state:(id)arg2 ;
-(void)readBlipExtWithURI:(id)arg1 fromNode:(xmlNode*)arg2 toDrawable:(id)arg3 state:(id)arg4 ;
-(id)readGraphicData:(xmlNode*)arg1 state:(id)arg2 ;
@end

