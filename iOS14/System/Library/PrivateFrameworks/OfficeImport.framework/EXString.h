/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXString : NSObject
+(id)readStringWithAsciiCodeFromXmlStringElement:(xmlNode*)arg1 ;
+(void)buildEDString:(id)arg1 fromNode:(xmlNode*)arg2 edFont:(id)arg3 keepWhitespace:(BOOL)arg4 state:(id)arg5 ;
+(void)parseStringWithAsciiCode:(id)arg1 ;
+(id)edTextFromXmlStringElement:(xmlNode*)arg1 state:(id)arg2 ;
+(id)edStringWithRunsFromXmlStringElement:(xmlNode*)arg1 state:(id)arg2 ;
+(id)edStringWithRunsFromXmlDivElement:(xmlNode*)arg1 state:(id)arg2 ;
+(void)replaceEscapeAsciiCodes:(id)arg1 ;
+(void)buildEDString:(id)arg1 fromText:(id)arg2 edFont:(id)arg3 keepWhitespace:(BOOL)arg4 state:(id)arg5 ;
+(void)buildEDString:(id)arg1 fromChildrenOfNode:(xmlNode*)arg2 edFont:(id)arg3 keepWhitespace:(BOOL)arg4 state:(id)arg5 ;
+(id)cleanupWhitespace:(id)arg1 ;
+(id)stringInEDString:(id)arg1 start:(unsigned long long)arg2 end:(unsigned long long)arg3 ;
+(id)stringInEDString:(id)arg1 forRunIndex:(unsigned)arg2 ;
@end

