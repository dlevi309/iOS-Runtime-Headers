/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/EQKitMathMLBinaryNode.h>
#import <libobjc.A.dylib/EQKitLayoutSchemataUnderover.h>

@class NSString;

@interface EQKitMathMLMUnder : EQKitMathMLBinaryNode <EQKitLayoutSchemataUnderover>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Schemata*)layoutSchemata;
-(BOOL)isEmbellishedOperator;
-(id)operatorCore;
-(id)schemataBase;
-(id)schemataUnder;
-(id)schemataOver;
-(id)initFromXMLNode:(xmlNode*)arg1 parser:(id)arg2 ;
-(const set<EQKitTypes::Attributes::Enum, std::__1::less<EQKitTypes::Attributes::Enum>, std::__1::allocator<EQKitTypes::Attributes::Enum> >*)mathMLAttributes;
@end

