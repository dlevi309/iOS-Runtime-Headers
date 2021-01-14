/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INStartVideoCallIntentExport.h>

@class NSArray, NSString;

@interface INStartVideoCallIntent : INIntent <INStartVideoCallIntentExport>

@property (nonatomic,copy,readonly) NSArray * contacts; 
@property (assign,nonatomic) long long audioRoute; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
-(void)setAudioRoute:(long long)arg1 ;
-(BOOL)configureAttributeSet:(id)arg1 includingData:(BOOL)arg2 ;
-(id)_dictionaryRepresentation;
-(id)initWithContacts:(id)arg1 ;
-(void)setVerb:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)domain;
-(id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2 ;
-(id)_spotlightContentType;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(long long)audioRoute;
@end

