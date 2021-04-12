/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray;


@protocol INStartAudioCallIntentExport <NSObject,JSExport>
@property (assign,nonatomic) long long audioRoute; 
@property (assign,nonatomic) long long destinationType; 
@property (assign,nonatomic) long long preferredCallProvider; 
@property (nonatomic,copy) NSArray * contacts; 
@property (assign,nonatomic) long long recordTypeForRedialing; 
@property (assign,setter=setTTYType:,nonatomic) long long ttyType; 
@required
-(id)init;
-(NSArray *)contacts;
-(long long)destinationType;
-(void)setDestinationType:(long long)arg1;
-(void)setContacts:(id)arg1;
-(long long)audioRoute;
-(void)setAudioRoute:(long long)arg1;
-(long long)preferredCallProvider;
-(void)setPreferredCallProvider:(long long)arg1;
-(long long)recordTypeForRedialing;
-(void)setRecordTypeForRedialing:(long long)arg1;
-(long long)ttyType;
-(void)setTTYType:(long long)arg1;

@end

