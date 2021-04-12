/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@class NSString;

@interface WFWorkflowWizardNameConfiguration : NSObject {

	BOOL _showsHeySiri;
	BOOL _showsSuggestions;
	NSString* _title;
	NSString* _footerText;
	NSString* _doneBarButtonTitle;

}

@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * footerText;                      //@synthesize footerText=_footerText - In the implementation block
@property (assign,nonatomic) BOOL showsHeySiri;                        //@synthesize showsHeySiri=_showsHeySiri - In the implementation block
@property (assign,nonatomic) BOOL showsSuggestions;                    //@synthesize showsSuggestions=_showsSuggestions - In the implementation block
@property (nonatomic,copy) NSString * doneBarButtonTitle;              //@synthesize doneBarButtonTitle=_doneBarButtonTitle - In the implementation block
+(id)newWorkflowConfiguration;
+(id)addToSiriConfiguration;
+(id)tellSiriInfoText;
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)footerText;
-(void)setFooterText:(NSString *)arg1 ;
-(void)setShowsHeySiri:(BOOL)arg1 ;
-(BOOL)showsHeySiri;
-(BOOL)showsSuggestions;
-(void)setShowsSuggestions:(BOOL)arg1 ;
-(NSString *)doneBarButtonTitle;
-(void)setDoneBarButtonTitle:(NSString *)arg1 ;
@end

