/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUNavigationTransition.h>
#import <libobjc.A.dylib/PUOneUpAssetTransition.h>

@class NSString;

@interface PUOneUpAssetNavigationTransition : PUNavigationTransition <PUOneUpAssetTransition>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_animateTransitionWithOperation:(long long)arg1 ;
-(void)animatePushTransition;
-(void)animatePopTransition;
-(void)_prepareViewForTransition;
@end

