/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INSpeakableString;


@protocol INActivateCarSignalIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * carName; 
@property (assign,nonatomic) unsigned long long signals; 
@required
-(id)init;
-(INSpeakableString *)carName;
-(void)setCarName:(id)arg1;
-(unsigned long long)signals;
-(void)setSignals:(unsigned long long)arg1;

@end

