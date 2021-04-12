/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString, SAIntentGroupProtobufMessage;

@interface SARemembersGetAppMatchesForIntent : SABaseClientBoundCommand <SAAceSerializable>

@property (nonatomic,copy) NSArray * candidateBundleIDs; 
@property (nonatomic,copy) NSString * jsonEncodedIntent; 
@property (nonatomic,retain) SAIntentGroupProtobufMessage * protoEncodedIntent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getAppMatchesForIntent;
+(id)getAppMatchesForIntentWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)jsonEncodedIntent;
-(void)setJsonEncodedIntent:(NSString *)arg1 ;
-(NSArray *)candidateBundleIDs;
-(void)setCandidateBundleIDs:(NSArray *)arg1 ;
-(SAIntentGroupProtobufMessage *)protoEncodedIntent;
-(void)setProtoEncodedIntent:(SAIntentGroupProtobufMessage *)arg1 ;
-(BOOL)mutatingCommand;
@end

