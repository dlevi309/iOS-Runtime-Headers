/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/EQKitMathMLTernaryNode.h>
#import <libobjc.A.dylib/EQKitLayoutSchemataSubsuperscript.h>

@class NSString;

@interface EQKitMathMLMSubsuperscript : EQKitMathMLTernaryNode <EQKitLayoutSchemataSubsuperscript>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Schemata*)layoutSchemata;
-(BOOL)isEmbellishedOperator;
-(id)operatorCore;
-(id)schemataKernel;
-(id)schemataSubscript;
-(id)schemataSuperscript;
@end

