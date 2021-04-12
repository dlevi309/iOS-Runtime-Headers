/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLDepthStencilStateSPI.h>

@class NSString;

@interface MTLToolsDepthStencilState : MTLToolsObject <MTLDepthStencilStateSPI>

@property (readonly) BOOL readsDepth; 
@property (readonly) BOOL writesDepth; 
@property (readonly) BOOL readsStencil; 
@property (readonly) BOOL writesStencil; 
@property (readonly) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MTLDevice>)device;
-(BOOL)readsDepth;
-(BOOL)writesDepth;
-(BOOL)readsStencil;
-(BOOL)writesStencil;
-(NSString *)label;
@end

