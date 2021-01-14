/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INQueryHealthSampleIntentExport.h>

@class NSArray, HKUnit, NSString;

@interface INQueryHealthSampleIntent : INIntent <INQueryHealthSampleIntentExport>

@property (nonatomic,readonly) long long objectType; 
@property (nonatomic,copy,readonly) NSArray * recordDates; 
@property (nonatomic,copy,readonly) HKUnit * unit; 
@property (nonatomic,readonly) long long questionType; 
@property (nonatomic,copy,readonly) NSArray * thresholdValues; 
@property (nonatomic,readonly) long long expectedResultType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(id)_metadata;
-(long long)objectType;
-(id)initWithObjectType:(long long)arg1 recordDates:(id)arg2 unit:(id)arg3 questionType:(long long)arg4 thresholdValues:(id)arg5 expectedResultType:(long long)arg6 ;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(NSArray *)recordDates;
-(long long)expectedResultType;
-(void)setExpectedResultType:(long long)arg1 ;
-(void)setObjectType:(long long)arg1 ;
-(long long)questionType;
-(void)setQuestionType:(long long)arg1 ;
-(void)setRecordDates:(NSArray *)arg1 ;
-(NSArray *)thresholdValues;
-(void)setThresholdValues:(NSArray *)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)domain;
-(HKUnit *)unit;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(void)setUnit:(HKUnit *)arg1 ;
@end

