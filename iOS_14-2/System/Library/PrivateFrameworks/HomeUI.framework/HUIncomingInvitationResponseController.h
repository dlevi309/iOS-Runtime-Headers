/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HUIncomingInvitationResponseControllerDelegate;
@class HMIncomingHomeInvitation, NSError;

@interface HUIncomingInvitationResponseController : NSObject {

	id<HUIncomingInvitationResponseControllerDelegate> _delegate;
	HMIncomingHomeInvitation* _invitation;
	unsigned long long _state;
	unsigned long long _response;
	NSError* _error;

}

@property (assign,nonatomic) unsigned long long state;                                                          //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long response;                                                       //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSError * error;                                                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,__weak,readonly) id<HUIncomingInvitationResponseControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HMIncomingHomeInvitation * invitation;                                           //@synthesize invitation=_invitation - In the implementation block
-(id)init;
-(id<HUIncomingInvitationResponseControllerDelegate>)delegate;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(unsigned long long)response;
-(void)setResponse:(unsigned long long)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(HMIncomingHomeInvitation *)invitation;
-(id)initWithDelegate:(id)arg1 invitation:(id)arg2 ;
-(id)_acceptInvitation;
-(id)_declineInvitation;
-(void)respondToInvitationWithResponse:(unsigned long long)arg1 ;
@end

