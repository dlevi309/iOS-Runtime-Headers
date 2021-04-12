/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)domain;
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)values;
-(HKUnit *)unit;
-(id)_metadata;
-(long long)objectType;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(void)setObjectType:(long long)arg1 ;
-(id)_dictionaryRepresentation;
-(void)_setMetadata:(id)arg1 ;
-(void)setUnit:(HKUnit *)arg1 ;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(INDateComponentsRange *)recordDate;
-(void)setRecordDate:(INDateComponentsRange *)arg1 ;
-(NSArray *)sampleMetadatas;
-(void)setSampleMetadatas:(NSArray *)arg1 ;
-(id)initWithRecordDate:(id)arg1 objectType:(long long)arg2 values:(id)arg3 unit:(id)arg4 sampleMetadatas:(id)arg5 ;
@end

