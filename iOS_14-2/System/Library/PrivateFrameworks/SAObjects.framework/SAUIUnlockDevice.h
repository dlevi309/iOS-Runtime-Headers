/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAUIUnlockDevice : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * cancellationCommands; 
@property (nonatomic,copy) NSArray * failureCommands; 
@property (nonatomic,copy) NSArray * successCommands; 
+(id)unlockDevice;
+(id)unlockDeviceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)cancellationCommands;
-(void)setCancellationCommands:(NSArray *)arg1 ;
-(NSArray *)failureCommands;
-(void)setFailureCommands:(NSArray *)arg1 ;
-(NSArray *)successCommands;
-(void)setSuccessCommands:(NSArray *)arg1 ;
@end

