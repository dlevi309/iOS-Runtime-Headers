/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/


@class UITableView;

@interface TLKTableViewScrollTester : NSObject {

	BOOL _directionUp;
	BOOL _finishedFirstScroll;
	double _scrollTime;
	/*^block*/id _completion;
	/*^block*/id _firstScroll;
	UITableView* _tableView;
	double _startTime;

}

@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) id firstScroll;                          //@synthesize firstScroll=_firstScroll - In the implementation block
@property (nonatomic,retain) UITableView * tableView;               //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) BOOL directionUp;                      //@synthesize directionUp=_directionUp - In the implementation block
@property (assign,nonatomic) double startTime;                      //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL finishedFirstScroll;              //@synthesize finishedFirstScroll=_finishedFirstScroll - In the implementation block
@property (assign,nonatomic) double scrollTime;                     //@synthesize scrollTime=_scrollTime - In the implementation block
-(id)init;
-(void)fire:(id)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setScrollTime:(double)arg1 ;
-(void)performScrollTestOnTableView:(id)arg1 firstScroll:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setFinishedFirstScroll:(BOOL)arg1 ;
-(void)setFirstScroll:(id)arg1 ;
-(double)scrollTime;
-(BOOL)finishedFirstScroll;
-(id)firstScroll;
-(BOOL)directionUp;
-(void)setDirectionUp:(BOOL)arg1 ;
-(void)performScrollTestOnTableView:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

