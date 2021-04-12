/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


@protocol WFAlertPresenter;
#import <ContentKit/ContentKit-Structs.h>
@class NSString, NSArray, NSMutableArray, WFAlertPresentationSource, UIView, WFAlertButton, NSError;

@interface WFAlert : NSObject {

	BOOL _prefersItemPickerSheetPresentation;
	NSString* _title;
	NSString* _message;
	long long _preferredStyle;
	NSArray* _textFieldResults;
	id<WFAlertPresenter> _presenter;
	NSMutableArray* _mutableButtons;
	NSMutableArray* _mutableTextFieldConfigurationHandlers;

}

@property (nonatomic,retain) WFAlertPresentationSource * presentationSource; 
@property (nonatomic,retain) UIView * contentView; 
@property (assign,nonatomic) UIEdgeInsets contentViewPadding; 
@property (nonatomic,readonly) NSArray * keyCommands; 
@property (nonatomic,readonly) WFAlertButton * escapeButton; 
@property (assign,nonatomic,__weak) id<WFAlertPresenter> presenter; 
@property (nonatomic,readonly) NSArray * textFieldConfigurationHandlers; 
@property (nonatomic,readonly) NSError * associatedError; 
@property (assign,nonatomic,__weak) id<WFAlertPresenter> presenter;                               //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableButtons;                                     //@synthesize mutableButtons=_mutableButtons - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableTextFieldConfigurationHandlers;              //@synthesize mutableTextFieldConfigurationHandlers=_mutableTextFieldConfigurationHandlers - In the implementation block
@property (assign,nonatomic) BOOL prefersItemPickerSheetPresentation;                             //@synthesize prefersItemPickerSheetPresentation=_prefersItemPickerSheetPresentation - In the implementation block
@property (nonatomic,copy) NSString * title;                                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                                    //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) long long preferredStyle;                                            //@synthesize preferredStyle=_preferredStyle - In the implementation block
@property (nonatomic,copy) NSArray * buttons; 
@property (nonatomic,copy) NSArray * textFieldResults;                                            //@synthesize textFieldResults=_textFieldResults - In the implementation block
+(id)alertWithPreferredStyle:(long long)arg1 ;
+(id)alertWithError:(id)arg1 confirmationHandler:(/*^block*/id)arg2 ;
+(id)alertWithError:(id)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)addKeyCommand:(id)arg1 ;
-(NSArray *)keyCommands;
-(void)setPresentationSource:(WFAlertPresentationSource *)arg1 ;
-(WFAlertPresentationSource *)presentationSource;
-(UIEdgeInsets)contentViewPadding;
-(void)setContentViewPadding:(UIEdgeInsets)arg1 ;
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setPreferredStyle:(long long)arg1 ;
-(void)addTextFieldWithConfigurationHandler:(/*^block*/id)arg1 ;
-(long long)preferredStyle;
-(id<WFAlertPresenter>)presenter;
-(void)setButtons:(NSArray *)arg1 ;
-(NSArray *)buttons;
-(void)addButton:(id)arg1 ;
-(void)setPresenter:(id<WFAlertPresenter>)arg1 ;
-(NSError *)associatedError;
-(void)dismissWithCompletionHandler:(/*^block*/id)arg1 ;
-(WFAlertButton *)escapeButton;
-(NSArray *)textFieldResults;
-(void)setTextFieldResults:(NSArray *)arg1 ;
-(NSMutableArray *)mutableButtons;
-(void)setMutableButtons:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mutableTextFieldConfigurationHandlers;
-(void)setMutableTextFieldConfigurationHandlers:(NSMutableArray *)arg1 ;
-(BOOL)prefersItemPickerSheetPresentation;
-(void)setPrefersItemPickerSheetPresentation:(BOOL)arg1 ;
-(NSArray *)textFieldConfigurationHandlers;
@end

