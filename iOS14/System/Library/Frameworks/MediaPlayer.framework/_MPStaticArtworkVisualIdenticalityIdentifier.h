/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPArtworkDataSourceVisualIdenticality.h>

@class NSString;

@interface _MPStaticArtworkVisualIdenticalityIdentifier : NSObject <MPArtworkDataSourceVisualIdenticality> {

	NSString* _imageArtworkIdentifier;
	NSString* _videoArtworkIdentifier;

}

@property (nonatomic,copy) NSString * imageArtworkIdentifier;              //@synthesize imageArtworkIdentifier=_imageArtworkIdentifier - In the implementation block
@property (nonatomic,copy) NSString * videoArtworkIdentifier;              //@synthesize videoArtworkIdentifier=_videoArtworkIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)imageArtworkIdentifier;
-(id)stringRepresentation;
-(void)setImageArtworkIdentifier:(NSString *)arg1 ;
-(NSString *)videoArtworkIdentifier;
-(void)setVideoArtworkIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

