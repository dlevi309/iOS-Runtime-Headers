/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSNumber, NSString, INSpeakableString;


@protocol INSetProfileInCarIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSNumber * profileNumber; 
@property (nonatomic,copy) NSString * profileName; 
@property (nonatomic,copy) NSNumber * defaultProfile; 
@property (nonatomic,copy) INSpeakableString * carName; 
@required
-(INSpeakableString *)carName;
-(id)init;
-(void)setCarName:(id)arg1;
-(NSString *)profileName;
-(NSNumber *)profileNumber;
-(void)setProfileNumber:(id)arg1;
-(void)setProfileName:(id)arg1;
-(NSNumber *)defaultProfile;
-(void)setDefaultProfile:(id)arg1;

@end

