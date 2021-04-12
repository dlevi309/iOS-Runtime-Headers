/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INStartCallIntentExport.h>

@class NSArray, NSString;

@interface INStartCallIntent : INIntent <INStartCallIntentExport>

@property (nonatomic,readonly) long long audioRoute; 
@property (nonatomic,readonly) long long destinationType; 
@property (nonatomic,copy,readonly) NSArray * contacts; 
@property (nonatomic,readonly) long long recordTypeForRedialing; 
@property (nonatomic,readonly) long long callCapability; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long preferredCallProvider; 
@property (assign,setter=setTTYType:,nonatomic) long long ttyType; 
+(id)_ignoredParameters;
-(BOOL)cd_saveToPeopleStore;
-(long long)cd_interactionMechanism;
-(id)cd_groupName;
-(id)cd_sender;
-(id)cd_recipients;
-(id)domain;
-(id)_metadata;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(NSArray *)contacts;
-(long long)callCapability;
-(id)_dictionaryRepresentation;
-(void)_setMetadata:(id)arg1 ;
-(long long)destinationType;
-(void)setDestinationType:(long long)arg1 ;
-(void)setContacts:(NSArray *)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(long long)audioRoute;
-(void)setAudioRoute:(long long)arg1 ;
-(id)_spotlightContentType;
-(id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2 ;
-(id)_subtitleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2 ;
-(id)initWithDestinationType:(long long)arg1 contacts:(id)arg2 callCapability:(long long)arg3 ;
-(id)initWithAudioRoute:(long long)arg1 destinationType:(long long)arg2 contacts:(id)arg3 callCapability:(long long)arg4 ;
-(long long)preferredCallProvider;
-(void)setPreferredCallProvider:(long long)arg1 ;
-(long long)recordTypeForRedialing;
-(void)setRecordTypeForRedialing:(long long)arg1 ;
-(long long)ttyType;
-(void)setTTYType:(long long)arg1 ;
-(id)_validParameterCombinationsWithSchema:(id)arg1 ;
-(BOOL)_supportsBackgroundExecution;
-(id)_emptyCopy;
-(void)setCallCapability:(long long)arg1 ;
-(id)initWithAudioRoute:(long long)arg1 destinationType:(long long)arg2 contacts:(id)arg3 recordTypeForRedialing:(long long)arg4 callCapability:(long long)arg5 ;
-(id)initWithAudioRoute:(long long)arg1 destinationType:(long long)arg2 preferredCallProvider:(long long)arg3 contacts:(id)arg4 recordTypeForRedialing:(long long)arg5 ttyType:(long long)arg6 callCapability:(long long)arg7 ;
@end

