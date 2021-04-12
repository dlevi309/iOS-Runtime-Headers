/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(_UIStatusBarActivityIndicator *)activityIndicator;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)dependentEntryKeys;
-(BOOL)_enableForType:(long long)arg1 ;
-(void)_create_activityIndicator;
-(UIEdgeInsets)activityIndicatorAlignmentRectInsets;
-(id)viewForIdentifier:(id)arg1 ;
-(void)setActivityIndicator:(_UIStatusBarActivityIndicator *)arg1 ;
@end

