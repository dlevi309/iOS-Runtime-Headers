/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@protocol PROPlugInFirewallErrorHandler;
@class Protocol;

@interface PROPlugInFirewall : NSObject {

	id<PROPlugInFirewallErrorHandler> errorHandler;
	id protectedObject;
	Protocol* protocol;
	Protocol* secondaryProtocol;

}
+(void)doesNotRecognizeSelector:(SEL)arg1 ;
+(id)methodSignatureForSelector:(SEL)arg1 ;
+(void)forwardInvocation:(id)arg1 ;
+(void)deadMethod;
-(void)dealloc;
-(id)description;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithProtectedObject:(id)arg1 protocol:(id)arg2 secondaryProtocol:(id)arg3 errorHandler:(id)arg4 ;
-(void)deadMethod;
-(id)protectedObject;
@end

