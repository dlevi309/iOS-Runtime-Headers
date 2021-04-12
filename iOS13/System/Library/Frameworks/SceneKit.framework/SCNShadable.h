/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

@class SCNProgram, NSDictionary;


@protocol SCNShadable <NSObject>
@property (nonatomic,retain) SCNProgram * program; 
@property (nonatomic,copy) NSDictionary * shaderModifiers; 
@optional
-(SCNProgram *)program;
-(void)setProgram:(id)arg1;
-(NSDictionary *)shaderModifiers;
-(void)handleBindingOfSymbol:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(void)setShaderModifiers:(id)arg1;
-(void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(/*^block*/id)arg2;

@end

