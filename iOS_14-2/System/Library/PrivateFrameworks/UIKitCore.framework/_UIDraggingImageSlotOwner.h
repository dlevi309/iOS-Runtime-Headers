/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray, _UIDragManager;

@interface _UIDraggingImageSlotOwner : NSObject {

	NSMutableArray* _usedSlotIDs;
	_UIDragManager* _dragManager;

}

@property (nonatomic,__weak,readonly) _UIDragManager * dragManager;              //@synthesize dragManager=_dragManager - In the implementation block
-(_UIDragManager *)dragManager;
-(unsigned)uploadImage:(CGImageRef)arg1 ;
-(id)initWithDragManager:(id)arg1 ;
-(void)dealloc;
@end

