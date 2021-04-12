/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
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
-(void)setInvalidateDelegateOffsetsAndConnections:(BOOL)arg1 ;
-(void)setInvalidateDelegateHidden:(BOOL)arg1 ;
-(void)setInvalidateDelegateMetrics:(BOOL)arg1 ;
-(BOOL)invalidateDelegateHidden;
-(BOOL)invalidateDelegateMetrics;
-(BOOL)invalidateDelegateOffsetsAndConnections;
@end

