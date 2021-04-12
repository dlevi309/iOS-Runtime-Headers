/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MRPlayerPath;

@interface MRPlayerPathDictionaryKey : NSObject <NSCopying> {

	MRPlayerPath* _playerPath;

}

@property (nonatomic,readonly) MRPlayerPath * playerPath;              //@synthesize playerPath=_playerPath - In the implementation block
+(id)dictionaryKeyWithPlayerPath:(id)arg1 ;
-(id)initWithPlayerPath:(id)arg1 ;
-(id)description;
-(MRPlayerPath *)playerPath;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

