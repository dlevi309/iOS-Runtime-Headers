/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MPCAssistantRemoteControlDestination.h>

@class NSString, NSArray;

@interface MPCAssistantMutableRemoteControlDestination : MPCAssistantRemoteControlDestination

@property (nonatomic,copy) NSString * appBundleID; 
@property (nonatomic,copy) NSString * playerID; 
@property (assign,nonatomic) void* origin; 
@property (nonatomic,copy) NSArray * outputDeviceUIDs; 
@property (nonatomic,copy) NSArray * hashedOutputDeviceUIDs; 
@property (nonatomic,copy) NSArray * outputGroups; 
@property (nonatomic,copy) NSString * outputGroupID; 
@property (assign,nonatomic) BOOL singleGroup; 
-(void)setOrigin:(void*)arg1 ;
-(void)setAppBundleID:(NSString *)arg1 ;
-(void)setOutputDeviceUIDs:(NSArray *)arg1 ;
-(void)setHashedOutputDeviceUIDs:(NSArray *)arg1 ;
-(void)setPlayerID:(NSString *)arg1 ;
-(void)setOutputGroups:(NSArray *)arg1 ;
-(void)setOutputGroupID:(NSString *)arg1 ;
-(void)setSingleGroup:(BOOL)arg1 ;
@end

