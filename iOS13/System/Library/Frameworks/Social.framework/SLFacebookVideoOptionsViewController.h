/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <UIKitCore/UITableViewController.h>

@protocol SLFacebookVideoOptionsDelegate;
@class NSArray, NSURL, SLVideoQualityOption;

@interface SLFacebookVideoOptionsViewController : UITableViewController {

	NSArray* _qualityOptions;
	NSURL* _videoAssetURL;
	SLVideoQualityOption* _selectedOption;
	id<SLFacebookVideoOptionsDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SLFacebookVideoOptionsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SLFacebookVideoOptionsDelegate>)delegate;
-(void)setDelegate:(id<SLFacebookVideoOptionsDelegate>)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)_generateQualityOptionsWithAssetURL:(id)arg1 ;
-(id)initWithVideoAssetURL:(id)arg1 ;
-(void)setSelectedQualityOption:(id)arg1 ;
@end

