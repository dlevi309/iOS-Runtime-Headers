/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/EQKitLayoutNode.h>

@protocol EQKitLayoutNode;
@class NSString;

@interface EQKitMathMLNode : NSObject <EQKitLayoutNode> {

	id<EQKitLayoutNode> mParent;

}

@property (assign,nonatomic) id<EQKitLayoutNode> parent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<EQKitLayoutNode>)parent;
-(void)setParent:(id<EQKitLayoutNode>)arg1 ;
-(BOOL)isNumber;
-(BOOL)isBaseFontNameUsed;
-(int)isOperatorPaddingRequired;
-(Schemata*)layoutSchemata;
-(BOOL)isSpaceLike;
-(id)layoutStyleNode;
-(BOOL)isEmbellishedOperator;
-(id)operatorCore;
-(BOOL)isAttributeDefaultInheritableFromStyle:(int)arg1 ;
-(long long)scriptLevelWithBase:(long long)arg1 ;
@end

