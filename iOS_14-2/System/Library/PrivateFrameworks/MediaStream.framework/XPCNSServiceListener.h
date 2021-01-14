/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
*/

#import <libobjc.A.dylib/XPCServiceListenerDelegate.h>

@protocol XPCNSServiceListenerDelegate;
@class XPCServiceListener, NSString;

@interface XPCNSServiceListener : NSObject <XPCServiceListenerDelegate> {

	XPCServiceListener* _serviceListener;
	id<XPCNSServiceListenerDelegate> _delegate;

}

@property (nonatomic,retain,readonly) NSString * serviceName; 
@property (nonatomic,readonly) id<XPCNSServiceListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<XPCNSServiceListenerDelegate>)delegate;
-(void)start;
-(id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3 ;
-(NSString *)serviceName;
-(void)shutDownCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)XPCServiceListener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)XPCServiceListener:(id)arg1 didReceiveNewConnection:(id)arg2 ;
@end

