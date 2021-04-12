/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SANPVideoSetAudioTrack : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * desiredOptionId; 
@property (nonatomic,copy) NSString * languageOptionChangeUserSetting; 
+(id)setAudioTrack;
+(id)setAudioTrackWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)desiredOptionId;
-(void)setDesiredOptionId:(NSString *)arg1 ;
-(NSString *)languageOptionChangeUserSetting;
-(void)setLanguageOptionChangeUserSetting:(NSString *)arg1 ;
@end

