/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UIPrinterAccessoryViewDelegate.h>

@class PKPrinter, UIPrinterAccessoryView, UIGestureRecognizer, NSString;

@interface UIPrinterTableViewCell : UITableViewCell <UIPrinterAccessoryViewDelegate> {

	PKPrinter* _printer;
	id _delegate;
	UIPrinterAccessoryView* _printerAccessoryView;
	UIGestureRecognizer* _expandedAccessoryTapRecognizer;

}

@property (assign,nonatomic) int printerState; 
@property (assign,nonatomic,__weak) PKPrinter * printer;                                        //@synthesize printer=_printer - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL checked; 
@property (nonatomic,retain) UIPrinterAccessoryView * printerAccessoryView;                     //@synthesize printerAccessoryView=_printerAccessoryView - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * expandedAccessoryTapRecognizer;              //@synthesize expandedAccessoryTapRecognizer=_expandedAccessoryTapRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)prepareForReuse;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setChecked:(BOOL)arg1 ;
-(PKPrinter *)printer;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(void)printerAccessoryViewInfoButtonPressed:(id)arg1 ;
-(void)setPrinterState:(int)arg1 ;
-(int)printerState;
-(void)expandedAccessoryAreaTapped;
-(void)setExpandedAccessoryTapRecognizer:(UIGestureRecognizer *)arg1 ;
-(UIGestureRecognizer *)expandedAccessoryTapRecognizer;
-(UIPrinterAccessoryView *)printerAccessoryView;
-(BOOL)checked;
-(void)setPrinterAccessoryView:(UIPrinterAccessoryView *)arg1 ;
@end

