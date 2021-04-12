/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SAClientSetupInfo : SABaseClientBoundCommand

@property (assign,nonatomic) BOOL delay; 
@property (assign,nonatomic) double threshold; 
+(id)clientSetupInfo;
+(id)clientSetupInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(BOOL)delay;
-(void)setDelay:(BOOL)arg1 ;
-(id)groupIdentifier;
-(double)threshold;
-(void)setThreshold:(double)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
@end

