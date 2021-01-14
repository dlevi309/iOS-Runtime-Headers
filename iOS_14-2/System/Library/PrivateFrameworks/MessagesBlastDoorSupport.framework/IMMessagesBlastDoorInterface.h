/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessagesBlastDoorSupport.framework/MessagesBlastDoorSupport
*/


#import <MessagesBlastDoorSupport/MessagesBlastDoorSupport-Structs.h>
@interface IMMessagesBlastDoorInterface : NSObject {

	 bd;

}
+(BOOL)supportsFeature:(id)arg1 ;
-(id)init;
-(void)generatePreviewforAttachmentWithfileURL:(id)arg1 maxPixelDimension:(float)arg2 scale:(float)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)defuseData:(id)arg1 forPreviewType:(unsigned char)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)generateMoviePreviewForAttachmentWithFileURL:(id)arg1 maxPixelDimension:(float)arg2 minThumbnailPxSize:(CGSize)arg3 scale:(float)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)defuseBalloonPluginPayload:(id)arg1 withIdentifier:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)diffuseTopLevelDictionary:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
@end

