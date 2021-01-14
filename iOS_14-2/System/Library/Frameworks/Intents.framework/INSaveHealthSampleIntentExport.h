/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INDateComponentsRange, NSArray, HKUnit;


@protocol INSaveHealthSampleIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INDateComponentsRange * recordDate; 
@property (assign,nonatomic) long long objectType; 
@property (nonatomic,copy) NSArray * values; 
@property (nonatomic,copy) HKUnit * unit; 
@property (nonatomic,copy) NSArray * sampleMetadatas; 
@required
-(id)init;
-(long long)objectType;
-(NSArray *)sampleMetadatas;
-(void)setSampleMetadatas:(id)arg1;
-(NSArray *)values;
-(void)setRecordDate:(id)arg1;
-(void)setObjectType:(long long)arg1;
-(void)setValues:(id)arg1;
-(HKUnit *)unit;
-(INDateComponentsRange *)recordDate;
-(void)setUnit:(id)arg1;

@end

