/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol EQKitLayoutNode <NSObject>
@property (nonatomic,readonly) id<EQKitLayoutNode> parent; 
@required
-(id<EQKitLayoutNode>)parent;
-(BOOL)isNumber;
-(BOOL)isBaseFontNameUsed;
-(int)isOperatorPaddingRequired;
-(Schemata*)layoutSchemata;
-(BOOL)isSpaceLike;
-(id)layoutStyleNode;
-(BOOL)isEmbellishedOperator;
-(id)operatorCore;
-(BOOL)isAttributeDefaultInheritableFromStyle:(int)arg1;

@end

