/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)invalidate;
-(void)dealloc;
-(void)setExecutionHandler:(id)arg1 ;
-(void)setValue:(id)arg1 forPassPropertyKey:(long long)arg2 ;
-(id)initWithFXPass:(_C3DFXPass*)arg1 technique:(id)arg2 ;
-(void)setInitializationHandler:(id)arg1 ;
-(id)initializationHandler;
-(id)executionHandler;
-(id)valueForPassPropertyKey:(long long)arg1 ;
@end

