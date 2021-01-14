/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SAClientSetupInfo : SABaseClientBoundCommand

@property (assign,nonatomic) BOOL delay; 
@property (assign,nonatomic) double threshold; 
+(id)clientSetupInfo;
+(id)clientSetupInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(double)threshold;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setDelay:(BOOL)arg1 ;
-(BOOL)delay;
-(BOOL)mutatingCommand;
-(void)setThreshold:(double)arg1 ;
@end

