/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(long long)nextItemCount;
-(void)setNextItemCount:(long long)arg1 ;
-(NSNumber *)preemptiveNowPlayingQueueDetailsTimeOut;
-(void)setPreemptiveNowPlayingQueueDetailsTimeOut:(NSNumber *)arg1 ;
-(long long)previousItemCount;
-(void)setPreviousItemCount:(long long)arg1 ;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
@end

