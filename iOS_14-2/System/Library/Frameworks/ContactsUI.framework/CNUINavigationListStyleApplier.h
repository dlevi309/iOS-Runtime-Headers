/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

