/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)domain;
-(id)groupIdentifier;
-(void)setDomain:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSArray *)appIdHints;
-(void)setAppIdHints:(NSArray *)arg1 ;
@end

