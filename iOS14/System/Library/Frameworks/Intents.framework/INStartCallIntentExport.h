/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INCallRecordFilter, INCallRecord, NSArray;


@protocol INStartCallIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INCallRecordFilter * callRecordFilter; 
@property (nonatomic,copy) INCallRecord * callRecordToCallBack; 
@property (assign,nonatomic) long long audioRoute; 
@property (assign,nonatomic) long long destinationType; 
@property (assign,nonatomic) long long preferredCallProvider; 
@property (nonatomic,copy) NSArray * contacts; 
@property (assign,setter=setTTYType:,nonatomic) long long ttyType; 
@property (assign,nonatomic) long long callCapability; 
@required
-(void)setContacts:(id)arg1;
-(NSArray *)contacts;
-(INCallRecordFilter *)callRecordFilter;
-(void)setCallRecordFilter:(id)arg1;
-(INCallRecord *)callRecordToCallBack;
-(void)setCallRecordToCallBack:(id)arg1;
-(id)init;
-(long long)destinationType;
-(void)setAudioRoute:(long long)arg1;
-(long long)ttyType;
-(void)setCallCapability:(long long)arg1;
-(void)setDestinationType:(long long)arg1;
-(long long)callCapability;
-(long long)audioRoute;
-(long long)preferredCallProvider;
-(void)setTTYType:(long long)arg1;
-(void)setPreferredCallProvider:(long long)arg1;

@end

