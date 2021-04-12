/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <MenstrualCyclesAppPlugin/MenstrualCyclesAppPlugin-Structs.h>
#import <UIKitCore/UITableView.h>

@protocol LoggingCardTableViewObserver;
@interface LoggingCardTableView : UITableView {

	id<LoggingCardTableViewObserver> _loggingCardTableViewObserver;
	CGSize _previousContentSize;

}

@property (assign,nonatomic) CGSize previousContentSize;                                       //@synthesize previousContentSize=_previousContentSize - In the implementation block
@property (__weak) id<LoggingCardTableViewObserver> loggingCardTableViewObserver;              //@synthesize loggingCardTableViewObserver=_loggingCardTableViewObserver - In the implementation block
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)setPreviousContentSize:(CGSize)arg1 ;
-(CGSize)previousContentSize;
-(id<LoggingCardTableViewObserver>)loggingCardTableViewObserver;
-(void)setLoggingCardTableViewObserver:(id<LoggingCardTableViewObserver>)arg1 ;
@end

