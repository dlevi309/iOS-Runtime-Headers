/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
*/

#import <IMAssistantCore/IMAssistantINMessageConverterPersonProvider.h>
#import <IMAssistantCore/IMAssistantIdentifiableIntentHandler.h>

@protocol IMAssistantMessageHandlerDataSource;
@class NSString, NSArray;

@interface IMAssistantMessageHandler : NSObject <IMAssistantINMessageConverterPersonProvider, IMAssistantIdentifiableIntentHandler> {

	id<IMAssistantMessageHandlerDataSource> _messageHandlerDataSource;
	NSArray* _keysToFetch;
	NSString* _intentIdentifier;

}

@property (nonatomic,retain) id<IMAssistantMessageHandlerDataSource> messageHandlerDataSource;              //@synthesize messageHandlerDataSource=_messageHandlerDataSource - In the implementation block
@property (nonatomic,retain) NSArray * keysToFetch;                                                         //@synthesize keysToFetch=_keysToFetch - In the implementation block
@property (nonatomic,copy) NSString * intentIdentifier;                                                     //@synthesize intentIdentifier=_intentIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)connectToIMDaemonController;
-(NSArray *)keysToFetch;
-(id)contactWithIdentifier:(id)arg1 ;
-(void)setKeysToFetch:(NSArray *)arg1 ;
-(id)meContactIdentifier;
-(NSString *)intentIdentifier;
-(id)initWithDataSource:(id)arg1 intentIdentifier:(id)arg2 ;
-(id<IMAssistantMessageHandlerDataSource>)messageHandlerDataSource;
-(id)contactsMatchingINPerson:(id)arg1 ;
-(id)contactIdentifiersMatchingHandle:(id)arg1 ;
-(id)contactIdentifiersMatchingHandleID:(id)arg1 ;
-(id)initWithIntentIdentifier:(id)arg1 ;
-(id)_initWithDataSource:(id)arg1 contactKeysToFetch:(id)arg2 intentIdentifier:(id)arg3 ;
-(void)forceTriggerResumeNotification;
-(id)contactsMatchingPredicate:(id)arg1 forPerson:(id)arg2 ;
-(id)contactIdentifiersMatchingSPIHandle:(id)arg1 ;
-(id)personFromSPIHandle:(id)arg1 contact:(id)arg2 ;
-(id)personFromSPIHandle:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 keysToFetch:(id)arg2 intentIdentifier:(id)arg3 ;
-(id)unifiedContactIdentifierForContactIdentifier:(id)arg1 ;
-(id)contactIdentifiersMatchingINPersonHandle:(id)arg1 ;
-(id)contactIdentifiersForParticipantsInChat:(id)arg1 ;
-(void)setMessageHandlerDataSource:(id<IMAssistantMessageHandlerDataSource>)arg1 ;
-(void)setIntentIdentifier:(NSString *)arg1 ;
@end

