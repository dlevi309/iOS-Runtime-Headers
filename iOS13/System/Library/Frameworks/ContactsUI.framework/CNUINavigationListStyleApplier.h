/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNUINavigationListStyle;
@interface CNUINavigationListStyleApplier : NSObject {

	id<CNUINavigationListStyle> _navigationListStyle;

}

@property (nonatomic,readonly) id<CNUINavigationListStyle> navigationListStyle;              //@synthesize navigationListStyle=_navigationListStyle - In the implementation block
-(id<CNUINavigationListStyle>)navigationListStyle;
-(id)initWithNavigationListStyle:(id)arg1 ;
-(void)applyNavigationListStyleToCell:(id)arg1 ;
-(void)applyNavigationListStyleToDetailCell:(id)arg1 ;
-(void)applyExpandedBackgroundNavigationListStyleToCell:(id)arg1 ;
-(void)applyCollapsedBackgroundNavigationListStyleToCell:(id)arg1 ;
@end

