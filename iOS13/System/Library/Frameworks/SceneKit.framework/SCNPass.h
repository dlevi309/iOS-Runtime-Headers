/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


#import <SceneKit/SceneKit-Structs.h>
@class SCNTechnique;

@interface SCNPass : NSObject {

	_C3DFXPass* _fxPass;
	SCNTechnique* _technique;

}

@property (nonatomic,copy) id initializationHandler; 
@property (nonatomic,copy) id executionHandler; 
-(void)dealloc;
-(void)invalidate;
-(id)initWithFXPass:(_C3DFXPass*)arg1 technique:(id)arg2 ;
-(void)setInitializationHandler:(id)arg1 ;
-(id)initializationHandler;
-(void)setExecutionHandler:(id)arg1 ;
-(id)executionHandler;
-(void)setValue:(id)arg1 forPassPropertyKey:(long long)arg2 ;
-(id)valueForPassPropertyKey:(long long)arg1 ;
@end

