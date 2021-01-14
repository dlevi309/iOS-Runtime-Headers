/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlaybackCore/MPCPlaybackDelegationProperties.h>

@class NSString, MPCPrivateListeningStateSource, NSTimeZone;

@interface MPCMutablePlaybackDelegationProperties : MPCPlaybackDelegationProperties

@property (assign,nonatomic) unsigned long long storeAccountID; 
@property (nonatomic,copy) NSString * deviceGUID; 
@property (nonatomic,copy) NSString * deviceName; 
@property (nonatomic,copy) MPCPrivateListeningStateSource * privateListeningStateSource; 
@property (assign,nonatomic) long long systemReleaseType; 
@property (nonatomic,copy) NSString * requestUserAgent; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setStoreAccountID:(unsigned long long)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setDeviceGUID:(NSString *)arg1 ;
-(void)setSystemReleaseType:(long long)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPrivateListeningStateSource:(MPCPrivateListeningStateSource *)arg1 ;
-(void)setRequestUserAgent:(NSString *)arg1 ;
@end

