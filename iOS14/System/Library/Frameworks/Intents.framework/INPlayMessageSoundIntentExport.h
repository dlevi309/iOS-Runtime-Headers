/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSString;


@protocol INPlayMessageSoundIntentExport <NSObject,JSExport>
@property (assign,nonatomic) long long soundType; 
@property (nonatomic,copy) NSString * messageIdentifier; 
@required
-(id)init;
-(long long)soundType;
-(void)setSoundType:(long long)arg1;
-(NSString *)messageIdentifier;
-(void)setMessageIdentifier:(id)arg1;

@end

