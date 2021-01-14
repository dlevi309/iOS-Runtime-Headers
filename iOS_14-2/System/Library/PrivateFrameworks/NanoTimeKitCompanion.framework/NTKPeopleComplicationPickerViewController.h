/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>

@protocol NTKPeopleComplicationPickerViewControllerDelegate;
@class UITableView, NSString, NTKComplicationPickerDetailViewConfiguration, NTKPeopleDetailComplicationPickerDataSource;

@interface NTKPeopleComplicationPickerViewController : UIViewController <UITableViewDelegate> {

	BOOL _isFirstTimeVisible;
	id<NTKPeopleComplicationPickerViewControllerDelegate> _delegate;
	UITableView* _tableView;
	NSString* _parentSectionName;
	NTKComplicationPickerDetailViewConfiguration* _configuration;
	NTKPeopleDetailComplicationPickerDataSource* _dataSource;

}

@property (nonatomic,retain) UITableView * tableView;                                                            //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSString * parentSectionName;                                                       //@synthesize parentSectionName=_parentSectionName - In the implementation block
@property (nonatomic,retain) NTKComplicationPickerDetailViewConfiguration * configuration;                       //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NTKPeopleDetailComplicationPickerDataSource * dataSource;                           //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL isFirstTimeVisible;                                                            //@synthesize isFirstTimeVisible=_isFirstTimeVisible - In the implementation block
@property (assign,nonatomic,__weak) id<NTKPeopleComplicationPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<NTKPeopleComplicationPickerViewControllerDelegate>)delegate;
-(UITableView *)tableView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(NTKPeopleDetailComplicationPickerDataSource *)dataSource;
-(void)setDelegate:(id<NTKPeopleComplicationPickerViewControllerDelegate>)arg1 ;
-(void)setDataSource:(NTKPeopleDetailComplicationPickerDataSource *)arg1 ;
-(NTKComplicationPickerDetailViewConfiguration *)configuration;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setConfiguration:(NTKComplicationPickerDetailViewConfiguration *)arg1 ;
-(void)scrollToSelectedIdentifierAnimated:(BOOL)arg1 ;
-(void)_didSelectItemAtIndexPath:(id)arg1 ;
-(id)initWithDetailConfiguration:(id)arg1 ;
-(NSString *)parentSectionName;
-(void)setParentSectionName:(NSString *)arg1 ;
-(BOOL)isFirstTimeVisible;
-(void)setIsFirstTimeVisible:(BOOL)arg1 ;
@end

