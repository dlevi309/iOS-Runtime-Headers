/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@class NSTimer, UITableViewCell;

@interface PSTableCellHighlightContext : NSObject {

	NSTimer* _timer;
	BOOL _animateUnhighlight;
	BOOL _valid;
	UITableViewCell* _cell;
	long long _originalSelectionStyle;

}

@property (assign,nonatomic,__weak) UITableViewCell * cell;                 //@synthesize cell=_cell - In the implementation block
@property (nonatomic,readonly) BOOL animateUnhighlight;                     //@synthesize animateUnhighlight=_animateUnhighlight - In the implementation block
@property (assign,nonatomic) long long originalSelectionStyle;              //@synthesize originalSelectionStyle=_originalSelectionStyle - In the implementation block
@property (nonatomic,readonly) BOOL valid;                                  //@synthesize valid=_valid - In the implementation block
+(id)contextWithCell:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(BOOL)valid;
-(UITableViewCell *)cell;
-(void)setCell:(UITableViewCell *)arg1 ;
-(void)_timerFired;
-(void)_killTimer;
-(void)performHighlightForDuration:(double)arg1 animateUnhighlight:(BOOL)arg2 ;
-(BOOL)animateUnhighlight;
-(long long)originalSelectionStyle;
-(void)setOriginalSelectionStyle:(long long)arg1 ;
@end

