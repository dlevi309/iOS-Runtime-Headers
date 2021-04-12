/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, SANPVideoLanguageOption, NSString;

@interface SANPVideoAudioAndSubtitleLanguageOptions : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * availableSubtitles; 
@property (nonatomic,copy) NSArray * availableTracks; 
@property (nonatomic,retain) SANPVideoLanguageOption * currentAudioTrack; 
@property (nonatomic,retain) SANPVideoLanguageOption * currentSubtitles; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)audioAndSubtitleLanguageOptions;
+(id)audioAndSubtitleLanguageOptionsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setAvailableTracks:(NSArray *)arg1 ;
-(void)setAvailableSubtitles:(NSArray *)arg1 ;
-(void)setCurrentAudioTrack:(SANPVideoLanguageOption *)arg1 ;
-(void)setCurrentSubtitles:(SANPVideoLanguageOption *)arg1 ;
-(SANPVideoLanguageOption *)currentAudioTrack;
-(NSArray *)availableSubtitles;
-(NSArray *)availableTracks;
-(SANPVideoLanguageOption *)currentSubtitles;
@end

