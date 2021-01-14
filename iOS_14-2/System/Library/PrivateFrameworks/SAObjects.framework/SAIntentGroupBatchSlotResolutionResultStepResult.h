/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setTypeName:(NSString *)arg1 ;
-(NSString *)typeName;
-(void)setKeyPath:(NSString *)arg1 ;
-(NSString *)keyPath;
-(NSString *)base64EncodedProtobufMessage;
-(void)setBase64EncodedProtobufMessage:(NSString *)arg1 ;
-(SACommandFailed *)commandFailed;
-(void)setCommandFailed:(SACommandFailed *)arg1 ;
-(NSString *)jsonEncodedSlotResolutionResult;
-(void)setJsonEncodedSlotResolutionResult:(NSString *)arg1 ;
@end

