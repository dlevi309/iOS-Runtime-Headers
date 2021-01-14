/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CACViewController.h>

@protocol CACContactDisambiguationPresentationViewControllerDelegate;
@class NSArray, NSString, UIAlertController;

@interface CACDisambiguationPresentationViewController : UIViewController <CACViewController> {

	NSArray* _disambiguationItems;
	id<CACContactDisambiguationPresentationViewControllerDelegate> _contactDisambiguationDelegate;
	NSString* _alertTitle;
	UIAlertController* _alertController;

}

@property (nonatomic,retain) UIAlertController * alertController;                                                                              //@synthesize alertController=_alertController - In the implementation block
@property (assign,nonatomic,__weak) id<CACContactDisambiguationPresentationViewControllerDelegate> contactDisambiguationDelegate;              //@synthesize contactDisambiguationDelegate=_contactDisambiguationDelegate - In the implementation block
@property (nonatomic,retain) NSArray * disambiguationItems;                                                                                    //@synthesize disambiguationItems=_disambiguationItems - In the implementation block
@property (nonatomic,readonly) NSString * alertTitle;                                                                                          //@synthesize alertTitle=_alertTitle - In the implementation block
@property (nonatomic,readonly) long long zOrder; 
@property (nonatomic,readonly) BOOL isOverlay; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 ;
-(long long)zOrder;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UIAlertController *)alertController;
-(BOOL)isOverlay;
-(BOOL)_canShowWhileLocked;
-(id)initWithTitle:(id)arg1 message:(id)arg2 ;
-(id)actionForItem:(id)arg1 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(NSString *)alertTitle;
-(NSArray *)disambiguationItems;
-(void)setDisambiguationItems:(NSArray *)arg1 ;
-(void)setContactDisambiguationDelegate:(id<CACContactDisambiguationPresentationViewControllerDelegate>)arg1 ;
-(void)performHideWithCompletion:(/*^block*/id)arg1 ;
-(id)newAlertControllerWithTitle:(id)arg1 message:(id)arg2 ;
-(id)newActionCustomContentView:(id)arg1 ;
-(id<CACContactDisambiguationPresentationViewControllerDelegate>)contactDisambiguationDelegate;
@end

