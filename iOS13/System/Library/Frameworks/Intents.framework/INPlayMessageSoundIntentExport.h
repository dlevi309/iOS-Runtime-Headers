/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSString;


@protocol INPlayMessageSoundIntentExport <NSObject,JSExport>
@property (assign,nonatomic) long long soundType; 
@property (nonatomic,copy) NSString * messageIdentifier; 
@required
-(id)init;
-(void)setMessageIdentifier:(id)arg1;
-(NSString *)messageIdentifier;
-(long long)soundType;
-(void)setSoundType:(long long)arg1;

@end

