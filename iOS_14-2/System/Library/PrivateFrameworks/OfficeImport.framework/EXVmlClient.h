/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/OAVReadClient.h>

@interface EXVmlClient : NSObject <OAVReadClient>
+(void)readClientDataFromShape:(xmlNode*)arg1 toGraphic:(id)arg2 state:(id)arg3 ;
+(void)readClientDataFromGroup:(xmlNode*)arg1 toGroup:(id)arg2 state:(id)arg3 ;
+(int)vmlSupportLevel;
+(void)readAnchor:(xmlNode*)arg1 to:(id)arg2 ;
+(id)readComment:(xmlNode*)arg1 to:(id)arg2 state:(id)arg3 ;
+(id)edTextBoxForVmlTextInShape:(xmlNode*)arg1 to:(id)arg2 state:(id)arg3 ;
@end

