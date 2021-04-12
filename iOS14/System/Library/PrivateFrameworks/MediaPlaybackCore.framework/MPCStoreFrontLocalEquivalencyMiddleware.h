/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)operationsForPlayerRequest:(id)arg1 ;
-(void)setInvalidationObservers:(NSArray *)arg1 ;
-(NSArray *)invalidationObservers;
-(void)setPlayingItemIndexPath:(NSIndexPath *)arg1 ;
-(id)_stateDumpObject;
-(id)operationsForRequest:(id)arg1 ;
-(MPModelGenericObject *)overridePlayingItem;
-(NSIndexPath *)playingItemIndexPath;
-(id)playerModelObject:(id)arg1 propertySet:(id)arg2 atIndexPath:(id)arg3 chain:(id)arg4 ;
-(void)setOverridePlayingItem:(MPModelGenericObject *)arg1 ;
@end

