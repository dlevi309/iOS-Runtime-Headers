/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUGLObject.h>

@class NSMutableDictionary;

@interface NUGLFramebuffer : NUGLObject {

	NSMutableDictionary* _attachments;

}
-(id)init;
-(void)delete;
-(void)removeAllAttachments;
-(void)generate:(id)arg1 ;
-(void)read:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)write:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)attach:(id)arg1 to:(unsigned)arg2 ;
-(void)detach:(id)arg1 from:(unsigned)arg2 ;
-(void)useWithTarget:(unsigned)arg1 context:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)bind:(unsigned)arg1 context:(id)arg2 ;
-(void)unbind:(unsigned)arg1 context:(id)arg2 ;
@end

