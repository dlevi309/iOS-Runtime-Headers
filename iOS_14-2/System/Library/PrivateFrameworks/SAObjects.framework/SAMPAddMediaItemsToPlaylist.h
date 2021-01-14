/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSArray, SAMPPlaylist;

@interface SAMPAddMediaItemsToPlaylist : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * influencedUserSharedUserId; 
@property (nonatomic,copy) NSString * insertLocation; 
@property (nonatomic,copy) NSArray * mediaItems; 
@property (nonatomic,retain) SAMPPlaylist * playlist; 
+(id)addMediaItemsToPlaylist;
+(id)addMediaItemsToPlaylistWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)insertLocation;
-(void)setInsertLocation:(NSString *)arg1 ;
-(SAMPPlaylist *)playlist;
-(NSString *)influencedUserSharedUserId;
-(void)setInfluencedUserSharedUserId:(NSString *)arg1 ;
-(NSArray *)mediaItems;
-(void)setMediaItems:(NSArray *)arg1 ;
-(void)setPlaylist:(SAMPPlaylist *)arg1 ;
@end

