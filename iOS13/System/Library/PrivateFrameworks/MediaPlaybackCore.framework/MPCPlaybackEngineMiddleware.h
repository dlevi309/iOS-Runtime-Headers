/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/MPCPlayerResponseBuilder.h>
#import <libobjc.A.dylib/_MPCStateDumpPropertyListTransformable.h>
#import <libobjc.A.dylib/MPMiddleware.h>

@class NSArray, MPCPlaybackEngine, NSString;

@interface MPCPlaybackEngineMiddleware : NSObject <MPCPlayerResponseBuilder, _MPCStateDumpPropertyListTransformable, MPMiddleware> {

	NSArray* _invalidationObservers;
	MPCPlaybackEngine* _playbackEngine;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MPCPlaybackEngine * playbackEngine;              //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (nonatomic,retain) NSArray * invalidationObservers;                 //@synthesize invalidationObservers=_invalidationObservers - In the implementation block
-(id)_stateDumpObject;
-(NSArray *)invalidationObservers;
-(id)operationsForRequest:(id)arg1 ;
-(void)setInvalidationObservers:(NSArray *)arg1 ;
-(MPCPlaybackEngine *)playbackEngine;
-(void)setPlaybackEngine:(MPCPlaybackEngine *)arg1 ;
-(id)playerVideoView:(id)arg1 chain:(id)arg2 ;
-(id)operationsForPlayerRequest:(id)arg1 ;
@end

