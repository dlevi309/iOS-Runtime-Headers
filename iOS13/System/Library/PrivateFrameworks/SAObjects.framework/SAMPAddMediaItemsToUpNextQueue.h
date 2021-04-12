/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString, SAMPCollection;

@interface SAMPAddMediaItemsToUpNextQueue : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (nonatomic,copy) NSString * insertLocation; 
@property (nonatomic,retain) SAMPCollection * mediaCollection; 
@property (nonatomic,copy) NSString * musicAccountSharedUserId; 
@property (nonatomic,copy) NSString * speakerSharedUserId; 
+(id)addMediaItemsToUpNextQueue;
+(id)addMediaItemsToUpNextQueueWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)insertLocation;
-(void)setInsertLocation:(NSString *)arg1 ;
-(SAMPCollection *)mediaCollection;
-(void)setMediaCollection:(SAMPCollection *)arg1 ;
-(NSString *)musicAccountSharedUserId;
-(void)setMusicAccountSharedUserId:(NSString *)arg1 ;
-(NSString *)speakerSharedUserId;
-(void)setSpeakerSharedUserId:(NSString *)arg1 ;
@end

