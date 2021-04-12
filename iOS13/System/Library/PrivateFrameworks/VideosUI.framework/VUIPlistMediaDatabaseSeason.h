/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIPlistMediaDatabaseEntity.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VUIPlistMediaDatabaseShow, NSNumber, NSArray;

@interface VUIPlistMediaDatabaseSeason : VUIPlistMediaDatabaseEntity <NSCopying> {

	VUIPlistMediaDatabaseShow* _show;
	NSNumber* _seasonNumber;
	NSArray* _episodes;

}

@property (assign,nonatomic,__weak) VUIPlistMediaDatabaseShow * show;              //@synthesize show=_show - In the implementation block
@property (nonatomic,copy) NSNumber * seasonNumber;                                //@synthesize seasonNumber=_seasonNumber - In the implementation block
@property (nonatomic,copy) NSArray * episodes;                                     //@synthesize episodes=_episodes - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(VUIPlistMediaDatabaseShow *)show;
-(id)isLocal;
-(void)setShow:(VUIPlistMediaDatabaseShow *)arg1 ;
-(NSNumber *)seasonNumber;
-(void)setSeasonNumber:(NSNumber *)arg1 ;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(NSArray *)episodes;
-(id)initWithDictionary:(id)arg1 show:(id)arg2 ;
-(id)episodeForIdentifier:(id)arg1 ;
-(void)setEpisodes:(NSArray *)arg1 ;
-(id)initWithIdentifier:(id)arg1 show:(id)arg2 ;
@end

