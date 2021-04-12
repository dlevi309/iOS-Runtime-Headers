/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/EQKitMathMLNode.h>
#import <libobjc.A.dylib/EQKitMathMLNode.h>
#import <libobjc.A.dylib/EQKitLayoutNode.h>
#import <libobjc.A.dylib/EQKitLayoutSchemataFenced.h>

@class NSArray, NSString;

@interface EQKitMathMLMFenced : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutNode, EQKitLayoutSchemataFenced> {

	NSArray* mChildren;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<EQKitLayoutNode> parent; 
-(id)init;
-(void)dealloc;
-(id)initWithChildren:(id)arg1 ;
-(BOOL)isBaseFontNameUsed;
-(int)isOperatorPaddingRequired;
-(Schemata*)layoutSchemata;
-(id)schemataChildren;
-(id)initFromXMLNode:(xmlNode*)arg1 parser:(id)arg2 ;
-(const set<EQKitTypes::Attributes::Enum, std::__1::less<EQKitTypes::Attributes::Enum>, std::__1::allocator<EQKitTypes::Attributes::Enum> >*)mathMLAttributes;
-(id)initWithChildren:(id)arg1 node:(xmlNode*)arg2 ;
@end

