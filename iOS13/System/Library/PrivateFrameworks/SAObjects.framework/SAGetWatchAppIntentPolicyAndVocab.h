/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAGetWatchAppIntentPolicyAndVocab : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * clientIdentifiers; 
+(id)getWatchAppIntentPolicyAndVocab;
+(id)getWatchAppIntentPolicyAndVocabWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)clientIdentifiers;
-(void)setClientIdentifiers:(NSArray *)arg1 ;
@end

