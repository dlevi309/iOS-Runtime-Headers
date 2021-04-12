/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray, INDateComponentsRange, NSString;


@protocol INSaveHealthSampleIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSArray * sampleUuids; 
@property (nonatomic,copy) INDateComponentsRange * recordDate; 
@property (nonatomic,copy) NSString * defaultUnit; 
@property (nonatomic,copy) NSArray * valuesDefaultUnits; 
@property (nonatomic,copy) NSString * userProvidedUnit; 
@property (nonatomic,copy) NSArray * valuesUserProvidedUnits; 
@property (nonatomic,copy) NSString * punchoutUrl; 
@required
-(void)setSampleUuids:(id)arg1;
-(void)setRecordDate:(id)arg1;
-(void)setDefaultUnit:(id)arg1;
-(NSArray *)valuesDefaultUnits;
-(void)setValuesDefaultUnits:(id)arg1;
-(NSString *)userProvidedUnit;
-(NSString *)punchoutUrl;
-(void)setUserProvidedUnit:(id)arg1;
-(NSArray *)valuesUserProvidedUnits;
-(void)setValuesUserProvidedUnits:(id)arg1;
-(void)setPunchoutUrl:(id)arg1;
-(INDateComponentsRange *)recordDate;
-(long long)code;
-(NSArray *)sampleUuids;
-(NSString *)defaultUnit;

@end

