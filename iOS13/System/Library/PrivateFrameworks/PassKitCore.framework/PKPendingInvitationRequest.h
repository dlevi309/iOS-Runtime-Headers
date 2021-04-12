/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class PKAppletSubcredentialSharingInvitation;

@interface PKPendingInvitationRequest : NSObject {

	/*^block*/id _completion;
	PKAppletSubcredentialSharingInvitation* _invitation;

}

@property (nonatomic,readonly) PKAppletSubcredentialSharingInvitation * invitation;              //@synthesize invitation=_invitation - In the implementation block
-(PKAppletSubcredentialSharingInvitation *)invitation;
-(id)initWithInvitation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invokeCompletionWithInvitation:(id)arg1 error:(id)arg2 ;
@end

