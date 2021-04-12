/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(SAMPMediaItem *)mediaItem;
-(void)setMediaItem:(SAMPMediaItem *)arg1 ;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(NSNumber *)startPlaying;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(void)setStartPlaying:(NSNumber *)arg1 ;
-(NSString *)upNextQueueInsertLocation;
-(void)setUpNextQueueInsertLocation:(NSString *)arg1 ;
@end

