/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SAIntentGroupDirectInvocation, NSString, SAIntentGroupProtobufMessage;

@interface SAIntentGroupParse : AceObject <SAAceSerializable>

@property (nonatomic,retain) SAIntentGroupDirectInvocation * directInvocation; 
@property (nonatomic,copy) NSString * jsonIntent; 
@property (nonatomic,copy) NSString * jsonIntentTypeName; 
@property (nonatomic,retain) SAIntentGroupProtobufMessage * nlv3Parse; 
@property (nonatomic,retain) SAIntentGroupProtobufMessage * siriKitIntent; 
@property (nonatomic,copy) NSString * type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parse;
+(id)parseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setType:(NSString *)arg1 ;
-(SAIntentGroupDirectInvocation *)directInvocation;
-(void)setDirectInvocation:(SAIntentGroupDirectInvocation *)arg1 ;
-(NSString *)jsonIntent;
-(void)setJsonIntent:(NSString *)arg1 ;
-(NSString *)jsonIntentTypeName;
-(void)setJsonIntentTypeName:(NSString *)arg1 ;
-(SAIntentGroupProtobufMessage *)nlv3Parse;
-(void)setNlv3Parse:(SAIntentGroupProtobufMessage *)arg1 ;
-(SAIntentGroupProtobufMessage *)siriKitIntent;
-(void)setSiriKitIntent:(SAIntentGroupProtobufMessage *)arg1 ;
-(NSString *)type;
@end

