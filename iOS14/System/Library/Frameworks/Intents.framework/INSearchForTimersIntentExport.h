/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INSpeakableString;


@protocol INSearchForTimersIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * label; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) long long state; 
@property (assign,nonatomic) long long type; 
@required
-(void)setDuration:(double)arg1;
-(id)init;
-(void)setType:(long long)arg1;
-(long long)type;
-(void)setState:(long long)arg1;
-(long long)state;
-(void)setLabel:(id)arg1;
-(double)duration;
-(INSpeakableString *)label;

@end

