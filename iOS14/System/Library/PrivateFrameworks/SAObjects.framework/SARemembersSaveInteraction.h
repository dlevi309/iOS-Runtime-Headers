/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SARemembersSaveInteraction : SABaseClientBoundCommand <SAAceSerializable>

@property (nonatomic,copy) NSString * jsonEncodedIntent; 
@property (nonatomic,copy) NSString * jsonEncodedIntentResponse; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)saveInteraction;
+(id)saveInteractionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)jsonEncodedIntent;
-(void)setJsonEncodedIntent:(NSString *)arg1 ;
-(NSString *)jsonEncodedIntentResponse;
-(void)setJsonEncodedIntentResponse:(NSString *)arg1 ;
-(BOOL)mutatingCommand;
@end

