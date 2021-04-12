/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INSaveHealthSampleIntentResponseExport.h>

@class NSArray, INDateComponentsRange, NSString;

@interface INSaveHealthSampleIntentResponse : INIntentResponse <INSaveHealthSampleIntentResponseExport>

@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSArray * sampleUuids; 
@property (nonatomic,copy) INDateComponentsRange * recordDate; 
@property (nonatomic,copy) NSString * defaultUnit; 
@property (nonatomic,copy) NSArray * valuesDefaultUnits; 
@property (nonatomic,copy) NSString * userProvidedUnit; 
@property (nonatomic,copy) NSArray * valuesUserProvidedUnits; 
@property (nonatomic,copy) NSString * punchoutUrl; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(int)_typeFromCode:(long long)arg1 ;
+(long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3 ;
+(int)_errorCodeFromCode:(long long)arg1 ;
+(BOOL)_appLaunchRequestedFromCode:(long long)arg1 ;
-(id)init;
-(void)setSampleUuids:(NSArray *)arg1 ;
-(void)setRecordDate:(INDateComponentsRange *)arg1 ;
-(void)setDefaultUnit:(NSString *)arg1 ;
-(NSArray *)valuesDefaultUnits;
-(void)setValuesDefaultUnits:(NSArray *)arg1 ;
-(NSString *)userProvidedUnit;
-(NSString *)punchoutUrl;
-(void)setUserProvidedUnit:(NSString *)arg1 ;
-(NSArray *)valuesUserProvidedUnits;
-(void)setValuesUserProvidedUnits:(NSArray *)arg1 ;
-(void)setPunchoutUrl:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(long long)_codeWithName:(id)arg1 ;
-(long long)_intentResponseCode;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(void)setPropertiesByName:(id)arg1 ;
-(id)propertiesByName;
-(id)initWithCoder:(id)arg1 ;
-(INDateComponentsRange *)recordDate;
-(long long)code;
-(NSArray *)sampleUuids;
-(NSString *)defaultUnit;
@end

