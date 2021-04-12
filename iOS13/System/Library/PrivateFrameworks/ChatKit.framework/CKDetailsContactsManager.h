/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (nonatomic,retain) CKConversation * conversation;                                     //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) NSString * serviceAvailabilityKey;                                 //@synthesize serviceAvailabilityKey=_serviceAvailabilityKey - In the implementation block
@property (nonatomic,retain) NSDictionary * facetimeIDStatuses;                                 //@synthesize facetimeIDStatuses=_facetimeIDStatuses - In the implementation block
@property (nonatomic,retain) NSDictionary * facetimeAudioIDStatuses;                            //@synthesize facetimeAudioIDStatuses=_facetimeAudioIDStatuses - In the implementation block
@property (nonatomic,copy) NSArray * contactsViewModels;                                        //@synthesize contactsViewModels=_contactsViewModels - In the implementation block
@property (nonatomic,copy,readonly) NSArray * contacts; 
@property (assign,nonatomic,__weak) id<CKDetailsContactsManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<CKDetailsContactsManagerDelegate>)delegate;
-(void)setDelegate:(id<CKDetailsContactsManagerDelegate>)arg1 ;
-(NSArray *)contacts;
-(CKConversation *)conversation;
-(void)setConversation:(CKConversation *)arg1 ;
-(BOOL)_isFaceTimeAudioAvailable;
-(void)_conversationJoinStateDidChange:(id)arg1 ;
-(id)initWithConversation:(id)arg1 delegate:(id)arg2 ;
-(void)startCommunicationForEntity:(id)arg1 action:(unsigned long long)arg2 address:(id)arg3 usePreferredRouteIfAvailable:(BOOL)arg4 ;
-(void)_handleAddressBookChange:(id)arg1 ;
-(void)setPreferredCallService:(unsigned long long)arg1 forID:(id)arg2 ;
-(void)startCommunicationForEntity:(id)arg1 action:(unsigned long long)arg2 address:(id)arg3 ;
-(NSArray *)contactsViewModels;
-(void)_handleConversationRecipientsDidChange:(id)arg1 ;
-(void)setServiceAvailabilityKey:(NSString *)arg1 ;
-(NSString *)serviceAvailabilityKey;
-(void)_handleLocationChanged:(id)arg1 ;
-(void)_handleConversationPendingRecipientsDidChange:(id)arg1 ;
-(void)_updateViewModels;
-(void)_refreshFaceTimeIDSStatusWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_showMessageButtonForEntity:(id)arg1 ;
-(BOOL)_showFaceTimeVideoButtonForEntity:(id)arg1 ;
-(BOOL)_showPhoneButtonForEntity:(id)arg1 ;
-(void)setContactsViewModels:(NSArray *)arg1 ;
-(void)_startMessageWithEntity:(id)arg1 ;
-(void)_startCommunicationForEntity:(id)arg1 usePreferredRouteIfAvailable:(BOOL)arg2 ;
-(void)_startFacetimeCommunicationForEntity:(id)arg1 audioOnly:(BOOL)arg2 ;
-(void)_startCallWithEntity:(id)arg1 phoneAddress:(id)arg2 ;
-(BOOL)_isTelephonyDevice;
-(NSDictionary *)facetimeAudioIDStatuses;
-(unsigned long long)preferredCallServiceForID:(id)arg1 ;
-(long long)_facetimeAudioIDStatusForEntity:(id)arg1 ;
-(BOOL)_hasLinkedTelephoneNumbersForEntity:(id)arg1 ;
-(BOOL)_isFaceTimeVideoAvailable;
-(long long)_facetimeIDStatusForEntity:(id)arg1 ;
-(NSDictionary *)facetimeIDStatuses;
-(void)setFacetimeIDStatuses:(NSDictionary *)arg1 ;
-(void)setFacetimeAudioIDStatuses:(NSDictionary *)arg1 ;
-(BOOL)_preferredRoutesDisabledViaServerBag;
-(id)_preferredCallServiceToIDMap;
-(void)_setPreferredCallServiceToIDMap:(id)arg1 ;
-(BOOL)_conversationHasLeft;
@end

