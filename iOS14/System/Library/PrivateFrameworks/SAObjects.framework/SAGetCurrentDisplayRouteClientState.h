/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAGetSingleClientState.h>

@class SACurrentDisplayRouteClientState, NSString, NSArray;

@interface SAGetCurrentDisplayRouteClientState : SABaseClientBoundCommand <SAGetSingleClientState>

@property (nonatomic,retain) SACurrentDisplayRouteClientState * clientState; 
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getCurrentDisplayRouteClientState;
+(id)getCurrentDisplayRouteClientStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setClientState:(SACurrentDisplayRouteClientState *)arg1 ;
-(SACurrentDisplayRouteClientState *)clientState;
-(BOOL)mutatingCommand;
@end

