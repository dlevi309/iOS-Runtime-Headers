/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <CoreSuggestionsInternals/SGMessage.h>

@class CSPerson, NSArray, NSString;

@interface SGTextMessage : SGMessage {

	BOOL _senderIsAccountOwner;
	BOOL _senderIsBusinessChat;
	CSPerson* _sender;
	NSArray* _recipients;
	NSString* _conversationIdentifier;
	NSString* _nickname;
	NSString* _photoPath;
	NSString* _attachmentFilename;

}

@property (retain) CSPerson * sender;                              //@synthesize sender=_sender - In the implementation block
@property (retain) NSArray * recipients;                           //@synthesize recipients=_recipients - In the implementation block
@property (retain) NSString * conversationIdentifier;              //@synthesize conversationIdentifier=_conversationIdentifier - In the implementation block
@property (retain) NSString * nickname;                            //@synthesize nickname=_nickname - In the implementation block
@property (retain) NSString * photoPath;                           //@synthesize photoPath=_photoPath - In the implementation block
@property (readonly) BOOL senderIsAccountOwner;                    //@synthesize senderIsAccountOwner=_senderIsAccountOwner - In the implementation block
@property (readonly) BOOL senderIsBusinessChat;                    //@synthesize senderIsBusinessChat=_senderIsBusinessChat - In the implementation block
@property (readonly) NSString * attachmentFilename;                //@synthesize attachmentFilename=_attachmentFilename - In the implementation block
+(BOOL)isSent:(id)arg1 ;
+(id)_nicknameCustomKey;
+(id)_photoPathCustomKey;
-(NSArray *)recipients;
-(CSPerson *)sender;
-(id)author;
-(void)setSender:(CSPerson *)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSString *)photoPath;
-(void)setConversationIdentifier:(NSString *)arg1 ;
-(NSString *)nickname;
-(NSString *)conversationIdentifier;
-(id)initWithDictionary:(id)arg1 ;
-(void)setPhotoPath:(NSString *)arg1 ;
-(NSString *)attachmentFilename;
-(id)initWithSearchableItem:(id)arg1 ;
-(void)setNickname:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)spotlightBundleIdentifier;
-(id)spotlightDomainIdentifier;
-(BOOL)senderIsAccountOwner;
-(BOOL)senderIsBusinessChat;
@end

