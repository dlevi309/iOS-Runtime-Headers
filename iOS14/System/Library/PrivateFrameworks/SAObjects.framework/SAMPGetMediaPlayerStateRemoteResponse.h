/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSDictionary, NSString;

@interface SAMPGetMediaPlayerStateRemoteResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSDictionary * routeResponses; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getMediaPlayerStateRemoteResponse;
+(id)getMediaPlayerStateRemoteResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSDictionary *)routeResponses;
-(void)setRouteResponses:(NSDictionary *)arg1 ;
@end

