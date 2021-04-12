/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSDictionary, NSArray, NSString;

@interface SAAppsGetRestrictedAppsResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSDictionary * appToItsRestrictionsMap; 
@property (nonatomic,copy) NSArray * restrictedApps; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)getRestrictedAppsResponse;
+(id)getRestrictedAppsResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSDictionary *)appToItsRestrictionsMap;
-(void)setAppToItsRestrictionsMap:(NSDictionary *)arg1 ;
-(NSArray *)restrictedApps;
-(void)setRestrictedApps:(NSArray *)arg1 ;
@end

