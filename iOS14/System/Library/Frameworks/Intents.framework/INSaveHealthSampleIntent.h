/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSaveHealthSampleIntentExport.h>

@class INDateComponentsRange, NSArray, HKUnit, NSString;

@interface INSaveHealthSampleIntent : INIntent <INSaveHealthSampleIntentExport>

@property (nonatomic,copy,readonly) INDateComponentsRange * recordDate; 
@property (nonatomic,readonly) long long objectType; 
@property (nonatomic,copy,readonly) NSArray * values; 
@property (nonatomic,copy,readonly) HKUnit * unit; 
@property (nonatomic,copy,readonly) NSArray * sampleMetadatas; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(id)_metadata;
-(long long)objectType;
-(NSArray *)sampleMetadatas;
-(void)setSampleMetadatas:(NSArray *)arg1 ;
-(NSArray *)values;
-(id)initWithRecordDate:(id)arg1 objectType:(long long)arg2 values:(id)arg3 unit:(id)arg4 sampleMetadatas:(id)arg5 ;
-(void)setRecordDate:(INDateComponentsRange *)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(void)setObjectType:(long long)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)domain;
-(void)setValues:(NSArray *)arg1 ;
-(HKUnit *)unit;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(INDateComponentsRange *)recordDate;
-(void)setUnit:(HKUnit *)arg1 ;
@end

