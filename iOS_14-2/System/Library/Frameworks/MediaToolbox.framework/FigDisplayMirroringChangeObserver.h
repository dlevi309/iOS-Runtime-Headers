/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/


@protocol OS_dispatch_queue;
#import <MediaToolbox/MediaToolbox-Structs.h>
@class NSObject, NSMutableSet, NSArray;

@interface FigDisplayMirroringChangeObserver : NSObject {

	OpaqueFigPlayerRef _player;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableSet* _clonedDisplays;
	NSMutableSet* _cloningSupportedDisplays;
	NSArray* _baseDisplayList;
	BOOL _needToRemoveObserversOnCADisplays;

}
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)updatePlayerDisplayList;
-(id)initWithPlayer:(OpaqueFigPlayerRef)arg1 ;
-(void)removeObserversOnCADisplays;
-(void)setBaseDisplayList:(id)arg1 ;
-(void)removeReferenceToPlayer;
-(void)dealloc;
@end

