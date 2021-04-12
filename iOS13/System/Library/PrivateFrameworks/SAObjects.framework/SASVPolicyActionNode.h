/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSArray *)children;
-(void)setChildren:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSString *)confirmationType;
-(void)setConfirmationType:(NSString *)arg1 ;
-(SASVSpeechMetadata *)speechMetadata;
-(void)setSpeechMetadata:(SASVSpeechMetadata *)arg1 ;
@end

