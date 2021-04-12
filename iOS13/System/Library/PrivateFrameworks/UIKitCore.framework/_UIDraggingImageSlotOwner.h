/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray, _UIDragManager;

@interface _UIDraggingImageSlotOwner : NSObject {

	NSMutableArray* _usedSlotIDs;
	_UIDragManager* _dragManager;

}

@property (nonatomic,__weak,readonly) _UIDragManager * dragManager;              //@synthesize dragManager=_dragManager - In the implementation block
-(void)dealloc;
-(_UIDragManager *)dragManager;
-(unsigned)uploadImage:(CGImageRef)arg1 ;
-(id)initWithDragManager:(id)arg1 ;
@end

