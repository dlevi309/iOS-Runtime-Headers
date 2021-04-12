/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)code;
-(NSArray *)sampleUuids;
-(void)setSampleUuids:(id)arg1;
-(INDateComponentsRange *)recordDate;
-(void)setRecordDate:(id)arg1;
-(NSString *)defaultUnit;
-(void)setDefaultUnit:(id)arg1;
-(NSArray *)valuesDefaultUnits;
-(void)setValuesDefaultUnits:(id)arg1;
-(NSString *)userProvidedUnit;
-(void)setUserProvidedUnit:(id)arg1;
-(NSArray *)valuesUserProvidedUnits;
-(void)setValuesUserProvidedUnits:(id)arg1;
-(NSString *)punchoutUrl;
-(void)setPunchoutUrl:(id)arg1;

@end

