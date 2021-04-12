/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServices/AMSURLProtocolHandler.h>

@protocol AMSUIWebProtocolDelegate;
@interface AMSUIWebProtocolHandler : AMSURLProtocolHandler {

	id<AMSUIWebProtocolDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AMSUIWebProtocolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<AMSUIWebProtocolDelegate>)delegate;
-(void)setDelegate:(id<AMSUIWebProtocolDelegate>)arg1 ;
-(void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(BOOL)arg3 error:(id*)arg4 ;
@end

