/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, SANPGetNowPlayingQueueDetails;

@interface SANPGetNowPlayingQueueDetailsRemote : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (nonatomic,retain) SANPGetNowPlayingQueueDetails * queueDetails; 
@property (assign,nonatomic) double routeTimeout; 
+(id)getNowPlayingQueueDetailsRemote;
+(id)getNowPlayingQueueDetailsRemoteWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SANPGetNowPlayingQueueDetails *)queueDetails;
-(void)setQueueDetails:(SANPGetNowPlayingQueueDetails *)arg1 ;
-(BOOL)mutatingCommand;
-(double)routeTimeout;
-(void)setRouteTimeout:(double)arg1 ;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
@end

