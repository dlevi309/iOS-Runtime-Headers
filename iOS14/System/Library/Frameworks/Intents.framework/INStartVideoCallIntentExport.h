/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray;


@protocol INStartVideoCallIntentExport <NSObject,JSExport>
@property (assign,nonatomic) long long audioRoute; 
@property (nonatomic,copy) NSArray * contacts; 
@required
-(void)setContacts:(id)arg1;
-(NSArray *)contacts;
-(id)init;
-(void)setAudioRoute:(long long)arg1;
-(long long)audioRoute;

@end

