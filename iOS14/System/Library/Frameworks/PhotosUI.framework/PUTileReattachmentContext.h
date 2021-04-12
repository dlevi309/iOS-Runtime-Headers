/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class NSMapTable;

@interface PUTileReattachmentContext : NSObject {

	BOOL _isZoomingIn;
	BOOL _isTransitioningOverOneUp;
	NSMapTable* __tileControllerVelocities;

}

@property (nonatomic,readonly) NSMapTable * _tileControllerVelocities;                                     //@synthesize _tileControllerVelocities=__tileControllerVelocities - In the implementation block
@property (assign,setter=setZoomingIn:,nonatomic) BOOL isZoomingIn;                                        //@synthesize isZoomingIn=_isZoomingIn - In the implementation block
@property (assign,setter=setTransitioningOverOneUp:,nonatomic) BOOL isTransitioningOverOneUp;              //@synthesize isTransitioningOverOneUp=_isTransitioningOverOneUp - In the implementation block
-(void)setTransitioningOverOneUp:(BOOL)arg1 ;
-(BOOL)isTransitioningOverOneUp;
-(void)setVelocity:(PUDisplayVelocity)arg1 forTileController:(id)arg2 ;
-(PUDisplayVelocity)velocityForTileController:(id)arg1 ;
-(BOOL)isZoomingIn;
-(NSMapTable *)_tileControllerVelocities;
-(void)setZoomingIn:(BOOL)arg1 ;
@end

