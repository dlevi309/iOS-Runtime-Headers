/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSArray;

@interface SADPDevicePlaySound : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * action; 
@property (nonatomic,copy) NSArray * devices; 
+(id)devicePlaySound;
+(id)devicePlaySoundWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)action;
-(NSArray *)devices;
-(void)setAction:(NSString *)arg1 ;
-(void)setDevices:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

