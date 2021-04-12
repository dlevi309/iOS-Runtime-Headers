/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)buttonTitle;
-(void)setButtonTitle:(NSString *)arg1 ;
-(BOOL)showSpinner;
-(void)setShowSpinner:(BOOL)arg1 ;
-(void)setActionOnDismiss:(id)arg1 ;
-(id)actionOnDismiss;
-(id)actionOnMessagePress;
-(void)setActionOnMessagePress:(id)arg1 ;
-(id)actionOnButtonPress;
-(void)setActionOnButtonPress:(id)arg1 ;
-(BOOL)isDestructiveAction;
-(void)setIsDestructiveAction:(BOOL)arg1 ;
-(BOOL)showDisclosure;
-(void)setShowDisclosure:(BOOL)arg1 ;
-(NSString *)analyticsReporterSubject;
-(void)setAnalyticsReporterSubject:(NSString *)arg1 ;
-(BOOL)canReportToAnalytics;
-(void)setReportToAnalytics:(BOOL)arg1 ;
@end

