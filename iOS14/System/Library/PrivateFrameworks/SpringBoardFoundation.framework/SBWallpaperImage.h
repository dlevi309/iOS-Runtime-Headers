/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <UIKitCore/UIImage.h>

@class NSURL;

@interface SBWallpaperImage : UIImage {

	NSURL* _wallpaperFileURL;

}

@property (nonatomic,copy,readonly) NSURL * wallpaperFileURL;              //@synthesize wallpaperFileURL=_wallpaperFileURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(long long)arg3 wallpaperFileURL:(id)arg4 ;
-(NSURL *)wallpaperFileURL;
-(id)initWithFlatColor:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFlatColor:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

