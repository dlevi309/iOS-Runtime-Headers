/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>

@class NSDictionary, UISegmentedControl, UITableView, NSArray, NSString;

@interface PXDebugDictionaryViewController : UIViewController <UITableViewDataSource> {

	NSDictionary* _debugDictionary;
	UISegmentedControl* _segmentedControl;
	UITableView* _tableView;
	NSArray* _sectionTitles;
	NSDictionary* _tableContent;

}

@property (nonatomic,retain) UISegmentedControl * segmentedControl;              //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                            //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSArray * sectionTitles;                            //@synthesize sectionTitles=_sectionTitles - In the implementation block
@property (nonatomic,retain) NSDictionary * tableContent;                        //@synthesize tableContent=_tableContent - In the implementation block
@property (nonatomic,readonly) NSDictionary * debugDictionary;                   //@synthesize debugDictionary=_debugDictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(UITableView *)tableView;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(NSDictionary *)debugDictionary;
-(void)viewDidLoad;
-(NSArray *)sectionTitles;
-(void)setTableView:(UITableView *)arg1 ;
-(UISegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(UISegmentedControl *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithDebugDictionary:(id)arg1 ;
-(id)segmentedTitles;
-(void)_updateWithSegmentedTitle:(id)arg1 ;
-(id)_flattenDictionary:(id)arg1 ;
-(id)_sanitizedTextForTitle:(id)arg1 value:(id)arg2 ;
-(void)setSectionTitles:(NSArray *)arg1 ;
-(NSDictionary *)tableContent;
-(void)setTableContent:(NSDictionary *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_switchLogsAction:(id)arg1 ;
-(void)_closeAction:(id)arg1 ;
@end

