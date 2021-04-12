/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUDefaultTileTransitionCoordinator.h>

@class PUTileReattachmentContext;

@interface PUDefaultReattachedTileTransitionCoordinator : PUDefaultTileTransitionCoordinator {

	PUTileReattachmentContext* _context;

}

@property (nonatomic,retain) PUTileReattachmentContext * context;              //@synthesize context=_context - In the implementation block
-(PUTileReattachmentContext *)context;
-(id)optionsForAnimatingTileController:(id)arg1 toLayoutInfo:(id)arg2 withAnimationType:(long long)arg3 ;
-(void)setContext:(PUTileReattachmentContext *)arg1 ;
@end

