/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

