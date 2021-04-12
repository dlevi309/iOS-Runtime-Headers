/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class UIView, NSMutableDictionary, NSMutableArray;

@interface SKUIViewReusePool : NSObject {

	UIView* _parentView;
	NSMutableDictionary* _reuseClasses;
	NSMutableArray* _viewPool;

}
-(id)initWithParentView:(id)arg1 ;
-(void)recycleReusableViews:(id)arg1 ;
-(void)hideUnusedViews;
-(void)registerClass:(Class)arg1 forViewWithReuseIdentifier:(id)arg2 ;
-(id)dequeueReusableViewWithReuseIdentifier:(id)arg1 ;
-(Class)viewClassWithReuseIdentifier:(id)arg1 ;
@end

