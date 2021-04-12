/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@interface MPMediaItemArtwork : NSObject {

	CGSize _bounds;
	/*^block*/id _requestHandler;

}

@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) CGRect imageCropRect; 
-(id)init;
-(CGRect)bounds;
-(id)initWithImage:(id)arg1 ;
-(id)initWithBoundsSize:(CGSize)arg1 requestHandler:(/*^block*/id)arg2 ;
-(id)imageWithSize:(CGSize)arg1 ;
-(CGRect)imageCropRect;
-(id)jpegDataWithSize:(CGSize)arg1 ;
-(id)pngDataWithSize:(CGSize)arg1 ;
-(id)pngDataFromImage:(id)arg1 ;
@end

