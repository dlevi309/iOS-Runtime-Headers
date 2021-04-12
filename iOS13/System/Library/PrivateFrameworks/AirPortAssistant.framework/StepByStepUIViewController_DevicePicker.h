/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/

#import <AirPortAssistant/StepByStepUIViewController.h>
#import <libobjc.A.dylib/TableViewManagerDelegate.h>

@class NSDictionary, NSArray, NSString, RecommendationActionController;

@interface StepByStepUIViewController_DevicePicker : StepByStepUIViewController <TableViewManagerDelegate> {

	NSDictionary* _selectedDevice;
	NSDictionary* _sourceNetwork;
	NSDictionary* _sourceBase;
	NSDictionary* _targetBase;
	NSArray* sortedDevices;
	NSString* connectionMedium;
	RecommendationActionController* actionController;
	BOOL _showSingleBaseTopo;
	BOOL showFullList;

}

@property (nonatomic,retain) NSArray * sortedDevices; 
@property (assign,nonatomic) NSString * connectionMedium; 
@property (nonatomic,retain) RecommendationActionController * actionController; 
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)showMoreOptions;
-(RecommendationActionController *)actionController;
-(void)setActionController:(RecommendationActionController *)arg1 ;
-(void)touchInCellAtIndexPath:(id)arg1 ;
-(id)valueForItemOfType:(id)arg1 atTypeIndex:(unsigned long long)arg2 inCellWithTag:(long long)arg3 ;
-(void)setSortedDevices:(NSArray *)arg1 ;
-(void)setConnectionMedium:(NSString *)arg1 ;
-(NSString *)connectionMedium;
-(NSArray *)sortedDevices;
-(void)setupPickerTable;
-(void)updateSelections;
-(id)pickerContent;
@end

