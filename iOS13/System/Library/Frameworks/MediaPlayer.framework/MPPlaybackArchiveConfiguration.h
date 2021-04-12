/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MPPlaybackArchiveConfiguration : NSObject <NSSecureCoding> {

	CGSize _preferredArtworkSize;

}

@property (assign,nonatomic) CGSize preferredArtworkSize;              //@synthesize preferredArtworkSize=_preferredArtworkSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPreferredArtworkSize:(CGSize)arg1 ;
-(CGSize)preferredArtworkSize;
-(void)setPreferredArtworkSize:(CGSize)arg1 ;
@end

