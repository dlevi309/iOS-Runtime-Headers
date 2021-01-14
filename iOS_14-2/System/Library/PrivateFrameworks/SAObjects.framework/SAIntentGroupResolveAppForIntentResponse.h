/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSNumber, NSString;

@interface SAIntentGroupResolveAppForIntentResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * appsList; 
@property (nonatomic,copy) NSNumber * needsConfirmation; 
@property (nonatomic,copy) NSString * resolutionType; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resolveAppForIntentResponse;
+(id)resolveAppForIntentResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)appsList;
-(void)setAppsList:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)resolutionType;
-(NSNumber *)needsConfirmation;
-(void)setNeedsConfirmation:(NSNumber *)arg1 ;
-(void)setResolutionType:(NSString *)arg1 ;
@end

