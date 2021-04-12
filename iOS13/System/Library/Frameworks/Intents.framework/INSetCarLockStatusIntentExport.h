/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSNumber, INSpeakableString;


@protocol INSetCarLockStatusIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSNumber * locked; 
@property (nonatomic,copy) INSpeakableString * carName; 
@required
-(id)init;
-(void)setLocked:(id)arg1;
-(INSpeakableString *)carName;
-(void)setCarName:(id)arg1;
-(NSNumber *)locked;

@end

