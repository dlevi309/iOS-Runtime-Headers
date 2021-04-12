/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MPPlaybackArchiveConfiguration : NSObject <NSSecureCoding> {

	CGSize _preferredArtworkSize;

}

@property (assign,nonatomic) CGSize preferredArtworkSize;              //@synthesize preferredArtworkSize=_preferredArtworkSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithPreferredArtworkSize:(CGSize)arg1 ;
-(CGSize)preferredArtworkSize;
-(void)setPreferredArtworkSize:(CGSize)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

