/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSArray, MSMessage, NSString, NSData;

@interface _MSConversationState : NSObject <NSSecureCoding> {

	NSUUID* _conversationIdentifier;
	NSUUID* _senderIdentifier;
	NSArray* _recipientIdentifiers;
	MSMessage* _activeMessage;
	NSString* _conversationID;
	NSData* _conversationEngramID;
	NSString* _iMessageLoginID;
	NSString* _senderAddress;
	NSArray* _recipientAddresses;
	NSArray* _draftAssetArchives;

}

@property (nonatomic,retain) NSUUID * conversationIdentifier;                                    //@synthesize conversationIdentifier=_conversationIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * senderIdentifier;                                          //@synthesize senderIdentifier=_senderIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * recipientIdentifiers;                                     //@synthesize recipientIdentifiers=_recipientIdentifiers - In the implementation block
@property (nonatomic,retain) MSMessage * activeMessage;                                          //@synthesize activeMessage=_activeMessage - In the implementation block
@property (nonatomic,retain) NSString * conversationID;                                          //@synthesize conversationID=_conversationID - In the implementation block
@property (nonatomic,retain) NSData * conversationEngramID;                                      //@synthesize conversationEngramID=_conversationEngramID - In the implementation block
@property (setter=setiMessageLoginID:,nonatomic,retain) NSString * iMessageLoginID;              //@synthesize iMessageLoginID=_iMessageLoginID - In the implementation block
@property (nonatomic,retain) NSString * senderAddress;                                           //@synthesize senderAddress=_senderAddress - In the implementation block
@property (nonatomic,retain) NSArray * recipientAddresses;                                       //@synthesize recipientAddresses=_recipientAddresses - In the implementation block
@property (nonatomic,copy) NSArray * draftAssetArchives;                                         //@synthesize draftAssetArchives=_draftAssetArchives - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)recipientAddresses;
-(NSUUID *)conversationIdentifier;
-(NSArray *)recipientIdentifiers;
-(NSUUID *)senderIdentifier;
-(void)setRecipientAddresses:(NSArray *)arg1 ;
-(void)setConversationIdentifier:(NSUUID *)arg1 ;
-(void)setSenderIdentifier:(NSUUID *)arg1 ;
-(NSString *)senderAddress;
-(void)setSenderAddress:(NSString *)arg1 ;
-(NSString *)conversationID;
-(void)setConversationID:(NSString *)arg1 ;
-(NSData *)conversationEngramID;
-(void)setConversationEngramID:(NSData *)arg1 ;
-(void)setRecipientIdentifiers:(NSArray *)arg1 ;
-(MSMessage *)activeMessage;
-(void)setActiveMessage:(MSMessage *)arg1 ;
-(NSString *)iMessageLoginID;
-(void)setiMessageLoginID:(id)arg1 ;
-(NSArray *)draftAssetArchives;
-(void)setDraftAssetArchives:(NSArray *)arg1 ;
@end

