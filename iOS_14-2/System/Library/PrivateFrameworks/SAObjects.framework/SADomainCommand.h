/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSURL, NSNumber;

@interface SADomainCommand : SABaseClientBoundCommand

@property (nonatomic,copy) NSURL * targetAppId; 
@property (nonatomic,copy) NSURL * targetPluginId; 
@property (nonatomic,copy) NSNumber * timeout; 
+(id)domainCommand;
+(id)domainCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setTimeout:(NSNumber *)arg1 ;
-(NSNumber *)timeout;
-(NSURL *)targetAppId;
-(void)setTargetAppId:(NSURL *)arg1 ;
-(NSURL *)targetPluginId;
-(void)setTargetPluginId:(NSURL *)arg1 ;
@end

