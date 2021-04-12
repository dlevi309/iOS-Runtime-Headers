/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class AKController, UITableView, NSArray, NSString;

@interface AKLineStylesViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	AKController* _controller;
	UITableView* _tableView;
	NSArray* _lineWidthTags;

}

@property (assign,nonatomic,__weak) AKController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                       //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSArray * lineWidthTags;                       //@synthesize lineWidthTags=_lineWidthTags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)generateLineImageForTag:(long long)arg1 selected:(BOOL)arg2 ;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setController:(AKController *)arg1 ;
-(AKController *)controller;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithController:(id)arg1 ;
-(void)setLineWidthTags:(NSArray *)arg1 ;
-(NSArray *)lineWidthTags;
-(long long)currentLineWidthTag;
-(void)selectRowForTag:(long long)arg1 ;
-(id)indexPathForLineWidthTag:(long long)arg1 ;
-(void)selectedLineWidthChanged:(long long)arg1 ;
@end

