/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSNumber, NSString, INSpeakableString;


@protocol INSetProfileInCarIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSNumber * profileNumber; 
@property (nonatomic,copy) NSString * profileName; 
@property (nonatomic,copy) NSNumber * defaultProfile; 
@property (nonatomic,copy) INSpeakableString * carName; 
@required
-(id)init;
-(INSpeakableString *)carName;
-(void)setCarName:(id)arg1;
-(NSNumber *)profileNumber;
-(void)setProfileNumber:(id)arg1;
-(NSString *)profileName;
-(void)setProfileName:(id)arg1;
-(NSNumber *)defaultProfile;
-(void)setDefaultProfile:(id)arg1;

@end

