/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


#import <SceneKit/SceneKit-Structs.h>
@class MTLRenderPassDescriptor;

@interface SCNRendererViewPoint : NSObject {

	MTLRenderPassDescriptor* _passDescriptor;
	SCD_Struct_SC102 _viewport;
	SCNMatrix4 viewMatrix;
	SCNMatrix4 projectionMatrix;

}

@property (assign,nonatomic) SCNMatrix4 viewMatrix; 
@property (assign,nonatomic) SCNMatrix4 projectionMatrix; 
@property (nonatomic,retain) MTLRenderPassDescriptor * passDescriptor; 
@property (assign,nonatomic) SCD_Struct_SC102 viewport; 
-(SCD_Struct_SC102)viewport;
-(void)setViewport:(SCD_Struct_SC102)arg1 ;
-(void)dealloc;
-(SCNMatrix4)projectionMatrix;
-(void)setProjectionMatrix:(SCNMatrix4)arg1 ;
-(SCNMatrix4)viewMatrix;
-(MTLRenderPassDescriptor *)passDescriptor;
-(void)setPassDescriptor:(MTLRenderPassDescriptor *)arg1 ;
-(void)setViewMatrix:(SCNMatrix4)arg1 ;
@end

