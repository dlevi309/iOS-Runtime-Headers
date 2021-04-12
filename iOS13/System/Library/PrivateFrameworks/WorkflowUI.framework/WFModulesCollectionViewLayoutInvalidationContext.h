/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UICollectionViewLayoutInvalidationContext.h>

@interface WFModulesCollectionViewLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	BOOL _invalidateDelegateHidden;
	BOOL _invalidateDelegateMetrics;
	BOOL _invalidateDelegateOffsetsAndConnections;

}

@property (assign,nonatomic) BOOL invalidateDelegateHidden;                             //@synthesize invalidateDelegateHidden=_invalidateDelegateHidden - In the implementation block
@property (assign,nonatomic) BOOL invalidateDelegateMetrics;                            //@synthesize invalidateDelegateMetrics=_invalidateDelegateMetrics - In the implementation block
@property (assign,nonatomic) BOOL invalidateDelegateOffsetsAndConnections;              //@synthesize invalidateDelegateOffsetsAndConnections=_invalidateDelegateOffsetsAndConnections - In the implementation block
-(id)init;
-(BOOL)invalidateDelegateHidden;
-(void)setInvalidateDelegateHidden:(BOOL)arg1 ;
-(BOOL)invalidateDelegateMetrics;
-(void)setInvalidateDelegateMetrics:(BOOL)arg1 ;
-(BOOL)invalidateDelegateOffsetsAndConnections;
-(void)setInvalidateDelegateOffsetsAndConnections:(BOOL)arg1 ;
@end

