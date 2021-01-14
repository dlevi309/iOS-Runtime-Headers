/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OABTextBodyProperties : NSObject
+(void)readTextBodyProperties:(id)arg1 textBox:(const EshTextBox*)arg2 useDefaults:(BOOL)arg3 state:(id)arg4 ;
+(void)setTextRotation:(int)arg1 textBodyProperties:(id)arg2 ;
+(void)setTextFlow:(int)arg1 textBodyProperties:(id)arg2 ;
+(void)setTextDirection:(int)arg1 textBodyProperties:(id)arg2 ;
+(void)setAutoFit:(BOOL)arg1 textBodyProperties:(id)arg2 ;
+(void)setWrap:(int)arg1 textBodyProperties:(id)arg2 ;
+(void)setTextAnchor:(int)arg1 textBodyProperties:(id)arg2 ;
+(void)setIsAnchorCenter:(int)arg1 textBodyProperties:(id)arg2 ;
+(void)writeTextBodyProperties:(id)arg1 toShapeBase:(EshShapeBase*)arg2 state:(id)arg3 ;
@end

