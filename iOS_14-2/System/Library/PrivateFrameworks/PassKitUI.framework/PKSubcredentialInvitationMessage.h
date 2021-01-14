/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@class PKProtobufSubcredentialInvitationMessage, MSMessage, PKAppletSubcredentialSharingInvitation, NSString;

@interface PKSubcredentialInvitationMessage : NSObject {

	PKProtobufSubcredentialInvitationMessage* _protoMessage;
	MSMessage* _underlyingMessage;

}

@property (nonatomic,readonly) MSMessage * underlyingMessage;                                     //@synthesize underlyingMessage=_underlyingMessage - In the implementation block
@property (nonatomic,copy) PKAppletSubcredentialSharingInvitation * phoneInvitation; 
@property (nonatomic,copy) PKAppletSubcredentialSharingInvitation * watchInvitation; 
@property (nonatomic,copy) NSString * dataString; 
@property (assign,nonatomic) unsigned long long status; 
@property (nonatomic,copy) NSString * uniqueIdentifier; 
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(id)init;
-(NSString *)uniqueIdentifier;
-(id)_subcredentialInvitationMessageDataWithDataURL:(id)arg1 ;
-(id)_subcredentialInvitationMessageDataURLWithData:(id)arg1 ;
-(id)description;
-(void)setStatus:(unsigned long long)arg1 ;
-(void)_updateDataURL;
-(NSString *)dataString;
-(void)setPhoneInvitation:(PKAppletSubcredentialSharingInvitation *)arg1 ;
-(void)setDataString:(NSString *)arg1 ;
-(void)setWatchInvitation:(PKAppletSubcredentialSharingInvitation *)arg1 ;
-(PKAppletSubcredentialSharingInvitation *)phoneInvitation;
-(PKAppletSubcredentialSharingInvitation *)watchInvitation;
-(unsigned long long)status;
-(id)initWithUnderlyingMessage:(id)arg1 ;
-(void)_updateLayoutContents;
-(MSMessage *)underlyingMessage;
@end

