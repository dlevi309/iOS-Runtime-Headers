/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPCFuture;

@interface MPCFutureInvalidationToken : NSObject <NSCopying> {

	MPCFuture* _future;

}

@property (nonatomic,retain) MPCFuture * future;              //@synthesize future=_future - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(MPCFuture *)future;
-(void)setFuture:(MPCFuture *)arg1 ;
@end

