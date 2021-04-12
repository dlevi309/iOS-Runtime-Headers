/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SANPVideoAudioAndSubtitleLanguageOptions, NSString;

@interface SANPVideoGetAudioTracksAndSubtitleOptionsCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) SANPVideoAudioAndSubtitleLanguageOptions * languageOptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)getAudioTracksAndSubtitleOptionsCompleted;
+(id)getAudioTracksAndSubtitleOptionsCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SANPVideoAudioAndSubtitleLanguageOptions *)languageOptions;
-(id)encodedClassName;
-(void)setLanguageOptions:(SANPVideoAudioAndSubtitleLanguageOptions *)arg1 ;
-(BOOL)requiresResponse;
@end

