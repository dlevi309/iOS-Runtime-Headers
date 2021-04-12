/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPCFuture;

@interface MPCFutureInvalidationToken : NSObject <NSCopying> {

	MPCFuture* _future;

}

@property (nonatomic,retain) MPCFuture * future;              //@synthesize future=_future - In the implementation block
-(MPCFuture *)future;
-(void)setFuture:(MPCFuture *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

