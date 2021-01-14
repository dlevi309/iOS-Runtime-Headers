/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

