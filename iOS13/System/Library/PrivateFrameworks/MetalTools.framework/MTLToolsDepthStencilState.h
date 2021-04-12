/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLDepthStencilStateSPI.h>

@class NSString;

@interface MTLToolsDepthStencilState : MTLToolsObject <MTLDepthStencilStateSPI>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) BOOL readsDepth; 
@property (readonly) BOOL writesDepth; 
@property (readonly) BOOL readsStencil; 
@property (readonly) BOOL writesStencil; 
-(void)dealloc;
-(id<MTLDevice>)device;
-(NSString *)label;
-(BOOL)readsDepth;
-(BOOL)writesDepth;
-(BOOL)readsStencil;
-(BOOL)writesStencil;
-(void)acceptVisitor:(id)arg1 ;
@end

