/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SALocalSearchSetNavigationVoiceVolume : SADomainCommand

@property (nonatomic,copy) NSString * volume; 
+(id)setNavigationVoiceVolume;
+(id)setNavigationVoiceVolumeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)volume;
-(void)setVolume:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

