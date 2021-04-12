/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString, SASVSpeechMetadata;

@interface SASVPolicyActionNode : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * children; 
@property (nonatomic,copy) NSString * confirmationType; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SASVSpeechMetadata * speechMetadata; 
@property (nonatomic,copy) NSString * type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)policyActionNode;
+(id)policyActionNodeWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)children;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SASVSpeechMetadata *)speechMetadata;
-(void)setSpeechMetadata:(SASVSpeechMetadata *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)setConfirmationType:(NSString *)arg1 ;
-(NSString *)confirmationType;
-(NSString *)name;
-(NSString *)type;
-(void)setName:(NSString *)arg1 ;
-(void)setChildren:(NSArray *)arg1 ;
@end

