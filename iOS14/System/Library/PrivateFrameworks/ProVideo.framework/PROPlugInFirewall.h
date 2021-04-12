/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithProtectedObject:(id)arg1 protocol:(id)arg2 secondaryProtocol:(id)arg3 errorHandler:(id)arg4 ;
-(void)deadMethod;
-(id)protectedObject;
@end

