/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MPInvalidationFutureToken.h>

@class MPInvalidationFuture, NSString;

@interface _MPFutureInvalidationToken : NSObject <NSCopying, MPInvalidationFutureToken> {

	MPInvalidationFuture* _future;

}

@property (nonatomic,retain) MPInvalidationFuture * future;              //@synthesize future=_future - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(MPInvalidationFuture *)future;
-(void)setFuture:(MPInvalidationFuture *)arg1 ;
@end

