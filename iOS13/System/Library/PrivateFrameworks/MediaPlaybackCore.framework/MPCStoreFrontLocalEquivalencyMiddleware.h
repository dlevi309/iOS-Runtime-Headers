/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/MPCPlayerResponseBuilder.h>
#import <libobjc.A.dylib/_MPCStateDumpPropertyListTransformable.h>
#import <libobjc.A.dylib/MPMiddleware.h>

@class NSArray, MPModelGenericObject, NSIndexPath, NSString;

@interface MPCStoreFrontLocalEquivalencyMiddleware : NSObject <MPCPlayerResponseBuilder, _MPCStateDumpPropertyListTransformable, MPMiddleware> {

	NSArray* _invalidationObservers;
	MPModelGenericObject* _overridePlayingItem;
	NSIndexPath* _playingItemIndexPath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MPModelGenericObject * overridePlayingItem;              //@synthesize overridePlayingItem=_overridePlayingItem - In the implementation block
@property (nonatomic,copy) NSIndexPath * playingItemIndexPath;                        //@synthesize playingItemIndexPath=_playingItemIndexPath - In the implementation block
@property (nonatomic,retain) NSArray * invalidationObservers;                         //@synthesize invalidationObservers=_invalidationObservers - In the implementation block
-(id)_stateDumpObject;
-(NSArray *)invalidationObservers;
-(id)operationsForRequest:(id)arg1 ;
-(void)setInvalidationObservers:(NSArray *)arg1 ;
-(NSIndexPath *)playingItemIndexPath;
-(void)setOverridePlayingItem:(MPModelGenericObject *)arg1 ;
-(void)setPlayingItemIndexPath:(NSIndexPath *)arg1 ;
-(MPModelGenericObject *)overridePlayingItem;
-(id)playerModelObject:(id)arg1 propertySet:(id)arg2 atIndexPath:(id)arg3 chain:(id)arg4 ;
-(id)operationsForPlayerRequest:(id)arg1 ;
@end

