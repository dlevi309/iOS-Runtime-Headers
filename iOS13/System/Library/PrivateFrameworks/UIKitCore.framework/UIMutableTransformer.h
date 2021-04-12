/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITransformer.h>

@protocol UIMutableTransformerDelegate;
@interface UIMutableTransformer : UITransformer {

	id<UIMutableTransformerDelegate> _delegate;

}

@property (assign,setter=_setDelegate:,nonatomic,__weak) id<UIMutableTransformerDelegate> _delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<UIMutableTransformerDelegate>)_delegate;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_setDelegate:(id)arg1 ;
-(void)_ensureTransformsStructuresExists;
-(void)_updateTransform;
-(void)addTransform:(id)arg1 reason:(id)arg2 ;
-(void)replaceTransform:(id)arg1 withTransform:(id)arg2 reason:(id)arg3 ;
-(void)removeTransform:(id)arg1 ;
-(void)removeAll;
@end

