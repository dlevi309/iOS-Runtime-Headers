/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKDetailsContactsManagerDelegate;
@class NSArray, CKConversation, NSString, NSDictionary;

@interface CKDetailsContactsManager : NSObject {

	NSArray* _contactsViewModels;
	id<CKDetailsContactsManagerDelegate> _delegate;
	CKConversation* _conversation;
	NSString* _serviceAvailabilityKey;
	NSDictionary* _facetimeIDStatuses;
	NSDictionary* _facetimeAudioIDStatuses;
	NSDictionary* _screenSharingIDSStatuses;

}

@property (nonatomic,retain) CKConversation * conversation;                                     //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) NSString * serviceAvailabilityKey;                                 //@synthesize serviceAvailabilityKey=_serviceAvailabilityKey - In the implementation block
@property (nonatomic,retain) NSDictionary * facetimeIDStatuses;                                 //@synthesize facetimeIDStatuses=_facetimeIDStatuses - In the implementation block
@property (nonatomic,retain) NSDictionary * facetimeAudioIDStatuses;                            //@synthesize facetimeAudioIDStatuses=_facetimeAudioIDStatuses - In the implementation block
@property (nonatomic,retain) NSDictionary * screenSharingIDSStatuses;                           //@synthesize screenSharingIDSStatuses=_screenSharingIDSStatuses - In the implementation block
@property (nonatomic,copy) NSArray * contactsViewModels;                                        //@synthesize contactsViewModels=_contactsViewModels - In the implementation block
@property (nonatomic,copy,readonly) NSArray * contacts; 
@property (assign,nonatomic,__weak) id<CKDetailsContactsManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSArray *)contacts;
-(NSArray *)contactsViewModels;
-(id)conversationContextMenuConfigForEntity:(id)arg1 allowConversationRemoval:(BOOL)arg2 ;
-(void)startCommunicationForEntity:(id)arg1 action:(unsigned long long)arg2 address:(id)arg3 ;
-(id<CKDetailsContactsManagerDelegate>)delegate;
-(BOOL)isFaceTimeVideoAvailable;
-(void)setConversation:(CKConversation *)arg1 ;
-(void)sendEmail;
-(void)_callButtonPressedWithVideoEnabled:(BOOL)arg1 ;
-(void)startAudioCommunicationUsingPreferredRouteIfAvailable:(BOOL)arg1 ;
-(id)conversationContextMenuForUnknownEntity:(id)arg1 allowConversationRemoval:(BOOL)arg2 showUnknownContactActionInPopover:(BOOL)arg3 unknownContactActionHandler:(/*^block*/id)arg4 ;
-(void)_conversationJoinStateDidChange:(id)arg1 ;
-(void)setDelegate:(id<CKDetailsContactsManagerDelegate>)arg1 ;
-(CKConversation *)conversation;
-(void)_handleLocationChanged:(id)arg1 ;
-(void)_updateViewModelsWithDelay:(BOOL)arg1 ;
-(NSString *)serviceAvailabilityKey;
-(void)setServiceAvailabilityKey:(NSString *)arg1 ;
-(void)_handleConversationPendingRecipientsDidChange:(id)arg1 ;
-(void)_refreshIDSStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)_performUpdateViewModels;
-(BOOL)_showMessageButtonForEntity:(id)arg1 ;
-(BOOL)_showFaceTimeVideoButtonForEntity:(id)arg1 ;
-(BOOL)_showPhoneButtonForEntity:(id)arg1 ;
-(BOOL)showScreenSharingButtonForEntity:(id)arg1 ;
-(void)setContactsViewModels:(NSArray *)arg1 ;
-(NSDictionary *)facetimeAudioIDStatuses;
-(id)contextMenuForUnknownRecipient:(id)arg1 atom:(id)arg2 ;
-(unsigned long long)preferredCallServiceForID:(id)arg1 ;
-(BOOL)isFaceTimeAudioAvailableForEntity:(id)arg1 ;
-(void)callableAddressesForEntity:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(BOOL)hasPreferredCallServiceForEntity:(id)arg1 ;
-(void)_startMessageWithEntity:(id)arg1 ;
-(void)_startCommunicationForEntity:(id)arg1 usePreferredRouteIfAvailable:(BOOL)arg2 ;
-(void)_startFacetimeCommunicationForEntity:(id)arg1 audioOnly:(BOOL)arg2 ;
-(void)_startCallWithEntity:(id)arg1 phoneAddress:(id)arg2 ;
-(void)_shareMyScreenWithEntity:(id)arg1 ;
-(void)_inviteEntityToShareTheirScreen:(id)arg1 ;
-(BOOL)_hasLinkedTelephoneNumbersForEntity:(id)arg1 ;
-(NSDictionary *)facetimeIDStatuses;
-(long long)_facetimeAudioIDStatusForEntity:(id)arg1 ;
-(long long)_facetimeIDStatusForEntity:(id)arg1 ;
-(long long)_screenSharingStatusForEntity:(id)arg1 ;
-(NSDictionary *)screenSharingIDSStatuses;
-(void)setFacetimeIDStatuses:(NSDictionary *)arg1 ;
-(void)setFacetimeAudioIDStatuses:(NSDictionary *)arg1 ;
-(void)setScreenSharingIDSStatuses:(NSDictionary *)arg1 ;
-(BOOL)_preferredRoutesDisabledViaServerBag;
-(id)_preferredCallServiceToIDMap;
-(void)_setPreferredCallServiceToIDMap:(id)arg1 ;
-(BOOL)_conversationHasLeft;
-(void)beginFacetimeCallWithVideo:(BOOL)arg1 ;
-(void)setPreferredCallService:(unsigned long long)arg1 forID:(id)arg2 ;
-(void)_handleConversationRecipientsDidChange:(id)arg1 ;
-(void)startCommunicationForEntity:(id)arg1 action:(unsigned long long)arg2 address:(id)arg3 usePreferredRouteIfAvailable:(BOOL)arg4 ;
-(BOOL)isGroupFaceTimeSupported;
-(id)callMenuForEntity:(id)arg1 ;
-(BOOL)isTelephonyAvailable;
-(void)_handleAddressBookChange:(id)arg1 ;
-(id)initWithConversation:(id)arg1 delegate:(id)arg2 ;
-(id)conversationContextMenuForEntity:(id)arg1 allowConversationRemoval:(BOOL)arg2 ;
-(BOOL)shouldAlwaysShowCallMenuForEntity:(id)arg1 ;
-(id)contextMenuForEntity:(id)arg1 atom:(id)arg2 ;
-(BOOL)isFaceTimeAudioAvailable;
-(void)dealloc;
@end

