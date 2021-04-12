/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSSet;

@interface CLSNowPlayingStreamEventMetadata : NSObject <NSCopying> {

	NSString* _album;
	NSString* _artist;
	NSString* _title;
	NSNumber* _durationInSeconds;
	NSSet* _genres;
	NSString* _source;

}

@property (nonatomic,copy) NSString * album;                            //@synthesize album=_album - In the implementation block
@property (nonatomic,copy) NSString * artist;                           //@synthesize artist=_artist - In the implementation block
@property (nonatomic,copy) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSNumber * durationInSeconds;              //@synthesize durationInSeconds=_durationInSeconds - In the implementation block
@property (nonatomic,copy) NSSet * genres;                              //@synthesize genres=_genres - In the implementation block
@property (nonatomic,copy) NSString * source;                           //@synthesize source=_source - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)album;
-(NSString *)artist;
-(void)setAlbum:(NSString *)arg1 ;
-(void)setArtist:(NSString *)arg1 ;
-(NSNumber *)durationInSeconds;
-(NSSet *)genres;
-(void)setGenres:(NSSet *)arg1 ;
-(BOOL)isEqualToEventMetadata:(id)arg1 ;
-(void)setDurationInSeconds:(NSNumber *)arg1 ;
-(id)initWithDuetKnowledgeEvent:(id)arg1 ;
@end

