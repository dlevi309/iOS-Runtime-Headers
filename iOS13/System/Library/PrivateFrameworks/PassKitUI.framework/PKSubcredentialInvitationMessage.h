/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@class PKProtobufSubcredentialInvitationMessage, MSMessage, PKAppletSubcredentialSharingInvitation, NSString;

@interface PKSubcredentialInvitationMessage : NSObject {

	PKProtobufSubcredentialInvitationMessage* _protoMessage;
	MSMessage* _underlyingMessage;

}

@property (nonatomic,readonly) MSMessage * underlyingMessage;                                //@synthesize underlyingMessage=_underlyingMessage - In the implementation block
@property (nonatomic,copy) PKAppletSubcredentialSharingInvitation * invitation; 
@property (nonatomic,copy) NSString * dataString; 
@property (assign,nonatomic) unsigned long long status; 
-(id)init;
-(id)description;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
-(PKAppletSubcredentialSharingInvitation *)invitation;
-(void)setInvitation:(PKAppletSubcredentialSharingInvitation *)arg1 ;
-(void)setDataString:(NSString *)arg1 ;
-(NSString *)dataString;
-(id)initWithUnderlyingMessage:(id)arg1 ;
-(void)_updateDataURL;
-(void)_updateLayoutContents;
-(MSMessage *)underlyingMessage;
-(id)_subcredentialInvitationMessageDataWithDataURL:(id)arg1 ;
-(id)_subcredentialInvitationMessageDataURLWithData:(id)arg1 ;
@end

