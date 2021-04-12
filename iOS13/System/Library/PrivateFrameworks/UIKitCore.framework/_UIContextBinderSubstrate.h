/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIContextBinding.h>

@class FBSScene, NSString;

@interface _UIContextBinderSubstrate : NSObject <_UIContextBinding> {

	FBSScene* _scene;

}

@property (nonatomic,readonly) FBSScene * scene;                    //@synthesize scene=_scene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBSScene *)scene;
-(id)initWithScene:(id)arg1 ;
-(void)detachContext:(id)arg1 ;
-(void)attachContext:(id)arg1 ;
@end

