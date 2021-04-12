/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CPSBaseTemplateViewController.h>
#import <libobjc.A.dylib/CPSButtonDelegate.h>

@class NSArray, CPAlertTemplate, NSString;

@interface CPSFullScreenAlertViewController : CPSBaseTemplateViewController <CPSButtonDelegate> {

	NSArray* _alertButtons;

}

@property (nonatomic,readonly) CPAlertTemplate * alert; 
@property (nonatomic,retain) NSArray * alertButtons;                 //@synthesize alertButtons=_alertButtons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)preferredFocusEnvironments;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)_titleFont;
-(CPAlertTemplate *)alert;
-(void)didSelectButton:(id)arg1 ;
-(void)_viewDidLoad;
-(id)initWithAlert:(id)arg1 alertDelegate:(id)arg2 ;
-(NSArray *)alertButtons;
-(void)setAlertButtons:(NSArray *)arg1 ;
@end

