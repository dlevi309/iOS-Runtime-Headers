/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)layoutSubviews;
-(void)setPreviousContentSize:(CGSize)arg1 ;
-(CGSize)previousContentSize;
-(id<LoggingCardTableViewObserver>)loggingCardTableViewObserver;
-(void)setLoggingCardTableViewObserver:(id<LoggingCardTableViewObserver>)arg1 ;
@end

