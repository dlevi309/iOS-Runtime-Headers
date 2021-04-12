/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSDGLLayerContext.h>

@protocol TSDGLLayerContext <NSObject>
@optional
-(void)lock;
-(void)unlock;

@required
-(BOOL)isValid;
-(void)teardown;
-(BOOL)makeCurrentContext;
-(BOOL)createFramebufferFromLayer:(id)arg1;
-(void)presentRenderbuffer;

@end


@class EAGLContext, NSString;

@interface TSDGLLayerContext : NSObject <TSDGLLayerContext> {

	EAGLContext* mContext;
	unsigned mRenderbuffer;
	unsigned mFramebuffer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)isValid;
-(void)lock;
-(void)unlock;
-(void)teardown;
-(BOOL)makeCurrentContext;
-(BOOL)createFramebufferFromLayer:(id)arg1 ;
-(void)presentRenderbuffer;
@end

