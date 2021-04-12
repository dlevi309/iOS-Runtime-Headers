/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarActivityIndicator;

@interface _UIStatusBarActivityItem : _UIStatusBarItem {

	_UIStatusBarActivityIndicator* _activityIndicator;

}

@property (nonatomic,retain) _UIStatusBarActivityIndicator * activityIndicator;                //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets activityIndicatorAlignmentRectInsets; 
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)viewForIdentifier:(id)arg1 ;
-(_UIStatusBarActivityIndicator *)activityIndicator;
-(void)setActivityIndicator:(_UIStatusBarActivityIndicator *)arg1 ;
-(void)_create_activityIndicator;
-(UIEdgeInsets)activityIndicatorAlignmentRectInsets;
-(BOOL)_enableForType:(long long)arg1 ;
-(id)dependentEntryKeys;
@end

