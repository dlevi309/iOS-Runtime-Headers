/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarStringView;

@interface _UIStatusBarTimeItem : _UIStatusBarItem {

	_UIStatusBarStringView* _timeView;
	_UIStatusBarStringView* _shortTimeView;
	_UIStatusBarStringView* _pillTimeView;
	_UIStatusBarStringView* _dateView;

}

@property (nonatomic,retain) _UIStatusBarStringView * timeView;                   //@synthesize timeView=_timeView - In the implementation block
@property (nonatomic,retain) _UIStatusBarStringView * shortTimeView;              //@synthesize shortTimeView=_shortTimeView - In the implementation block
@property (nonatomic,retain) _UIStatusBarStringView * pillTimeView;               //@synthesize pillTimeView=_pillTimeView - In the implementation block
@property (nonatomic,retain) _UIStatusBarStringView * dateView;                   //@synthesize dateView=_dateView - In the implementation block
+(id)timeDisplayIdentifier;
+(id)shortTimeDisplayIdentifier;
+(id)pillTimeDisplayIdentifier;
+(id)dateDisplayIdentifier;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)viewForIdentifier:(id)arg1 ;
-(id)dependentEntryKeys;
-(_UIStatusBarStringView *)timeView;
-(_UIStatusBarStringView *)shortTimeView;
-(_UIStatusBarStringView *)pillTimeView;
-(_UIStatusBarStringView *)dateView;
-(void)_create_timeView;
-(void)_create_shortTimeView;
-(void)_create_pillTimeView;
-(void)_create_dateView;
-(void)setTimeView:(_UIStatusBarStringView *)arg1 ;
-(void)setShortTimeView:(_UIStatusBarStringView *)arg1 ;
-(void)setPillTimeView:(_UIStatusBarStringView *)arg1 ;
-(void)setDateView:(_UIStatusBarStringView *)arg1 ;
@end

