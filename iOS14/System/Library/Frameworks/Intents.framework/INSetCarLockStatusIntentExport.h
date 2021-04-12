/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSNumber, INSpeakableString;


@protocol INSetCarLockStatusIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSNumber * locked; 
@property (nonatomic,copy) INSpeakableString * carName; 
@required
-(NSNumber *)locked;
-(INSpeakableString *)carName;
-(id)init;
-(void)setCarName:(id)arg1;
-(void)setLocked:(id)arg1;

@end

