/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CoreTelephonyClientDelegate.h>
#import <libobjc.A.dylib/TUCallProviderManagerDelegate.h>

@protocol OS_dispatch_queue;
@class CNContactsEnvironment, CoreTelephonyClient, TUCallProviderManager, NSObject, NSMapTable, NSString;

@interface CNGeminiManager : NSObject <CoreTelephonyClientDelegate, TUCallProviderManagerDelegate> {

	CNContactsEnvironment* _environment;
	CoreTelephonyClient* _coreTelephonyClient;
	TUCallProviderManager* _callProviderManager;
	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _delegateToQueue;
	unsigned long long _dataSourceExclusions;

}

@property (nonatomic,retain) CNContactsEnvironment * environment;                      //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) CoreTelephonyClient * coreTelephonyClient;                //@synthesize coreTelephonyClient=_coreTelephonyClient - In the implementation block
@property (nonatomic,retain) TUCallProviderManager * callProviderManager;              //@synthesize callProviderManager=_callProviderManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMapTable * delegateToQueue;                             //@synthesize delegateToQueue=_delegateToQueue - In the implementation block
@property (assign,nonatomic) unsigned long long dataSourceExclusions;                  //@synthesize dataSourceExclusions=_dataSourceExclusions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)deviceSupportsGemini;
+(id)descriptorForRequiredKeys;
+(BOOL)useFakeData;
+(id)cellularPlanManager;
+(id)channelStringFromSenderIdentity:(id)arg1 ;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(CNContactsEnvironment *)environment;
-(void)setEnvironment:(CNContactsEnvironment *)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)subscriptionInfoDidChange;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(CoreTelephonyClient *)coreTelephonyClient;
-(void)setCoreTelephonyClient:(CoreTelephonyClient *)arg1 ;
-(id)bestSenderIdentityForContact:(id)arg1 error:(id*)arg2 ;
-(id)bestSenderIdentityForHandle:(id)arg1 contactStore:(id)arg2 error:(id*)arg3 ;
-(id)initWithEnvironment:(id)arg1 coreTelephonyClient:(id)arg2 callProviderManager:(id)arg3 ;
-(void)danglingPlansDidUpdate:(id)arg1 ;
-(id)fetchedSenderIdentitiesWithError:(id*)arg1 ;
-(id)defaultSenderIdentityForInteractionsFromSenderIdentities:(id)arg1 ;
-(id)fakeSenderIdentities;
-(TUCallProviderManager *)callProviderManager;
-(id)geminiResultForContact:(id)arg1 substituteDefaultForDangling:(BOOL)arg2 error:(id*)arg3 ;
-(id)contactForPhoneString:(id)arg1 contactStore:(id)arg2 ;
-(id)remoteGeminiResultForContact:(id)arg1 substituteDefaultForDangling:(BOOL)arg2 error:(id*)arg3 ;
-(id)channelsByIdentifierIncludingDanglingPlans:(BOOL)arg1 defaultChannel:(id*)arg2 availableChannels:(id*)arg3 ;
-(id)channelForPreferredChannelString:(id)arg1 fromChannels:(id)arg2 synthesizeMissingChannels:(BOOL)arg3 ;
-(id)bestChannelIdentifierForPhoneNumbers:(id)arg1 fromChannelIdentifiers:(id)arg2 defaultChannelIdentifier:(id)arg3 ;
-(id)geminiResultForHandle:(id)arg1 contactStore:(id)arg2 substituteDefaultForDangling:(BOOL)arg3 error:(id*)arg4 ;
-(id)mostRecentChannelIdentifierForPhoneNumbers:(id)arg1 fromChannelIdentifiers:(id)arg2 ;
-(id)channelIdentifierForMostRecentCallFromPhoneNumbers:(id)arg1 fromChannelIdentifiers:(id)arg2 ;
-(unsigned long long)dataSourceExclusions;
-(id)channelIdentifierForMostRecentSMSFromPhoneNumbers:(id)arg1 fromChannelIdentifiers:(id)arg2 ;
-(id)channelForFavoritesEntry:(id)arg1 includeDanglingChannels:(BOOL)arg2 error:(id*)arg3 ;
-(id)fetchedSubscriptionForSenderIdentity:(id)arg1 ;
-(BOOL)remapContactsHavingPreferredChannelIdentifier:(id)arg1 toPreferredChannelIdentifier:(id)arg2 contactStore:(id)arg3 error:(id*)arg4 ;
-(BOOL)remapRecentCallsHavingChannelIdentifier:(id)arg1 toChannelIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)remapMessagesHavingChannelIdentifier:(id)arg1 toChannelIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)isReferencedByContactsForSenderLabelIdentifier:(id)arg1 store:(id)arg2 ;
-(BOOL)isReferencedByMessagesForSenderLabelIdentifier:(id)arg1 ;
-(BOOL)isReferencedByCallHistoryForSenderLabelIdentifier:(id)arg1 ;
-(NSMapTable *)delegateToQueue;
-(void)notifyDelegateOfChannelUpdates;
-(id)fetchedSubscriptionsWithError:(id*)arg1 ;
-(void)providersChangedForProviderManager:(id)arg1 ;
-(id)initWithCallProviderManager:(id)arg1 ;
-(id)channelForContact:(id)arg1 error:(id*)arg2 ;
-(id)remoteBestSenderIdentityForHandle:(id)arg1 contactStore:(id)arg2 error:(id*)arg3 ;
-(id)geminiResultForContact:(id)arg1 error:(id*)arg2 ;
-(id)geminiResultForHandle:(id)arg1 contactStore:(id)arg2 error:(id*)arg3 ;
-(id)senderIdentityMatchingUUID:(id)arg1 fromSenderIdentities:(id)arg2 ;
-(id)senderIdentityMatchingPhoneNumber:(id)arg1 fromSenderIdentities:(id)arg2 ;
-(id)channelForFavoritesEntry:(id)arg1 error:(id*)arg2 ;
-(id)bestSenderIdentityForFavoritesEntry:(id)arg1 error:(id*)arg2 ;
-(id)badgeLabelForSenderIdentity:(id)arg1 error:(id*)arg2 ;
-(BOOL)remapChannelIdentifier:(id)arg1 toIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithLocalParticipantUUID:(id)arg2 ;
-(BOOL)isReferencedSenderLabelIdentifier:(id)arg1 ;
-(id)bestSubscriptionForContact:(id)arg1 error:(id*)arg2 ;
-(id)bestSubscriptionForHandle:(id)arg1 contactStore:(id)arg2 error:(id*)arg3 ;
-(id)badgeLabelForSubscription:(id)arg1 error:(id*)arg2 ;
-(void)setCallProviderManager:(TUCallProviderManager *)arg1 ;
-(void)setDelegateToQueue:(NSMapTable *)arg1 ;
-(void)setDataSourceExclusions:(unsigned long long)arg1 ;
@end

