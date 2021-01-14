/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SANPVideoSetDefaultAudioTrack : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * languageOptionChangeUserSetting; 
+(id)setDefaultAudioTrack;
+(id)setDefaultAudioTrackWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)languageOptionChangeUserSetting;
-(void)setLanguageOptionChangeUserSetting:(NSString *)arg1 ;
@end

