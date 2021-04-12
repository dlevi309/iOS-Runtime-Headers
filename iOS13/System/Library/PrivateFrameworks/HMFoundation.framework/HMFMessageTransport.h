/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>

@protocol HMFMessageTransportDelegate;
@interface HMFMessageTransport : HMFObject {

	id<HMFMessageTransportDelegate> _delegate;

}

@property (__weak) id<HMFMessageTransportDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<HMFMessageTransportDelegate>)delegate;
-(void)setDelegate:(id<HMFMessageTransportDelegate>)arg1 ;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

