/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAppBundleID:(NSString *)arg1 ;
-(void)setOrigin:(void*)arg1 ;
-(void)setPlayerID:(NSString *)arg1 ;
-(void)setOutputDeviceUIDs:(NSArray *)arg1 ;
-(void)setHashedOutputDeviceUIDs:(NSArray *)arg1 ;
-(void)setOutputGroups:(NSArray *)arg1 ;
-(void)setOutputGroupID:(NSString *)arg1 ;
-(void)setSingleGroup:(BOOL)arg1 ;
@end

