/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SAAceDomainSignal : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * appIdHints; 
@property (nonatomic,copy) NSString * domain; 
+(id)aceDomainSignal;
+(id)aceDomainSignalWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
-(NSArray *)appIdHints;
-(void)setAppIdHints:(NSArray *)arg1 ;
-(BOOL)mutatingCommand;
@end

