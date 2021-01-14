/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SALocalSearchSetNavigationVoiceVolume : SADomainCommand

@property (nonatomic,copy) NSString * volume; 
+(id)setNavigationVoiceVolume;
+(id)setNavigationVoiceVolumeWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setVolume:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)volume;
@end

