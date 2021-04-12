/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INStartAudioCallIntentExport.h>

@class NSArray, NSString;

@interface INStartAudioCallIntent : INIntent <INStartAudioCallIntentExport>

@property (nonatomic,readonly) BOOL useSpeaker; 
@property (nonatomic,readonly) long long destinationType; 
@property (nonatomic,copy,readonly) NSArray * contacts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long audioRoute; 
@property (assign,nonatomic) long long preferredCallProvider; 
@property (assign,nonatomic) long long recordTypeForRedialing; 
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
-(id)_dictionaryRepresentation;
-(void)_setMetadata:(id)arg1 ;
-(long long)destinationType;
-(void)setDestinationType:(long long)arg1 ;
-(void)setContacts:(NSArray *)arg1 ;
-(id)initWithContacts:(id)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(long long)audioRoute;
-(void)setAudioRoute:(long long)arg1 ;
-(BOOL)configureAttributeSet:(id)arg1 includingData:(BOOL)arg2 ;
-(id)_spotlightContentType;
-(id)_subtitleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2 ;
-(long long)preferredCallProvider;
-(void)setPreferredCallProvider:(long long)arg1 ;
-(long long)recordTypeForRedialing;
-(void)setRecordTypeForRedialing:(long long)arg1 ;
-(long long)ttyType;
-(void)setTTYType:(long long)arg1 ;
-(id)initWithDestinationType:(long long)arg1 contacts:(id)arg2 ;
-(id)_validParameterCombinationsWithSchema:(id)arg1 ;
-(BOOL)_supportsBackgroundExecution;
-(BOOL)useSpeaker;
-(void)setUseSpeaker:(BOOL)arg1 ;
@end

