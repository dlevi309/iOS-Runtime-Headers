/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSArray;

@interface SADPDevicePlaySound : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * action; 
@property (nonatomic,copy) NSArray * devices; 
+(id)devicePlaySound;
+(id)devicePlaySoundWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)devices;
-(void)setDevices:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
@end

