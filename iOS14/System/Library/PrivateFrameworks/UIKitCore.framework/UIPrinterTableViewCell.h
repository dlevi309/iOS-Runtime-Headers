/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)printerAccessoryViewInfoButtonPressed:(id)arg1 ;
-(void)setPrinterState:(int)arg1 ;
-(int)printerState;
-(void)expandedAccessoryAreaTapped;
-(void)setExpandedAccessoryTapRecognizer:(UIGestureRecognizer *)arg1 ;
-(UIGestureRecognizer *)expandedAccessoryTapRecognizer;
-(UIPrinterAccessoryView *)printerAccessoryView;
-(void)setPrinterAccessoryView:(UIPrinterAccessoryView *)arg1 ;
-(PKPrinter *)printer;
-(BOOL)checked;
-(id)delegate;
-(void)prepareForReuse;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

