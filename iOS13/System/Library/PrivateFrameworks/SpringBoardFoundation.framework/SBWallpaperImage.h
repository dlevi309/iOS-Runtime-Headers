/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <UIKitCore/UIImage.h>

@class NSData;

@interface SBWallpaperImage : UIImage {

	NSData* _data;

}

@property (nonatomic,readonly) NSData * data;              //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(id)initWithFlatColor:(id)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 wallpaperData:(id)arg3 ;
-(id)initWithImage:(id)arg1 wallpaperData:(id)arg2 ;
-(id)initWithWallpaperData:(id)arg1 ;
-(id)initWithFlatColor:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
@end

