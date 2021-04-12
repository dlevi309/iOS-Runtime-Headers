/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRNowPlayingPlayerPathProtobuf;

@interface MRPlayerPathDictionaryKey : NSObject <NSCopying> {

	_MRNowPlayingPlayerPathProtobuf* _playerPath;

}

@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath;              //@synthesize playerPath=_playerPath - In the implementation block
+(id)dictionaryKeyWithPlayerPath:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(id)initWithPlayerPath:(id)arg1 ;
@end

