/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <Sharing/SFMessage.h>

@interface SFRequestMessage : SFMessage {

	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) id responseHandler;              //@synthesize responseHandler=_responseHandler - In the implementation block
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(void)invalidate;
@end

