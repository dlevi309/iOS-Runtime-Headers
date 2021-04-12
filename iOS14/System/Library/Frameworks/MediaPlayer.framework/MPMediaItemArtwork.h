/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@interface MPMediaItemArtwork : NSObject {

	CGSize _bounds;
	/*^block*/id _requestHandler;

}

@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) CGRect imageCropRect; 
-(CGRect)bounds;
-(id)init;
-(id)initWithImage:(id)arg1 ;
-(id)imageWithSize:(CGSize)arg1 ;
-(id)initWithBoundsSize:(CGSize)arg1 requestHandler:(/*^block*/id)arg2 ;
-(CGRect)imageCropRect;
-(id)jpegDataWithSize:(CGSize)arg1 ;
-(id)pngDataWithSize:(CGSize)arg1 ;
-(id)pngDataFromImage:(id)arg1 ;
@end

