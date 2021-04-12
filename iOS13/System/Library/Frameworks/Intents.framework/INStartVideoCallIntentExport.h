/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray;


@protocol INStartVideoCallIntentExport <NSObject,JSExport>
@property (assign,nonatomic) long long audioRoute; 
@property (nonatomic,copy) NSArray * contacts; 
@required
-(id)init;
-(NSArray *)contacts;
-(void)setContacts:(id)arg1;
-(long long)audioRoute;
-(void)setAudioRoute:(long long)arg1;

@end

