/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface ML3AlbumGroupingIdentifier : NSObject <NSCopying> {

	BOOL _compilation;
	long long _albumArtistPersistentID;
	NSData* _groupingKey;
	NSString* _feedURL;
	long long _seasonNumber;

}

@property (nonatomic,readonly) long long albumArtistPersistentID;              //@synthesize albumArtistPersistentID=_albumArtistPersistentID - In the implementation block
@property (nonatomic,readonly) NSData * groupingKey;                           //@synthesize groupingKey=_groupingKey - In the implementation block
@property (nonatomic,readonly) NSString * feedURL;                             //@synthesize feedURL=_feedURL - In the implementation block
@property (nonatomic,readonly) long long seasonNumber;                         //@synthesize seasonNumber=_seasonNumber - In the implementation block
@property (nonatomic,readonly) BOOL compilation;                               //@synthesize compilation=_compilation - In the implementation block
@property (nonatomic,readonly) NSData * keyValue; 
-(long long)seasonNumber;
-(id)description;
-(NSString *)feedURL;
-(long long)albumArtistPersistentID;
-(unsigned long long)hash;
-(NSData *)keyValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)compilation;
-(id)initWithAlbumArtistPersistentID:(long long)arg1 groupingKey:(id)arg2 feedURL:(id)arg3 seasonNumber:(long long)arg4 compilation:(BOOL)arg5 ;
-(NSData *)groupingKey;
@end

