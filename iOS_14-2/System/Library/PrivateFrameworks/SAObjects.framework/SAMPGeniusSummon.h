/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, SAMPMediaItem, NSNumber, NSString;

@interface SAMPGeniusSummon : SADomainCommand

@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (nonatomic,retain) SAMPMediaItem * mediaItem; 
@property (nonatomic,copy) NSNumber * startPlaying; 
@property (nonatomic,copy) NSString * upNextQueueInsertLocation; 
+(id)geniusSummon;
+(id)geniusSummonWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(void)setMediaItem:(SAMPMediaItem *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAMPMediaItem *)mediaItem;
-(BOOL)mutatingCommand;
-(NSNumber *)startPlaying;
-(void)setStartPlaying:(NSNumber *)arg1 ;
-(NSString *)upNextQueueInsertLocation;
-(void)setUpNextQueueInsertLocation:(NSString *)arg1 ;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
@end

