/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)mediaItems;
-(void)setMediaItems:(NSArray *)arg1 ;
-(SAMPPlaylist *)playlist;
-(void)setPlaylist:(SAMPPlaylist *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)influencedUserSharedUserId;
-(void)setInfluencedUserSharedUserId:(NSString *)arg1 ;
-(NSString *)insertLocation;
-(void)setInsertLocation:(NSString *)arg1 ;
@end

