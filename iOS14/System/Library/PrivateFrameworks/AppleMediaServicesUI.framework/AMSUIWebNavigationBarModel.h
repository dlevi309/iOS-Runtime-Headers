/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <libobjc.A.dylib/AMSUIWebModelInterface.h>

@class NSString, AMSUIWebClientContext;

@interface AMSUIWebNavigationBarModel : NSObject <AMSUIWebModelInterface> {

	BOOL _hidesBackButton;
	NSString* _backButtonTitle;
	long long _style;
	NSString* _title;
	AMSUIWebClientContext* _context;
	id _leftButtonObj;
	id _rightButtonObj;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id leftButtonObj;                             //@synthesize leftButtonObj=_leftButtonObj - In the implementation block
@property (nonatomic,retain) id rightButtonObj;                            //@synthesize rightButtonObj=_rightButtonObj - In the implementation block
@property (nonatomic,retain) NSString * backButtonTitle;                   //@synthesize backButtonTitle=_backButtonTitle - In the implementation block
@property (assign,nonatomic) BOOL hidesBackButton;                         //@synthesize hidesBackButton=_hidesBackButton - In the implementation block
@property (assign,nonatomic) long long style;                              //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTitle:(NSString *)arg1 ;
-(AMSUIWebClientContext *)context;
-(void)setRightButton:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)setLeftButton:(id)arg1 ;
-(BOOL)hidesBackButton;
-(void)setBackButtonTitle:(NSString *)arg1 ;
-(NSString *)backButtonTitle;
-(void)setHidesBackButton:(BOOL)arg1 ;
-(long long)style;
-(NSString *)title;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)leftButtonForContainer:(id)arg1 ;
-(id)rightButtonForContainer:(id)arg1 ;
-(id)leftButtonObj;
-(id)_parseButton:(id)arg1 forContainer:(id)arg2 ;
-(id)rightButtonObj;
-(void)setLeftButtonObj:(id)arg1 ;
-(void)setRightButtonObj:(id)arg1 ;
@end

