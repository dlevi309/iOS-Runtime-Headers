/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaServices/MSVSegmentedCodingPackage.h>

@class MPNowPlayingContentItem, UIImage, NSString, NSDate;

@interface _MPCPlaybackSessionArchive : MSVSegmentedCodingPackage {

	MPNowPlayingContentItem* _contentItem;
	UIImage* _artworkImage;
	NSString* _identifier;
	NSDate* _lastModifiedDate;

}

@property (nonatomic,copy,readonly) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) MPNowPlayingContentItem * contentItem;              //@synthesize contentItem=_contentItem - In the implementation block
@property (nonatomic,copy) UIImage * artworkImage;                             //@synthesize artworkImage=_artworkImage - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate;                 //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
+(id)packageTypeIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(NSString *)identifier;
-(NSDate *)lastModifiedDate;
-(MPNowPlayingContentItem *)contentItem;
-(UIImage *)artworkImage;
-(BOOL)writeWithError:(id*)arg1 ;
-(BOOL)saveWithError:(id*)arg1 ;
-(void)setContentItem:(MPNowPlayingContentItem *)arg1 ;
-(void)setArtworkImage:(UIImage *)arg1 ;
-(id)initWithURL:(id)arg1 identifier:(id)arg2 ;
@end

