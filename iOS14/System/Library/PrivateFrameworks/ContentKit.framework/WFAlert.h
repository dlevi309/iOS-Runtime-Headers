/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


@protocol WFAlertPresenter;
#import <ContentKit/ContentKit-Structs.h>
@class NSString, WFTextFieldConfiguration, WFDatePickerConfiguration, NSArray, NSDate, NSMutableArray, WFAlertPresentationSource, UIView, WFAlertButton, NSError;

@interface WFAlert : NSObject {

	BOOL _prefersItemPickerSheetPresentation;
	NSString* _title;
	NSString* _message;
	long long _preferredStyle;
	WFTextFieldConfiguration* _textFieldConfiguration;
	WFDatePickerConfiguration* _datePickerConfiguration;
	NSArray* _textFieldResults;
	NSDate* _datePickerResult;
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
@property (nonatomic,retain) WFTextFieldConfiguration * textFieldConfiguration;                   //@synthesize textFieldConfiguration=_textFieldConfiguration - In the implementation block
@property (nonatomic,retain) WFDatePickerConfiguration * datePickerConfiguration;                 //@synthesize datePickerConfiguration=_datePickerConfiguration - In the implementation block
@property (nonatomic,copy) NSArray * textFieldResults;                                            //@synthesize textFieldResults=_textFieldResults - In the implementation block
@property (nonatomic,copy) NSDate * datePickerResult;                                             //@synthesize datePickerResult=_datePickerResult - In the implementation block
+(id)alertWithPreferredStyle:(long long)arg1 ;
+(id)alertWithError:(id)arg1 confirmationHandler:(/*^block*/id)arg2 ;
+(id)alertWithError:(id)arg1 ;
-(WFAlertPresentationSource *)presentationSource;
-(NSArray *)keyCommands;
-(UIEdgeInsets)contentViewPadding;
-(void)setPresentationSource:(WFAlertPresentationSource *)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)addKeyCommand:(id)arg1 ;
-(UIView *)contentView;
-(void)setContentViewPadding:(UIEdgeInsets)arg1 ;
-(long long)preferredStyle;
-(void)setMessage:(NSString *)arg1 ;
-(void)setPresenter:(id<WFAlertPresenter>)arg1 ;
-(NSString *)message;
-(id)init;
-(NSArray *)buttons;
-(void)setTitle:(NSString *)arg1 ;
-(NSError *)associatedError;
-(void)addTextFieldWithConfigurationHandler:(/*^block*/id)arg1 ;
-(id<WFAlertPresenter>)presenter;
-(void)addButton:(id)arg1 ;
-(void)setPreferredStyle:(long long)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
-(NSString *)title;
-(WFTextFieldConfiguration *)textFieldConfiguration;
-(WFDatePickerConfiguration *)datePickerConfiguration;
-(void)setDatePickerResult:(NSDate *)arg1 ;
-(void)setTextFieldResults:(NSArray *)arg1 ;
-(WFAlertButton *)escapeButton;
-(void)dismissWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setTextFieldConfiguration:(WFTextFieldConfiguration *)arg1 ;
-(void)setDatePickerConfiguration:(WFDatePickerConfiguration *)arg1 ;
-(NSArray *)textFieldResults;
-(NSDate *)datePickerResult;
-(NSMutableArray *)mutableButtons;
-(void)setMutableButtons:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mutableTextFieldConfigurationHandlers;
-(void)setMutableTextFieldConfigurationHandlers:(NSMutableArray *)arg1 ;
-(BOOL)prefersItemPickerSheetPresentation;
-(void)setPrefersItemPickerSheetPresentation:(BOOL)arg1 ;
-(NSArray *)textFieldConfigurationHandlers;
@end

