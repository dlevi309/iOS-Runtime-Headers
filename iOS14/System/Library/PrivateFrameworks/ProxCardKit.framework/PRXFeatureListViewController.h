/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/

#import <ProxCardKit/ProxCardKit-Structs.h>
#import <ProxCardKit/PRXCardContentViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class NSMutableArray, UITableView, UIImage, NSArray, NSString;

@interface PRXFeatureListViewController : PRXCardContentViewController <UITableViewDelegate, UITableViewDataSource> {

	NSMutableArray* _features;
	UITableView* _tableView;
	UIImage* _featureImage;

}

@property (nonatomic,readonly) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIImage * featureImage;                 //@synthesize featureImage=_featureImage - In the implementation block
@property (nonatomic,readonly) NSArray * features; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(NSArray *)features;
-(UITableView *)tableView;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)initWithContentView:(id)arg1 ;
-(void)_updateSeparatorInsets;
-(void)viewDidLoad;
-(id)addFeature:(id)arg1 ;
-(void)_updateHeaderView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setFeatureImage:(UIImage *)arg1 ;
-(UIImage *)featureImage;
@end

