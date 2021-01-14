/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIAccessibilityCustomRotorItemResult;

@interface UIAccessibilityCustomRotorSearchPredicate : NSObject {

	UIAccessibilityCustomRotorItemResult* _currentItem;
	long long _searchDirection;

}

@property (nonatomic,retain) UIAccessibilityCustomRotorItemResult * currentItem;              //@synthesize currentItem=_currentItem - In the implementation block
@property (assign,nonatomic) long long searchDirection;                                       //@synthesize searchDirection=_searchDirection - In the implementation block
-(UIAccessibilityCustomRotorItemResult *)currentItem;
-(long long)searchDirection;
-(void)setCurrentItem:(UIAccessibilityCustomRotorItemResult *)arg1 ;
-(void)setSearchDirection:(long long)arg1 ;
@end

