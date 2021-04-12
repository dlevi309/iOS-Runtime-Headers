/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SAIntentGroupProtobufMessage, NSString;

@interface SAIntentGroupResolveIntentSlotCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) SAIntentGroupProtobufMessage * intentSlotResolutionResult; 
@property (nonatomic,copy) NSString * jsonEncodedIntentSlotResolutionResult; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)resolveIntentSlotCompleted;
+(id)resolveIntentSlotCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAIntentGroupProtobufMessage *)intentSlotResolutionResult;
-(void)setIntentSlotResolutionResult:(SAIntentGroupProtobufMessage *)arg1 ;
-(NSString *)jsonEncodedIntentSlotResolutionResult;
-(void)setJsonEncodedIntentSlotResolutionResult:(NSString *)arg1 ;
@end

