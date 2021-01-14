/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

@class SCNProgram, NSDictionary;


@protocol SCNShadable <NSObject>
@property (nonatomic,retain) SCNProgram * program; 
@property (nonatomic,copy) NSDictionary * shaderModifiers; 
@optional
-(void)setProgram:(id)arg1;
-(SCNProgram *)program;
-(NSDictionary *)shaderModifiers;
-(void)setShaderModifiers:(id)arg1;
-(void)handleBindingOfSymbol:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(/*^block*/id)arg2;

@end

