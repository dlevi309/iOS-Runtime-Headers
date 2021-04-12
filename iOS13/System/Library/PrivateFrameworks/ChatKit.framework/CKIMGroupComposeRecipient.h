/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ContactsAutocompleteUI/CNComposeRecipientGroup.h>
#import <libobjc.A.dylib/CKIMComposeRecipient.h>

@class NSString, NSArray, NSDate, CKIMComposeRecipient;

@interface CKIMGroupComposeRecipient : CNComposeRecipientGroup <CKIMComposeRecipient> {

	NSString* _conversationGUID;
	NSArray* _composeRecipients;
	NSArray* _handles;
	NSDate* _lastMessageDate;
	CKIMComposeRecipient* _matchingRecipient;
	NSString* _detailsString;

}

@property (nonatomic,retain) NSString * conversationGUID;                           //@synthesize conversationGUID=_conversationGUID - In the implementation block
@property (nonatomic,retain) NSArray * handles;                                     //@synthesize handles=_handles - In the implementation block
@property (nonatomic,retain) NSString * detailsString;                              //@synthesize detailsString=_detailsString - In the implementation block
@property (nonatomic,retain) NSDate * lastMessageDate;                              //@synthesize lastMessageDate=_lastMessageDate - In the implementation block
@property (nonatomic,retain) CKIMComposeRecipient * matchingRecipient;              //@synthesize matchingRecipient=_matchingRecipient - In the implementation block
@property (nonatomic,readonly) NSArray * composeRecipients;                         //@synthesize composeRecipients=_composeRecipients - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)composeRecipientWithConversation:(id)arg1 searchTerm:(id)arg2 matchingRecipient:(id)arg3 ;
-(void)dealloc;
-(id)address;
-(NSArray *)handles;
-(void)setHandles:(NSArray *)arg1 ;
-(id)compositeName;
-(BOOL)isRemovableFromSearchResults;
-(NSString *)conversationGUID;
-(void)releaseIMReferences;
-(NSDate *)lastMessageDate;
-(id)initWithGUID:(id)arg1 displayString:(id)arg2 detailsString:(id)arg3 handles:(id)arg4 lastMessageDate:(id)arg5 searchTerm:(id)arg6 matchingRecipient:(id)arg7 ;
-(void)setConversationGUID:(NSString *)arg1 ;
-(void)setDetailsString:(NSString *)arg1 ;
-(void)setLastMessageDate:(NSDate *)arg1 ;
-(void)setMatchingRecipient:(CKIMComposeRecipient *)arg1 ;
-(NSArray *)composeRecipients;
-(CKIMComposeRecipient *)matchingRecipient;
-(NSString *)detailsString;
@end

