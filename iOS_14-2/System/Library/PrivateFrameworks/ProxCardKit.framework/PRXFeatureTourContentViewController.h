/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PRXCardContentProviding.h>

@class PRXFeatureTourContentView, NSString, PRXAction;

@interface PRXFeatureTourContentViewController : UIViewController <PRXCardContentProviding> {

	PRXFeatureTourContentView* _contentView;
	NSString* _bodyText;
	unsigned long long _dismissalType;
	PRXAction* _dismissButtonAction;

}

@property (nonatomic,readonly) PRXFeatureTourContentView * contentView; 
@property (nonatomic,copy) NSString * bodyText;                                      //@synthesize bodyText=_bodyText - In the implementation block
@property (assign,nonatomic) unsigned long long dismissalType;                       //@synthesize dismissalType=_dismissalType - In the implementation block
@property (nonatomic,retain) PRXAction * dismissButtonAction;                        //@synthesize dismissButtonAction=_dismissButtonAction - In the implementation block
@property (nonatomic,readonly) long long cardStyle; 
@property (nonatomic,readonly) BOOL allowsPullToDismiss; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)bodyText;
-(void)setTitle:(id)arg1 ;
-(void)setBodyText:(NSString *)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(void)_updateDismissButton;
-(PRXFeatureTourContentView *)contentView;
-(void)_updateTitleView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setDismissalType:(unsigned long long)arg1 ;
-(void)setDismissButtonAction:(PRXAction *)arg1 ;
-(unsigned long long)dismissalType;
-(void)updatePreferredContentSizeForCardWidth:(double)arg1 ;
-(BOOL)allowsPullToDismiss;
-(void)_updateBodyView;
-(id)dismissalConfirmationActionWithTitle:(id)arg1 message:(id)arg2 confirmButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4 ;
-(PRXAction *)dismissButtonAction;
@end

