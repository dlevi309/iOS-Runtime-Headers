/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithPlayer:(OpaqueFigPlayerRef)arg1 ;
-(void)removeReferenceToPlayer;
-(void)setBaseDisplayList:(id)arg1 ;
-(void)updatePlayerDisplayList;
@end

