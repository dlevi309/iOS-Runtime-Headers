/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@interface IMAttachmentBlastdoor : NSObject
+(void)generateMoviePreview:(id)arg1 maxPxWidth:(double)arg2 minThumbnailPxSize:(CGSize)arg3 scale:(double)arg4 withCompletionBlock:(/*^block*/id)arg5 ;
+(void)generatePreview:(id)arg1 maxPxWidth:(double)arg2 scale:(double)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
+(void)sendData:(id)arg1 forPreviewType:(unsigned char)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
+(void)sendBalloonPluginPayloadData:(id)arg1 withBundleIdentifier:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(id)blastdoorInterface;
+(id)logger;
+(BOOL)supportsFeature:(id)arg1 ;
@end

