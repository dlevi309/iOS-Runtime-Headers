/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned)type;
-(NSString *)mimeType;
-(NSData *)imageData;
-(BOOL)hasArtworkData;
-(id)initWithImageData:(id)arg1 mimeType:(id)arg2 ;
-(id)copyImageData;
@end

