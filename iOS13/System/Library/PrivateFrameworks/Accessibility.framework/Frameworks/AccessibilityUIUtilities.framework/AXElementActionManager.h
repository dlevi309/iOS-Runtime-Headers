/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/


@class AXDragManager;

@interface AXElementActionManager : NSObject {

	BOOL _shouldIncludeMedusaActions;
	AXDragManager* _dragManager;

}

@property (nonatomic,readonly) AXDragManager * dragManager;                //@synthesize dragManager=_dragManager - In the implementation block
@property (nonatomic,readonly) BOOL isDragActive; 
@property (assign,nonatomic) BOOL shouldIncludeMedusaActions;              //@synthesize shouldIncludeMedusaActions=_shouldIncludeMedusaActions - In the implementation block
-(BOOL)performAction:(id)arg1 ;
-(AXDragManager *)dragManager;
-(id)initWithDragManager:(id)arg1 ;
-(BOOL)isDragActive;
-(BOOL)shouldIncludeMedusaActions;
-(id)initWithDragServiceName:(id)arg1 ;
-(BOOL)canShowActionsForElement:(id)arg1 ;
-(id)actionsForElement:(id)arg1 ;
-(void)setShouldIncludeMedusaActions:(BOOL)arg1 ;
@end

