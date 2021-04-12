/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/


@class AXDragManager;

@interface AXElementActionManager : NSObject {

	BOOL _shouldIncludeMedusaActions;
	AXDragManager* _dragManager;

}

@property (nonatomic,readonly) AXDragManager * dragManager;                //@synthesize dragManager=_dragManager - In the implementation block
@property (nonatomic,readonly) BOOL isDragActive; 
@property (assign,nonatomic) BOOL shouldIncludeMedusaActions;              //@synthesize shouldIncludeMedusaActions=_shouldIncludeMedusaActions - In the implementation block
-(BOOL)shouldIncludeMedusaActions;
-(id)initWithDragServiceName:(id)arg1 ;
-(BOOL)canShowActionsForElement:(id)arg1 ;
-(id)actionsForElement:(id)arg1 ;
-(void)setShouldIncludeMedusaActions:(BOOL)arg1 ;
-(BOOL)isDragActive;
-(AXDragManager *)dragManager;
-(id)initWithDragManager:(id)arg1 ;
-(BOOL)performAction:(id)arg1 ;
@end

