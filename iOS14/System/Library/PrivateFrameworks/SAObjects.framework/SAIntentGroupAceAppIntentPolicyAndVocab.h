/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class SAIntentGroupProtobufMessage;

@interface SAIntentGroupAceAppIntentPolicyAndVocab : SADomainObject

@property (nonatomic,retain) SAIntentGroupProtobufMessage * aceAppBundleInfo; 
+(id)aceAppIntentPolicyAndVocab;
+(id)aceAppIntentPolicyAndVocabWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAIntentGroupProtobufMessage *)aceAppBundleInfo;
-(void)setAceAppBundleInfo:(SAIntentGroupProtobufMessage *)arg1 ;
-(id)encodedClassName;
@end

