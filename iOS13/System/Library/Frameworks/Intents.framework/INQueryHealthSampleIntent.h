/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)domain;
-(HKUnit *)unit;
-(id)_metadata;
-(long long)objectType;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(void)setObjectType:(long long)arg1 ;
-(id)_dictionaryRepresentation;
-(void)_setMetadata:(id)arg1 ;
-(void)setUnit:(HKUnit *)arg1 ;
-(long long)questionType;
-(void)setQuestionType:(long long)arg1 ;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(long long)expectedResultType;
-(void)setExpectedResultType:(long long)arg1 ;
-(NSArray *)recordDates;
-(void)setRecordDates:(NSArray *)arg1 ;
-(NSArray *)thresholdValues;
-(void)setThresholdValues:(NSArray *)arg1 ;
-(id)initWithObjectType:(long long)arg1 recordDates:(id)arg2 unit:(id)arg3 questionType:(long long)arg4 thresholdValues:(id)arg5 expectedResultType:(long long)arg6 ;
@end

