/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/CACLanguageDownloadTableViewCellDownloadDelegate.h>

@class NSArray, UITableView, NSDiffableDataSourceSnapshot, UITableViewDiffableDataSource, NSMutableSet, NSString;

@interface CACLanguageSelectionViewController : UIViewController <UITableViewDelegate, CACLanguageDownloadTableViewCellDownloadDelegate> {

	unsigned long long _controllerStyle;
	NSArray* _availableLocales;
	UITableView* _tableView;
	NSDiffableDataSourceSnapshot* _snapshot;
	UITableViewDiffableDataSource* _dataSource;
	NSMutableSet* _languagesWithDisabledInteraction;

}

@property (assign,nonatomic) unsigned long long controllerStyle;                           //@synthesize controllerStyle=_controllerStyle - In the implementation block
@property (nonatomic,retain) NSArray * availableLocales;                                   //@synthesize availableLocales=_availableLocales - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                      //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSDiffableDataSourceSnapshot * snapshot;                      //@synthesize snapshot=_snapshot - In the implementation block
@property (nonatomic,retain) UITableViewDiffableDataSource * dataSource;                   //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSMutableSet * languagesWithDisabledInteraction;              //@synthesize languagesWithDisabledInteraction=_languagesWithDisabledInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultControllerWithStyle:(unsigned long long)arg1 ;
-(NSDiffableDataSourceSnapshot *)snapshot;
-(void)setSnapshot:(NSDiffableDataSourceSnapshot *)arg1 ;
-(void)setupDataSource;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)createSnapshot;
-(UITableViewDiffableDataSource *)dataSource;
-(void)setDataSource:(UITableViewDiffableDataSource *)arg1 ;
-(void)viewDidLoad;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setAvailableLocales:(NSArray *)arg1 ;
-(NSArray *)availableLocales;
-(id)updateSnapshot;
-(void)dealloc;
-(void)dismiss;
-(void)updateDownloadProgress;
-(void)cacLanguageDownloadStartDownload:(id)arg1 ;
-(void)cacLanguageDownloadStopDownload:(id)arg1 ;
-(void)setControllerStyle:(unsigned long long)arg1 ;
-(void)handleDownloadProgressChange;
-(void)handleErrorOccured:(id)arg1 ;
-(unsigned long long)controllerStyle;
-(void)setLanguagesWithDisabledInteraction:(NSMutableSet *)arg1 ;
-(NSMutableSet *)languagesWithDisabledInteraction;
-(void)presentConfirmationForLanguageIdentifier:(id)arg1 ;
-(void)cancelDownloadForLanguageWithIdentifier:(id)arg1 ;
-(void)startDownloadForLanguageWithIdentifier:(id)arg1 ;
-(void)setDownloadingLanguageCellsEnabled:(BOOL)arg1 ;
-(void)languageDidChange;
@end

