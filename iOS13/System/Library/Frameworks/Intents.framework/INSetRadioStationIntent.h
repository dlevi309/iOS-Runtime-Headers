/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetRadioStationIntentExport.h>

@class NSNumber, NSString;

@interface INSetRadioStationIntent : INIntent <INSetRadioStationIntentExport>

@property (nonatomic,readonly) long long radioType; 
@property (nonatomic,copy,readonly) NSNumber * frequency; 
@property (nonatomic,copy,readonly) NSString * stationName; 
@property (nonatomic,copy,readonly) NSString * channel; 
@property (nonatomic,copy,readonly) NSNumber * presetNumber; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(id)_metadata;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(NSString *)channel;
-(id)_dictionaryRepresentation;
-(NSNumber *)frequency;
-(void)setFrequency:(NSNumber *)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(void)setChannel:(NSString *)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(long long)radioType;
-(void)setRadioType:(long long)arg1 ;
-(NSString *)stationName;
-(void)setStationName:(NSString *)arg1 ;
-(NSNumber *)presetNumber;
-(void)setPresetNumber:(NSNumber *)arg1 ;
-(id)initWithRadioType:(long long)arg1 frequency:(id)arg2 stationName:(id)arg3 channel:(id)arg4 presetNumber:(id)arg5 ;
@end

