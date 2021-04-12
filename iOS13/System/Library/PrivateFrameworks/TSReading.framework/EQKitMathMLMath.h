/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/EQKitMathMLNode.h>
#import <libobjc.A.dylib/EQKitRootNode.h>
#import <libobjc.A.dylib/EQKitExpression.h>

@class EQKitMathMLNode, EQKitEnvironmentInstance, NSString;

@interface EQKitMathMLMath : NSObject <EQKitMathMLNode, EQKitRootNode, EQKitExpression> {

	EQKitMathMLNode* mExpression;
	AttributeCollection* mAttributeCollection;
	EQKitEnvironmentInstance* mEnvironment;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<EQKitLayoutNode> parent; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id<EQKitLayoutNode>)parent;
-(BOOL)isNumber;
-(id)newLayout;
-(BOOL)isBaseFontNameUsed;
-(AttributeCollectionRef)attributeCollection;
-(int)isOperatorPaddingRequired;
-(Schemata*)layoutSchemata;
-(BOOL)isSpaceLike;
-(id)layoutStyleNode;
-(BOOL)isEmbellishedOperator;
-(id)operatorCore;
-(BOOL)isAttributeDefaultInheritableFromStyle:(int)arg1 ;
-(id)initFromXMLNode:(xmlNode*)arg1 parser:(id)arg2 ;
-(const set<EQKitTypes::Attributes::Enum, std::__1::less<EQKitTypes::Attributes::Enum>, std::__1::allocator<EQKitTypes::Attributes::Enum> >*)mathMLAttributes;
-(long long)scriptLevelWithBase:(long long)arg1 ;
@end

