/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKIDSMessageBroadcastHandling.h>

@protocol CRKCertificateExchangeBroadcastHandlerDelegate, CRKIDSPrimitives, CRKAppleIDProviding;
@interface CRKCertificateExchangeBroadcastHandler : NSObject <CRKIDSMessageBroadcastHandling> {

	id<CRKCertificateExchangeBroadcastHandlerDelegate> _delegate;
	id<CRKIDSPrimitives> _IDSPrimitives;
	id<CRKAppleIDProviding> _appleIDProvider;

}

@property (nonatomic,readonly) id<CRKIDSPrimitives> IDSPrimitives;                                            //@synthesize IDSPrimitives=_IDSPrimitives - In the implementation block
@property (nonatomic,readonly) id<CRKAppleIDProviding> appleIDProvider;                                       //@synthesize appleIDProvider=_appleIDProvider - In the implementation block
@property (assign,nonatomic,__weak) id<CRKCertificateExchangeBroadcastHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CRKCertificateExchangeBroadcastHandlerDelegate>)delegate;
-(void)setDelegate:(id<CRKCertificateExchangeBroadcastHandlerDelegate>)arg1 ;
-(id<CRKAppleIDProviding>)appleIDProvider;
-(id<CRKIDSPrimitives>)IDSPrimitives;
-(void)processMessage:(id)arg1 senderAppleID:(id)arg2 senderAddress:(id)arg3 ;
-(id)initWithIDSPrimitives:(id)arg1 appleIDProvider:(id)arg2 ;
@end

