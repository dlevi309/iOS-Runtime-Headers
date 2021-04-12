/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRNowPlayingArtwork.h>

@class NSData, NSString;

@interface MRNowPlayingArtworkImage : MRNowPlayingArtwork {

	NSData* _imageData;
	NSString* _mimeType;

}

@property (nonatomic,copy,readonly) NSData * imageData;               //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,copy,readonly) NSString * mimeType;              //@synthesize mimeType=_mimeType - In the implementation block
-(NSString *)mimeType;
-(id)description;
-(id)copyImageData;
-(id)initWithImageData:(id)arg1 mimeType:(id)arg2 ;
-(NSData *)imageData;
-(unsigned)type;
-(BOOL)hasArtworkData;
-(BOOL)isEqual:(id)arg1 ;
@end

