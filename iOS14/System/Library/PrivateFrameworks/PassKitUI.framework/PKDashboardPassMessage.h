/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@class NSString, UIImage;

@interface PKDashboardPassMessage : NSObject {

	BOOL _isDestructiveAction;
	BOOL _showDisclosure;
	BOOL _showSpinner;
	BOOL _reportToAnalytics;
	NSString* _identifier;
	unsigned long long _type;
	NSString* _title;
	NSString* _message;
	/*^block*/id _actionOnMessagePress;
	NSString* _buttonTitle;
	/*^block*/id _actionOnButtonPress;
	/*^block*/id _actionOnDismiss;
	UIImage* _image;
	NSString* _analyticsReporterSubject;

}

@property (nonatomic,copy) NSString * identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * title;                                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                                //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) id actionOnMessagePress;                                           //@synthesize actionOnMessagePress=_actionOnMessagePress - In the implementation block
@property (nonatomic,copy) NSString * buttonTitle;                                            //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,copy) id actionOnButtonPress;                                            //@synthesize actionOnButtonPress=_actionOnButtonPress - In the implementation block
@property (assign,nonatomic) BOOL isDestructiveAction;                                        //@synthesize isDestructiveAction=_isDestructiveAction - In the implementation block
@property (nonatomic,copy) id actionOnDismiss;                                                //@synthesize actionOnDismiss=_actionOnDismiss - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                 //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL showDisclosure;                                             //@synthesize showDisclosure=_showDisclosure - In the implementation block
@property (assign,nonatomic) BOOL showSpinner;                                                //@synthesize showSpinner=_showSpinner - In the implementation block
@property (assign,nonatomic) NSString * analyticsReporterSubject;                             //@synthesize analyticsReporterSubject=_analyticsReporterSubject - In the implementation block
@property (assign,getter=canReportToAnalytics,nonatomic) BOOL reportToAnalytics;              //@synthesize reportToAnalytics=_reportToAnalytics - In the implementation block
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)buttonTitle;
-(NSString *)message;
-(void)setImage:(UIImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(UIImage *)image;
-(void)setActionOnDismiss:(id)arg1 ;
-(id)actionOnDismiss;
-(unsigned long long)type;
-(void)setShowSpinner:(BOOL)arg1 ;
-(id)actionOnMessagePress;
-(id)actionOnButtonPress;
-(void)setActionOnMessagePress:(id)arg1 ;
-(void)setActionOnButtonPress:(id)arg1 ;
-(BOOL)isDestructiveAction;
-(void)setIsDestructiveAction:(BOOL)arg1 ;
-(BOOL)showDisclosure;
-(void)setShowDisclosure:(BOOL)arg1 ;
-(NSString *)analyticsReporterSubject;
-(void)setAnalyticsReporterSubject:(NSString *)arg1 ;
-(BOOL)canReportToAnalytics;
-(void)setReportToAnalytics:(BOOL)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setButtonTitle:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)showSpinner;
-(NSString *)title;
@end

