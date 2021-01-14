/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)shortTimeDisplayIdentifier;
+(id)timeDisplayIdentifier;
+(id)pillTimeDisplayIdentifier;
+(id)dateDisplayIdentifier;
-(_UIStatusBarStringView *)dateView;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(_UIStatusBarStringView *)timeView;
-(void)setDateView:(_UIStatusBarStringView *)arg1 ;
-(id)dependentEntryKeys;
-(void)_create_pillTimeView;
-(void)setShortTimeView:(_UIStatusBarStringView *)arg1 ;
-(id)viewForIdentifier:(id)arg1 ;
-(void)setPillTimeView:(_UIStatusBarStringView *)arg1 ;
-(_UIStatusBarStringView *)shortTimeView;
-(void)_create_shortTimeView;
-(void)setTimeView:(_UIStatusBarStringView *)arg1 ;
-(_UIStatusBarStringView *)pillTimeView;
-(void)_create_dateView;
-(void)_create_timeView;
@end

