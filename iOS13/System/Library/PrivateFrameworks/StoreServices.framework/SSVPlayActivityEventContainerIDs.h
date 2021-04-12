/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SSVPlayActivityEventContainerIDs : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding> {

	long long _adamID;
	NSString* _cloudAlbumID;
	unsigned long long _cloudPlaylistID;
	NSString* _globalPlaylistID;
	NSString* _playlistVersionHash;
	long long _stationID;
	NSString* _stationHash;
	NSString* _stationStringID;

}

@property (nonatomic,readonly) long long adamID;                                 //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,copy,readonly) NSString * cloudAlbumID;                     //@synthesize cloudAlbumID=_cloudAlbumID - In the implementation block
@property (nonatomic,readonly) unsigned long long cloudPlaylistID;               //@synthesize cloudPlaylistID=_cloudPlaylistID - In the implementation block
@property (nonatomic,copy,readonly) NSString * globalPlaylistID;                 //@synthesize globalPlaylistID=_globalPlaylistID - In the implementation block
@property (nonatomic,copy,readonly) NSString * playlistVersionHash;              //@synthesize playlistVersionHash=_playlistVersionHash - In the implementation block
@property (nonatomic,copy,readonly) NSString * stationHash;                      //@synthesize stationHash=_stationHash - In the implementation block
@property (nonatomic,copy,readonly) NSString * stationStringID;                  //@synthesize stationStringID=_stationStringID - In the implementation block
@property (nonatomic,readonly) long long stationID;                              //@synthesize stationID=_stationID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)stationID;
-(long long)adamID;
-(NSString *)stationHash;
-(NSString *)stationStringID;
-(NSString *)cloudAlbumID;
-(NSString *)globalPlaylistID;
-(id)_copyWithClass:(Class)arg1 ;
-(NSString *)playlistVersionHash;
-(unsigned long long)cloudPlaylistID;
@end

