/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@protocol WFComponentNavigationContext;
@class WFParameterEditorHostingCell, WFModuleAppearance, UITraitCollection;

@interface WFParameterEditorHostingCellContext : NSObject {

	id<WFComponentNavigationContext> _navigationContext;
	WFParameterEditorHostingCell* _cell;
	WFModuleAppearance* _appearance;
	UITraitCollection* _traitCollection;

}

@property (nonatomic,retain) id<WFComponentNavigationContext> navigationContext;              //@synthesize navigationContext=_navigationContext - In the implementation block
@property (assign,nonatomic,__weak) WFParameterEditorHostingCell * cell;                      //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) WFModuleAppearance * appearance;                                 //@synthesize appearance=_appearance - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;                             //@synthesize traitCollection=_traitCollection - In the implementation block
-(WFParameterEditorHostingCell *)cell;
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(void)setCell:(WFParameterEditorHostingCell *)arg1 ;
-(void)setAppearance:(WFModuleAppearance *)arg1 ;
-(WFModuleAppearance *)appearance;
-(id<WFComponentNavigationContext>)navigationContext;
-(void)setNavigationContext:(id<WFComponentNavigationContext>)arg1 ;
@end

