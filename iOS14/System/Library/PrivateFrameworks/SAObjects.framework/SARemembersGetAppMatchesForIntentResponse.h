/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray;

@interface SARemembersGetAppMatchesForIntentResponse : SABaseCommand <SAServerBoundCommand, SAAceSerializable>

@property (nonatomic,copy) NSString * jsonMatchSignals; 
@property (nonatomic,copy) NSString * matchStatus; 
@property (nonatomic,copy) NSArray * matchingBundleIDs; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getAppMatchesForIntentResponse;
+(id)getAppMatchesForIntentResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)matchStatus;
-(NSString *)jsonMatchSignals;
-(void)setJsonMatchSignals:(NSString *)arg1 ;
-(void)setMatchStatus:(NSString *)arg1 ;
-(NSArray *)matchingBundleIDs;
-(void)setMatchingBundleIDs:(NSArray *)arg1 ;
@end

