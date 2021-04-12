/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

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
-(id)operationsForPlayerRequest:(id)arg1 ;
-(id)playerVideoView:(id)arg1 chain:(id)arg2 ;
-(void)setInvalidationObservers:(NSArray *)arg1 ;
-(NSArray *)invalidationObservers;
-(id)_stateDumpObject;
-(id)operationsForRequest:(id)arg1 ;
-(void)setPlaybackEngine:(MPCPlaybackEngine *)arg1 ;
-(id)videoOutput:(id)arg1 chain:(id)arg2 ;
-(MPCPlaybackEngine *)playbackEngine;
@end

