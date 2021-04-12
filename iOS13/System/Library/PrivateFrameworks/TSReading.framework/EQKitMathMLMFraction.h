/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/EQKitMathMLBinaryNode.h>
#import <libobjc.A.dylib/EQKitLayoutSchemataFraction.h>

@class NSString;

@interface EQKitMathMLMFraction : EQKitMathMLBinaryNode <EQKitLayoutSchemataFraction>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Schemata*)layoutSchemata;
-(BOOL)isEmbellishedOperator;
-(id)operatorCore;
-(id)schemataNumerator;
-(id)schemataDenominator;
-(id)initFromXMLNode:(xmlNode*)arg1 parser:(id)arg2 ;
-(const set<EQKitTypes::Attributes::Enum, std::__1::less<EQKitTypes::Attributes::Enum>, std::__1::allocator<EQKitTypes::Attributes::Enum> >*)mathMLAttributes;
@end

