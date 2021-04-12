/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSearchForMessagesIntentExport.h>

@class NSArray, INDateComponentsRange, NSString;

@interface INSearchForMessagesIntent : INIntent <INSearchForMessagesIntentExport>

@property (nonatomic,copy,readonly) NSArray * recipients; 
@property (nonatomic,readonly) long long recipientsOperator; 
@property (nonatomic,copy,readonly) NSArray * senders; 
@property (nonatomic,readonly) long long sendersOperator; 
@property (nonatomic,copy,readonly) NSArray * searchTerms; 
@property (nonatomic,readonly) long long searchTermsOperator; 
@property (nonatomic,readonly) unsigned long long attributes; 
@property (nonatomic,copy,readonly) INDateComponentsRange * dateTimeRange; 
@property (nonatomic,copy,readonly) NSArray * identifiers; 
@property (nonatomic,readonly) long long identifiersOperator; 
@property (nonatomic,copy,readonly) NSArray * notificationIdentifiers; 
@property (nonatomic,readonly) long long notificationIdentifiersOperator; 
@property (nonatomic,copy,readonly) NSArray * speakableGroupNames; 
@property (nonatomic,readonly) long long speakableGroupNamesOperator; 
@property (nonatomic,copy,readonly) NSArray * conversationIdentifiers; 
@property (nonatomic,readonly) long long conversationIdentifiersOperator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)recipients;
-(id)contents;
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(id)initWithRecipients:(id)arg1 senders:(id)arg2 searchTerms:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6 notificationIdentifiers:(id)arg7 speakableGroupNames:(id)arg8 ;
-(id)initWithRecipients:(id)arg1 senders:(id)arg2 searchTerms:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6 notificationIdentifiers:(id)arg7 groupNames:(id)arg8 ;
-(NSArray *)identifiers;
-(id)initWithRecipients:(id)arg1 senders:(id)arg2 searchTerms:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6 notificationIdentifiers:(id)arg7 speakableGroupNames:(id)arg8 conversationIdentifiers:(id)arg9 ;
-(id)attributeSet;
-(id)_metadata;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)senders;
-(void)setAttributes:(unsigned long long)arg1 ;
-(id)groupNames;
-(void)setGroupNames:(id)arg1 ;
-(long long)groupNamesOperator;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(void)setSenders:(NSArray *)arg1 ;
-(NSArray *)notificationIdentifiers;
-(void)setNotificationIdentifiers:(NSArray *)arg1 ;
-(NSArray *)speakableGroupNames;
-(void)setSpeakableGroupNames:(NSArray *)arg1 ;
-(NSArray *)conversationIdentifiers;
-(void)setConversationIdentifiers:(NSArray *)arg1 ;
-(long long)recipientsOperator;
-(long long)sendersOperator;
-(long long)identifiersOperator;
-(long long)notificationIdentifiersOperator;
-(long long)speakableGroupNamesOperator;
-(long long)conversationIdentifiersOperator;
-(void)setDomain:(id)arg1 ;
-(id)domain;
-(NSArray *)searchTerms;
-(void)setSearchTerms:(NSArray *)arg1 ;
-(long long)searchTermsOperator;
-(unsigned long long)attributes;
-(void)setIdentifiers:(NSArray *)arg1 ;
-(INDateComponentsRange *)dateTimeRange;
-(void)setDateTimeRange:(INDateComponentsRange *)arg1 ;
-(void)setContents:(id)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(id)contentPredicate;
-(id)initWithRecipients:(id)arg1 senders:(id)arg2 contents:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6 ;
-(long long)contentsOperator;
-(id)initWithRecipients:(id)arg1 senders:(id)arg2 contents:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6 notificationIdentifiers:(id)arg7 ;
@end

