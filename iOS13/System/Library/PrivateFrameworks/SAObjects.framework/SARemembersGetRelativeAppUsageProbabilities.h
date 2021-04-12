/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SARemembersGetRelativeAppUsageProbabilities : SABaseClientBoundCommand <SAAceSerializable>

@property (nonatomic,copy) NSArray * bundleIDs; 
@property (assign,nonatomic) long long days; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getRelativeAppUsageProbabilities;
+(id)getRelativeAppUsageProbabilitiesWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)bundleIDs;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(long long)days;
-(id)encodedClassName;
-(void)setDays:(long long)arg1 ;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
@end

