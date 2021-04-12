/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)days;
-(NSArray *)bundleIDs;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(void)setDays:(long long)arg1 ;
@end

