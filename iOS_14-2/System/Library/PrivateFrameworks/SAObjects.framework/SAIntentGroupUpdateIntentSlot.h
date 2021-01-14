/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)updateIntentSlot;
+(id)updateIntentSlotWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)intentTypeName;
-(void)setIntentTypeName:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(SAIntentGroupProtobufMessage *)location;
-(NSString *)intentSlotKeyPath;
-(void)setIntentSlotKeyPath:(NSString *)arg1 ;
-(SAIntentGroupProtobufMessage *)intentSlotResolutionResult;
-(void)setIntentSlotResolutionResult:(SAIntentGroupProtobufMessage *)arg1 ;
-(NSNumber *)intentSlotValueIndex;
-(void)setIntentSlotValueIndex:(NSNumber *)arg1 ;
-(void)setLocation:(SAIntentGroupProtobufMessage *)arg1 ;
-(NSString *)jsonEncodedIntentSlotResolutionResult;
-(void)setJsonEncodedIntentSlotResolutionResult:(NSString *)arg1 ;
@end

