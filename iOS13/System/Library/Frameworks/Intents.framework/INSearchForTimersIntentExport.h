/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INSpeakableString;


@protocol INSearchForTimersIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * label; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) long long state; 
@property (assign,nonatomic) long long type; 
@required
-(id)init;
-(long long)type;
-(void)setType:(long long)arg1;
-(long long)state;
-(double)duration;
-(void)setState:(long long)arg1;
-(void)setLabel:(id)arg1;
-(INSpeakableString *)label;
-(void)setDuration:(double)arg1;

@end

