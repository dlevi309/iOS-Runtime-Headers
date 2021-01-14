/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)artist;
-(void)setTitle:(NSString *)arg1 ;
-(NSSet *)genres;
-(void)setSource:(NSString *)arg1 ;
-(BOOL)isEqualToEventMetadata:(id)arg1 ;
-(id)description;
-(NSNumber *)durationInSeconds;
-(void)setAlbum:(NSString *)arg1 ;
-(NSString *)album;
-(unsigned long long)hash;
-(void)setGenres:(NSSet *)arg1 ;
-(void)setArtist:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)source;
-(void)setDurationInSeconds:(NSNumber *)arg1 ;
-(id)initWithDuetKnowledgeEvent:(id)arg1 ;
@end

