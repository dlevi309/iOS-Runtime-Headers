/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithURL:(id)arg1 ;
-(NSDate *)lastModifiedDate;
-(void)setContentItem:(MPNowPlayingContentItem *)arg1 ;
-(id)description;
-(MPNowPlayingContentItem *)contentItem;
-(id)initWithURL:(id)arg1 identifier:(id)arg2 ;
-(BOOL)saveWithError:(id*)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(void)setArtworkImage:(UIImage *)arg1 ;
-(UIImage *)artworkImage;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)writeWithError:(id*)arg1 ;
@end

