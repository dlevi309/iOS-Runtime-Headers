/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/EQKitMathMLUnaryNode.h>
#import <libobjc.A.dylib/EQKitMathMLNode.h>
#import <libobjc.A.dylib/EQKitLayoutSchemataPhantom.h>

@class NSString;

@interface EQKitMathMLMPhantom : EQKitMathMLUnaryNode <EQKitMathMLNode, EQKitLayoutSchemataPhantom>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(Schemata*)layoutSchemata;
-(BOOL)isEmbellishedOperator;
-(id)operatorCore;
-(id)schemataChild;
@end

