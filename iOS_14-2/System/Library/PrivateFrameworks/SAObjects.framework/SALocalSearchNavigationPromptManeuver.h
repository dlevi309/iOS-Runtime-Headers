/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSNumber;

@interface SALocalSearchNavigationPromptManeuver : SADomainCommand

@property (nonatomic,copy) NSNumber * maneuverIndex; 
+(id)navigationPromptManeuver;
+(id)navigationPromptManeuverWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)maneuverIndex;
-(void)setManeuverIndex:(NSNumber *)arg1 ;
@end

