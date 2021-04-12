/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INStartAudioCallIntentExport.h>

@class NSArray, NSString;

@interface INStartAudioCallIntent : INIntent <INStartAudioCallIntentExport>

@property (nonatomic,readonly) BOOL useSpeaker; 
@property (nonatomic,readonly) long long destinationType; 
@property (nonatomic,copy,readonly) NSArray * contacts; 
@property (assign,nonatomic) long long audioRoute; 
@property (assign,nonatomic) long long preferredCallProvider; 
@property (assign,nonatomic) long long recordTypeForRedialing; 
@property (assign,setter=setTTYType:,nonatomic) long long ttyType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_ignoredParameters;
-(id)cd_sender;
-(id)cd_groupName;
-(long long)cd_interactionMechanism;
-(id)cd_recipients;
-(BOOL)cd_saveToPeopleStore;
-(id)verb;
-(void)setContacts:(NSArray *)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(NSArray *)contacts;
-(id)_metadata;
-(long long)destinationType;
-(void)setAudioRoute:(long long)arg1 ;
-(BOOL)configureAttributeSet:(id)arg1 includingData:(BOOL)arg2 ;
-(id)_dictionaryRepresentation;
-(BOOL)useSpeaker;
-(id)initWithContacts:(id)arg1 ;
-(void)setVerb:(id)arg1 ;
-(void)setUseSpeaker:(BOOL)arg1 ;
-(void)setDomain:(id)arg1 ;
-(long long)ttyType;
-(id)domain;
-(void)setDestinationType:(long long)arg1 ;
-(id)_subtitleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2 ;
-(void)setRecordTypeForRedialing:(long long)arg1 ;
-(long long)recordTypeForRedialing;
-(id)_spotlightContentType;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(long long)audioRoute;
-(long long)preferredCallProvider;
-(void)setTTYType:(long long)arg1 ;
-(void)setPreferredCallProvider:(long long)arg1 ;
-(id)initWithDestinationType:(long long)arg1 contacts:(id)arg2 ;
-(id)_validParameterCombinationsWithSchema:(id)arg1 ;
-(id)_currentParameterCombination;
@end

