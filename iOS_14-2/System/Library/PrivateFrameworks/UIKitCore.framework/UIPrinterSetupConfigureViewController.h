/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITextFieldDelegate.h>

@class PKPrinter, NSString, UIButton, UIPrinterSetupConnectingView;

@interface UIPrinterSetupConfigureViewController : UITableViewController <UITableViewDataSource, UITextFieldDelegate> {

	BOOL _addToNetwork;
	BOOL _directPrinting;
	PKPrinter* _printer;
	NSString* _directPasscode;
	UIButton* _finishButton;
	UIPrinterSetupConnectingView* _connectingView;

}

@property (nonatomic,retain) PKPrinter * printer;                                        //@synthesize printer=_printer - In the implementation block
@property (assign,nonatomic) BOOL addToNetwork;                                          //@synthesize addToNetwork=_addToNetwork - In the implementation block
@property (assign,nonatomic) BOOL directPrinting;                                        //@synthesize directPrinting=_directPrinting - In the implementation block
@property (nonatomic,copy) NSString * directPasscode;                                    //@synthesize directPasscode=_directPasscode - In the implementation block
@property (nonatomic,retain) UIButton * finishButton;                                    //@synthesize finishButton=_finishButton - In the implementation block
@property (nonatomic,retain) UIPrinterSetupConnectingView * connectingView;              //@synthesize connectingView=_connectingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)finish;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)initWithPrinter:(id)arg1 ;
-(PKPrinter *)printer;
-(void)setAddToNetwork:(BOOL)arg1 ;
-(NSString *)directPasscode;
-(BOOL)directPrinting;
-(void)finished:(BOOL)arg1 ;
-(void)setFinishButton:(UIButton *)arg1 ;
-(void)setDirectPrinting:(BOOL)arg1 ;
-(void)setConnectingView:(UIPrinterSetupConnectingView *)arg1 ;
-(void)setDirectPasscode:(NSString *)arg1 ;
-(void)toggleAddToNetwork:(id)arg1 ;
-(BOOL)addToNetwork;
-(void)toggleDirectPrinting:(id)arg1 ;
-(UIPrinterSetupConnectingView *)connectingView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)textDidChange:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(UIButton *)finishButton;
-(void)dealloc;
@end

