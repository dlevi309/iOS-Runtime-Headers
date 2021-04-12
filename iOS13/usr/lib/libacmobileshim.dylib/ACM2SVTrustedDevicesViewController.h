/*
* Generated on Monday, March 1, 2021 at 2:35:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UINavigationBarDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol ACM2SVTrustedDevicesViewControllerDelegate;
@class NSArray, UIColor, UILabel, UIButton, NSLayoutConstraint, UITableView, NSMutableArray, UINavigationController, NSString;

@interface ACM2SVTrustedDevicesViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UINavigationBarDelegate, UINavigationControllerDelegate> {

	id<ACM2SVTrustedDevicesViewControllerDelegate> _delegate;
	NSArray* _trustedDevicesArray;
	UIColor* _textColor;
	UIColor* _labelTextColor;
	UIColor* _backgroundColor;
	long long _suggestedStatusBarStyle;
	UILabel* _emptyLabel;
	UILabel* _headerTitleLabel;
	UILabel* _headerTextLabel;
	UILabel* _footerTextLabel;
	UIButton* _footerButton;
	NSLayoutConstraint* _tableConstraint;
	UITableView* _trustedDevicesListView;
	long long _selectedDeviceIndex;
	NSMutableArray* _imageDownloadsInProgress;
	UINavigationController* _navigationController;
	/*^block*/id _completionBlock;

}

@property (nonatomic,retain) UILabel * emptyLabel;                                                 //@synthesize emptyLabel=_emptyLabel - In the implementation block
@property (nonatomic,retain) UILabel * headerTitleLabel;                                           //@synthesize headerTitleLabel=_headerTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * headerTextLabel;                                            //@synthesize headerTextLabel=_headerTextLabel - In the implementation block
@property (nonatomic,retain) UILabel * footerTextLabel;                                            //@synthesize footerTextLabel=_footerTextLabel - In the implementation block
@property (nonatomic,retain) UIButton * footerButton;                                              //@synthesize footerButton=_footerButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * tableConstraint;                                 //@synthesize tableConstraint=_tableConstraint - In the implementation block
@property (nonatomic,retain) UITableView * trustedDevicesListView;                                 //@synthesize trustedDevicesListView=_trustedDevicesListView - In the implementation block
@property (assign,nonatomic) long long selectedDeviceIndex;                                        //@synthesize selectedDeviceIndex=_selectedDeviceIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * imageDownloadsInProgress;                            //@synthesize imageDownloadsInProgress=_imageDownloadsInProgress - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;                        //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                     //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) id<ACM2SVTrustedDevicesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSArray * trustedDevicesArray;                                                  //@synthesize trustedDevicesArray=_trustedDevicesArray - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                                  //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * labelTextColor;                                             //@synthesize labelTextColor=_labelTextColor - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                            //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) long long suggestedStatusBarStyle;                                    //@synthesize suggestedStatusBarStyle=_suggestedStatusBarStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<ACM2SVTrustedDevicesViewControllerDelegate>)delegate;
-(void)setDelegate:(id<ACM2SVTrustedDevicesViewControllerDelegate>)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)reset;
-(id)initWithDelegate:(id)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)loadView;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(UIColor *)textColor;
-(UINavigationController *)navigationController;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(UIColor *)labelTextColor;
-(double)tableHeight;
-(double)navigationBarHeight;
-(void)setLabelTextColor:(UIColor *)arg1 ;
-(UIButton *)footerButton;
-(void)setFooterButton:(UIButton *)arg1 ;
-(void)setHeaderTextLabel:(UILabel *)arg1 ;
-(UILabel *)headerTextLabel;
-(void)sendAction:(id)arg1 ;
-(void)cancelAction:(id)arg1 ;
-(UILabel *)emptyLabel;
-(void)setEmptyLabel:(UILabel *)arg1 ;
-(UILabel *)footerTextLabel;
-(void)setFooterTextLabel:(UILabel *)arg1 ;
-(id)labelWithText:(id)arg1 font:(id)arg2 ;
-(void)disableControls:(BOOL)arg1 ;
-(void)setSuggestedStatusBarStyle:(long long)arg1 ;
-(void)resetWithDeviceList:(id)arg1 ;
-(void)presentWithParentViewController:(id)arg1 deviceList:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)hideAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(long long)suggestedStatusBarStyle;
-(void)setImageDownloadsInProgress:(NSMutableArray *)arg1 ;
-(void)setTrustedDevicesArray:(NSArray *)arg1 ;
-(UITableView *)trustedDevicesListView;
-(void)setTrustedDevicesListView:(UITableView *)arg1 ;
-(void)setHeaderTitleLabel:(UILabel *)arg1 ;
-(BOOL)isLegacyStyle;
-(UILabel *)headerTitleLabel;
-(id)footerButtonWithText:(id)arg1 ;
-(NSArray *)trustedDevicesArray;
-(void)setTableConstraint:(NSLayoutConstraint *)arg1 ;
-(void)stopImageDownloads;
-(CGSize)sizeOfString:(id)arg1 withFont:(id)arg2 widthConstraints:(double)arg3 ;
-(void)unableReceiveMessagesTextDidTap:(id)arg1 ;
-(void)setSelectedDeviceIndex:(long long)arg1 ;
-(NSLayoutConstraint *)tableConstraint;
-(long long)selectedDeviceIndex;
-(void)startIconDownloadForDevice:(id)arg1 forIndexPath:(id)arg2 ;
-(NSMutableArray *)imageDownloadsInProgress;
-(void)buildConstraints;
-(void)buildHorizontalConstraints;
-(void)buildVerticalConstraints;
@end

