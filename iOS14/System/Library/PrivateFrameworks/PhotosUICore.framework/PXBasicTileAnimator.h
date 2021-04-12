/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXTileAnimator.h>

@class NSString;

@interface PXBasicTileAnimator : NSObject <PXTileAnimator>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)suspendAnimationsForTile:(id)arg1 ;
-(void)resumeAnimationsForTile:(id)arg1 ;
-(void)prepareTile:(id)arg1 withGeometry:(PXTileGeometry*)arg2 userData:(id)arg3 ;
-(void)animateTile:(id)arg1 toGeometry:(PXTileGeometry*)arg2 userData:(id)arg3 withOptions:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

