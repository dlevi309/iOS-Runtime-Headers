/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLSamplerState.h>
#import <libobjc.A.dylib/MTLSamplerStateSPI.h>

@class NSString;

@interface MTLToolsSamplerState : MTLToolsObject <MTLSamplerState, MTLSamplerStateSPI>

@property (readonly) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long pixelFormat; 
@property (nonatomic,readonly) unsigned long long resourceIndex; 
@property (nonatomic,readonly) unsigned long long gpuAddress; 
@property (readonly) unsigned long long uniqueIdentifier; 
-(unsigned long long)resourceIndex;
-(unsigned long long)pixelFormat;
-(unsigned long long)uniqueIdentifier;
-(id<MTLDevice>)device;
-(unsigned long long)gpuAddress;
-(NSString *)label;
@end

