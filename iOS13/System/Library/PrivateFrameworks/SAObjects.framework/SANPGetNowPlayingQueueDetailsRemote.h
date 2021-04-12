/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(double)routeTimeout;
-(void)setRouteTimeout:(double)arg1 ;
-(SANPGetNowPlayingQueueDetails *)queueDetails;
-(void)setQueueDetails:(SANPGetNowPlayingQueueDetails *)arg1 ;
@end

