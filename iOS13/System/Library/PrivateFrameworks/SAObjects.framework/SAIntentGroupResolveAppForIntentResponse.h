/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSNumber, NSString;

@interface SAIntentGroupResolveAppForIntentResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * appsList; 
@property (nonatomic,copy) NSNumber * needsConfirmation; 
@property (nonatomic,copy) NSString * resolutionType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)resolveAppForIntentResponse;
+(id)resolveAppForIntentResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)appsList;
-(void)setAppsList:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)needsConfirmation;
-(void)setNeedsConfirmation:(NSNumber *)arg1 ;
-(NSString *)resolutionType;
-(void)setResolutionType:(NSString *)arg1 ;
@end

