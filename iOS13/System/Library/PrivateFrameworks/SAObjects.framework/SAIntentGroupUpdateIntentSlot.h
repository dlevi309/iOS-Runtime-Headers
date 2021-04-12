/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SAIntentGroupSetMapLocation.h>

@class SAIntentGroupProtobufMessage, NSString, NSNumber;

@interface SAIntentGroupUpdateIntentSlot : SABaseCommand <SAServerBoundCommand, SAIntentGroupSetMapLocation>

@property (nonatomic,copy) NSString * intentSlotKeyPath; 
@property (nonatomic,retain) SAIntentGroupProtobufMessage * intentSlotResolutionResult; 
@property (nonatomic,copy) NSNumber * intentSlotValueIndex; 
@property (nonatomic,copy) NSString * intentTypeName; 
@property (nonatomic,copy) NSString * jsonEncodedIntentSlotResolutionResult; 
@property (nonatomic,retain) SAIntentGroupProtobufMessage * location; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)updateIntentSlot;
+(id)updateIntentSlotWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAIntentGroupProtobufMessage *)location;
-(void)setLocation:(SAIntentGroupProtobufMessage *)arg1 ;
-(NSString *)intentTypeName;
-(void)setIntentTypeName:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)intentSlotKeyPath;
-(void)setIntentSlotKeyPath:(NSString *)arg1 ;
-(SAIntentGroupProtobufMessage *)intentSlotResolutionResult;
-(void)setIntentSlotResolutionResult:(SAIntentGroupProtobufMessage *)arg1 ;
-(NSNumber *)intentSlotValueIndex;
-(void)setIntentSlotValueIndex:(NSNumber *)arg1 ;
-(NSString *)jsonEncodedIntentSlotResolutionResult;
-(void)setJsonEncodedIntentSlotResolutionResult:(NSString *)arg1 ;
@end

