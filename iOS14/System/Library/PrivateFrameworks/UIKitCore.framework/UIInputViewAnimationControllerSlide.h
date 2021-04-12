/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIInputViewAnimationController.h>

@class NSString;

@interface UIInputViewAnimationControllerSlide : NSObject <UIInputViewAnimationController> {

	int _slide;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSlide:(int)arg1 ;
-(void)performAnimationWithHost:(id)arg1 context:(id)arg2 ;
-(void)completeAnimationWithHost:(id)arg1 context:(id)arg2 ;
-(id)placementForSlideStart:(BOOL)arg1 ;
-(id)prepareAnimationWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3 ;
@end

