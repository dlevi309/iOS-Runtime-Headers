/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VSJSMessagePort.h>

@protocol VSJSMessagePort <JSExport>
@required
-(void)postMessage:(id)arg1;

@end


@protocol VSJSMessagePortDelegate;
@interface VSJSMessagePort : IKJSObject <VSJSMessagePort> {

	id<VSJSMessagePortDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<VSJSMessagePortDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<VSJSMessagePortDelegate>)delegate;
-(void)setDelegate:(id<VSJSMessagePortDelegate>)arg1 ;
-(void)postMessage:(id)arg1 ;
@end

