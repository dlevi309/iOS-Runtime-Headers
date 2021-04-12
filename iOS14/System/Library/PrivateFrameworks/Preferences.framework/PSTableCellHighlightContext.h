/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UITableViewCell *)cell;
-(void)setCell:(UITableViewCell *)arg1 ;
-(BOOL)animateUnhighlight;
-(void)performHighlightForDuration:(double)arg1 animateUnhighlight:(BOOL)arg2 ;
-(long long)originalSelectionStyle;
-(void)setOriginalSelectionStyle:(long long)arg1 ;
-(void)_killTimer;
-(void)_timerFired;
-(BOOL)valid;
-(void)invalidate;
-(void)dealloc;
@end

