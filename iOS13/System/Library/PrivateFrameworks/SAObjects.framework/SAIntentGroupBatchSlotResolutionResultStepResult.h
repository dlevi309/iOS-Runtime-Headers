/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SACommandFailed;

@interface SAIntentGroupBatchSlotResolutionResultStepResult : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * base64EncodedProtobufMessage; 
@property (nonatomic,retain) SACommandFailed * commandFailed; 
@property (nonatomic,copy) NSString * jsonEncodedSlotResolutionResult; 
@property (nonatomic,copy) NSString * keyPath; 
@property (nonatomic,copy) NSString * typeName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)batchSlotResolutionResultStepResult;
+(id)batchSlotResolutionResultStepResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)keyPath;
-(id)groupIdentifier;
-(void)setKeyPath:(NSString *)arg1 ;
-(NSString *)typeName;
-(void)setTypeName:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)base64EncodedProtobufMessage;
-(void)setBase64EncodedProtobufMessage:(NSString *)arg1 ;
-(SACommandFailed *)commandFailed;
-(void)setCommandFailed:(SACommandFailed *)arg1 ;
-(NSString *)jsonEncodedSlotResolutionResult;
-(void)setJsonEncodedSlotResolutionResult:(NSString *)arg1 ;
@end

