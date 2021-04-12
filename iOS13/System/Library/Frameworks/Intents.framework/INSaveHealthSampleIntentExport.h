/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setValues:(id)arg1;
-(NSArray *)values;
-(HKUnit *)unit;
-(long long)objectType;
-(void)setObjectType:(long long)arg1;
-(void)setUnit:(id)arg1;
-(INDateComponentsRange *)recordDate;
-(void)setRecordDate:(id)arg1;
-(NSArray *)sampleMetadatas;
-(void)setSampleMetadatas:(id)arg1;

@end

