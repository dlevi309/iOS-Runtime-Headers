/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/

#import <UserNotificationsServer/UserNotificationsServer-Structs.h>
#import <UserNotificationsServer/UNSAttachmentData.h>
#import <libobjc.A.dylib/UNSAttachmentThumbnailProvider.h>

@class NSString;

@interface UNSMovieAttachmentData : UNSAttachmentData <UNSAttachmentThumbnailProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isFileValid:(id)arg1 ;
+(id)_videoAssetWithURL:(id)arg1 ;
+(id)_videoTrackForAsset:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)sizeForThumbnailOptions:(id)arg1 ;
-(id)thumbnailPNGOfSize:(CGSize)arg1 forThumbnailOptions:(id)arg2 ;
@end

