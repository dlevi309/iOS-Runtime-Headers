/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSVPlayActivityEventContainerIDs.h>

@class NSString;

@interface SSVMutablePlayActivityEventContainerIDs : SSVPlayActivityEventContainerIDs

@property (assign,nonatomic) long long adamID; 
@property (nonatomic,copy) NSString * cloudAlbumID; 
@property (assign,nonatomic) unsigned long long cloudPlaylistID; 
@property (nonatomic,copy) NSString * globalPlaylistID; 
@property (nonatomic,copy) NSString * playlistVersionHash; 
@property (nonatomic,copy) NSString * stationHash; 
@property (nonatomic,copy) NSString * stationStringID; 
@property (assign,nonatomic) long long stationID; 
-(void)setGlobalPlaylistID:(NSString *)arg1 ;
-(void)setStationStringID:(NSString *)arg1 ;
-(void)setAdamID:(long long)arg1 ;
-(void)setStationHash:(NSString *)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(void)setCloudAlbumID:(NSString *)arg1 ;
-(void)setPlaylistVersionHash:(NSString *)arg1 ;
-(void)setCloudPlaylistID:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

