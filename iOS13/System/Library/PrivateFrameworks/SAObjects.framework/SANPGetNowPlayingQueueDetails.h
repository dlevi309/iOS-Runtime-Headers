/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSNumber;

@interface SANPGetNowPlayingQueueDetails : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (assign,nonatomic) long long nextItemCount; 
@property (nonatomic,copy) NSNumber * preemptiveNowPlayingQueueDetailsTimeOut; 
@property (assign,nonatomic) long long previousItemCount; 
+(id)getNowPlayingQueueDetails;
+(id)getNowPlayingQueueDetailsWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(long long)nextItemCount;
-(void)setNextItemCount:(long long)arg1 ;
-(NSNumber *)preemptiveNowPlayingQueueDetailsTimeOut;
-(void)setPreemptiveNowPlayingQueueDetailsTimeOut:(NSNumber *)arg1 ;
-(long long)previousItemCount;
-(void)setPreviousItemCount:(long long)arg1 ;
@end

