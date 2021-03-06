/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UITableViewController.h>

@class NSArray;

@interface VUIDebugMetricsEventListViewController : UITableViewController {

	NSArray* _visibleEvents;
	NSArray* _allEvents;
	NSArray* _buttonsInHeader;
	NSArray* _buttonsInHeaderSelected;

}

@property (nonatomic,retain) NSArray * visibleEvents;                        //@synthesize visibleEvents=_visibleEvents - In the implementation block
@property (nonatomic,retain) NSArray * allEvents;                            //@synthesize allEvents=_allEvents - In the implementation block
@property (nonatomic,retain) NSArray * buttonsInHeader;                      //@synthesize buttonsInHeader=_buttonsInHeader - In the implementation block
@property (nonatomic,retain) NSArray * buttonsInHeaderSelected;              //@synthesize buttonsInHeaderSelected=_buttonsInHeaderSelected - In the implementation block
-(NSArray *)allEvents;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithEvents:(id)arg1 ;
-(void)toggleValidationMode;
-(void)finishValidation;
-(id)_formatKeyAndValue:(id)arg1 fromEvent:(id)arg2 ;
-(id)_imageFromPageContext:(id)arg1 ;
-(NSArray *)visibleEvents;
-(void)setButtonsInHeader:(NSArray *)arg1 ;
-(void)setButtonsInHeaderSelected:(NSArray *)arg1 ;
-(void)_buttonClicked:(id)arg1 ;
-(NSArray *)buttonsInHeader;
-(NSArray *)buttonsInHeaderSelected;
-(void)setVisibleEvents:(NSArray *)arg1 ;
-(void)setAllEvents:(NSArray *)arg1 ;
@end

