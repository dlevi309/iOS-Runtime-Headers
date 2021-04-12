/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITransformer.h>

@protocol UIMutableTransformerDelegate;
@interface UIMutableTransformer : UITransformer {

	id<UIMutableTransformerDelegate> _delegate;

}

@property (assign,setter=_setDelegate:,nonatomic,__weak) id<UIMutableTransformerDelegate> _delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<UIMutableTransformerDelegate>)_delegate;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_setDelegate:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addTransform:(id)arg1 reason:(id)arg2 ;
-(void)_ensureTransformsStructuresExists;
-(void)_updateTransform;
-(void)replaceTransform:(id)arg1 withTransform:(id)arg2 reason:(id)arg3 ;
-(void)removeTransform:(id)arg1 ;
-(void)removeAll;
@end

