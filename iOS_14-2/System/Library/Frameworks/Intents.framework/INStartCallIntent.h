/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INStartCallIntentExport.h>

@class INCallRecordFilter, INCallRecord, NSArray, NSString;

@interface INStartCallIntent : INIntent <INStartCallIntentExport>

@property (assign,nonatomic) long long recordTypeForRedialing; 
@property (nonatomic,readonly) long long recordTypeForRedialing; 
@property (nonatomic,copy,readonly) INCallRecordFilter * callRecordFilter; 
@property (nonatomic,copy,readonly) INCallRecord * callRecordToCallBack; 
@property (nonatomic,readonly) long long audioRoute; 
@property (nonatomic,readonly) long long destinationType; 
@property (nonatomic,copy,readonly) NSArray * contacts; 
@property (nonatomic,readonly) long long callCapability; 
@property (assign,nonatomic) long long preferredCallProvider; 
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
-(INCallRecordFilter *)callRecordFilter;
-(void)setCallRecordFilter:(INCallRecordFilter *)arg1 ;
-(INCallRecord *)callRecordToCallBack;
-(void)setCallRecordToCallBack:(INCallRecord *)arg1 ;
-(id)initWithCallRecordFilter:(id)arg1 callRecordToCallBack:(id)arg2 audioRoute:(long long)arg3 destinationType:(long long)arg4 contacts:(id)arg5 callCapability:(long long)arg6 ;
-(id)initWithAudioRoute:(long long)arg1 destinationType:(long long)arg2 preferredCallProvider:(long long)arg3 contacts:(id)arg4 recordTypeForRedialing:(long long)arg5 ttyType:(long long)arg6 callCapability:(long long)arg7 ;
-(BOOL)_isGroupFaceTime;
-(id)_metadata;
-(long long)destinationType;
-(void)setAudioRoute:(long long)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(id)_emptyCopy;
-(void)setDomain:(id)arg1 ;
-(id)initWithCallRecordFilter:(id)arg1 callRecordToCallBack:(id)arg2 audioRoute:(long long)arg3 destinationType:(long long)arg4 preferredCallProvider:(long long)arg5 contacts:(id)arg6 ttyType:(long long)arg7 callCapability:(long long)arg8 ;
-(long long)ttyType;
-(id)domain;
-(void)setCallCapability:(long long)arg1 ;
-(void)setDestinationType:(long long)arg1 ;
-(long long)callCapability;
-(id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2 ;
-(id)_subtitleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2 ;
-(id)initWithDestinationType:(long long)arg1 contacts:(id)arg2 callCapability:(long long)arg3 ;
-(void)setRecordTypeForRedialing:(long long)arg1 ;
-(id)initWithAudioRoute:(long long)arg1 destinationType:(long long)arg2 contacts:(id)arg3 callCapability:(long long)arg4 ;
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
-(id)initWithAudioRoute:(long long)arg1 destinationType:(long long)arg2 contacts:(id)arg3 recordTypeForRedialing:(long long)arg4 callCapability:(long long)arg5 ;
-(void)setTTYType:(long long)arg1 ;
-(void)setPreferredCallProvider:(long long)arg1 ;
-(id)_validParameterCombinationsWithSchema:(id)arg1 ;
-(id)_currentParameterCombination;
@end

