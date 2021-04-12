/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)mutatingCommand;
-(NSString *)jsonEncodedIntent;
-(void)setJsonEncodedIntent:(NSString *)arg1 ;
-(NSArray *)candidateBundleIDs;
-(void)setCandidateBundleIDs:(NSArray *)arg1 ;
-(SAIntentGroupProtobufMessage *)protoEncodedIntent;
-(void)setProtoEncodedIntent:(SAIntentGroupProtobufMessage *)arg1 ;
@end

