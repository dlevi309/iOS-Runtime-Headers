/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/OAVReadClient.h>

@interface WXVmlReadClient : NSObject <OAVReadClient>
+(void)initialize;
+(void)readClientDataFromShape:(xmlNode*)arg1 toGraphic:(id)arg2 state:(id)arg3 ;
+(void)readClientDataFromGroup:(xmlNode*)arg1 toGroup:(id)arg2 state:(id)arg3 ;
+(int)vmlSupportLevel;
+(BOOL)floating:(id)arg1 ;
+(int)horizontalPosition:(id)arg1 ;
+(int)relativeHorizontalPosition:(id)arg1 ;
+(int)verticalPosition:(id)arg1 ;
+(int)relativeVerticalPosition:(id)arg1 ;
+(double)wrapDistanceLeft:(id)arg1 ;
+(double)wrapDistanceTop:(id)arg1 ;
+(double)wrapDistanceRight:(id)arg1 ;
+(double)wrapDistanceBottom:(id)arg1 ;
+(int)zIndex:(id)arg1 ;
+(void)readTextWrappingFromParent:(xmlNode*)arg1 toAnchor:(id)arg2 ;
+(void)readFromDrawable:(xmlNode*)arg1 toContent:(id)arg2 ;
+(void)copyFromDrawable:(id)arg1 toContent:(id)arg2 ;
@end

