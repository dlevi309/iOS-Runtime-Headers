/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAVDrawable : NSObject
+(id)readDrawableFromNode:(xmlNode*)arg1 inNamespace:(id)arg2 state:(id)arg3 ;
+(xmlDoc*)vmlDocumentFromPart:(id)arg1 ;
+(id)readDrawablesFromParent:(xmlNode*)arg1 inNamespace:(id)arg2 state:(id)arg3 ;
+(void)readFromDrawable:(xmlNode*)arg1 toDrawable:(id)arg2 state:(id)arg3 ;
+(CGRect)readCoordBounds:(xmlNode*)arg1 ;
@end

