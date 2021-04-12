/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarItem.h>

@class NSString, _UIStatusBarStringView;

@interface _UIStatusBarNameItem : _UIStatusBarItem {

	NSString* _nameEntryKey;
	_UIStatusBarStringView* _nameView;

}

@property (nonatomic,readonly) NSString * nameEntryKey;                      //@synthesize nameEntryKey=_nameEntryKey - In the implementation block
@property (nonatomic,retain) _UIStatusBarStringView * nameView;              //@synthesize nameView=_nameView - In the implementation block
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)viewForIdentifier:(id)arg1 ;
-(id)dependentEntryKeys;
-(_UIStatusBarStringView *)nameView;
-(void)_create_nameView;
-(void)setNameView:(_UIStatusBarStringView *)arg1 ;
-(NSString *)nameEntryKey;
@end

