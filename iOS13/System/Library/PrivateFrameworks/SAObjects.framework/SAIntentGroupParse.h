/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SAIntentGroupProtobufMessage;

@interface SAIntentGroupParse : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * jsonIntent; 
@property (nonatomic,copy) NSString * jsonIntentTypeName; 
@property (nonatomic,retain) SAIntentGroupProtobufMessage * nlv3Parse; 
@property (nonatomic,retain) SAIntentGroupProtobufMessage * siriKitIntent; 
@property (nonatomic,copy) NSString * type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)jsonIntent;
-(void)setJsonIntent:(NSString *)arg1 ;
-(NSString *)jsonIntentTypeName;
-(void)setJsonIntentTypeName:(NSString *)arg1 ;
-(SAIntentGroupProtobufMessage *)nlv3Parse;
-(void)setNlv3Parse:(SAIntentGroupProtobufMessage *)arg1 ;
-(SAIntentGroupProtobufMessage *)siriKitIntent;
-(void)setSiriKitIntent:(SAIntentGroupProtobufMessage *)arg1 ;
@end

