/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dependentEntryKeys;
-(void)_create_nameView;
-(id)viewForIdentifier:(id)arg1 ;
-(void)setNameView:(_UIStatusBarStringView *)arg1 ;
-(_UIStatusBarStringView *)nameView;
-(NSString *)nameEntryKey;
@end

