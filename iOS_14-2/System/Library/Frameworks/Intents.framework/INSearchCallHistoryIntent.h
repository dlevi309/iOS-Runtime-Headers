/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSearchCallHistoryIntentExport.h>

@class INDateComponentsRange, INPerson, NSNumber, NSString;

@interface INSearchCallHistoryIntent : INIntent <INSearchCallHistoryIntentExport>

@property (nonatomic,readonly) long long callType; 
@property (nonatomic,copy,readonly) INDateComponentsRange * dateCreated; 
@property (nonatomic,copy,readonly) INPerson * recipient; 
@property (nonatomic,readonly) unsigned long long callCapabilities; 
@property (nonatomic,readonly) unsigned long long callTypes; 
@property (nonatomic,copy,readonly) NSNumber * unseen; 
@property (assign,nonatomic) long long preferredCallProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(void)setRecipient:(INPerson *)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(NSNumber *)unseen;
-(id)_metadata;
-(unsigned long long)callCapabilities;
-(INDateComponentsRange *)dateCreated;
-(id)_dictionaryRepresentation;
-(void)setCallTypes:(unsigned long long)arg1 ;
-(void)setCallCapabilities:(unsigned long long)arg1 ;
-(id)initWithDateCreated:(id)arg1 recipient:(id)arg2 callCapabilities:(unsigned long long)arg3 callTypes:(unsigned long long)arg4 unseen:(id)arg5 ;
-(void)setVerb:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(void)setDateCreated:(INDateComponentsRange *)arg1 ;
-(id)domain;
-(long long)callType;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(long long)preferredCallProvider;
-(INPerson *)recipient;
-(void)setPreferredCallProvider:(long long)arg1 ;
-(unsigned long long)callTypes;
-(id)initWithDateCreated:(id)arg1 recipient:(id)arg2 callCapabilities:(unsigned long long)arg3 callTypes:(unsigned long long)arg4 ;
-(id)initWithCallType:(long long)arg1 dateCreated:(id)arg2 recipient:(id)arg3 callCapabilities:(unsigned long long)arg4 ;
-(void)setUnseen:(NSNumber *)arg1 ;
@end

