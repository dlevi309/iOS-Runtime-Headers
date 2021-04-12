/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <libobjc.A.dylib/AMSUIWebModelInterface.h>

@protocol AMSUIWebActionRunnable;
@class AMSUIWebActivityIndicatorModel, NSString, NSDictionary;

@interface AMSUIWebButtonModel : NSObject <AMSUIWebModelInterface> {

	BOOL _bold;
	BOOL _enabled;
	id<AMSUIWebActionRunnable> _action;
	AMSUIWebActivityIndicatorModel* _activityIndicator;
	NSString* _title;
	long long _style;
	NSDictionary* _underlyingJSObject;

}

@property (nonatomic,retain) NSDictionary * underlyingJSObject;                               //@synthesize underlyingJSObject=_underlyingJSObject - In the implementation block
@property (nonatomic,retain) id<AMSUIWebActionRunnable> action;                               //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) AMSUIWebActivityIndicatorModel * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic) BOOL bold;                                                       //@synthesize bold=_bold - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                    //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSString * title;                                                //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long style;                                                 //@synthesize style=_style - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AMSUIWebActivityIndicatorModel *)activityIndicator;
-(BOOL)enabled;
-(BOOL)bold;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id<AMSUIWebActionRunnable>)action;
-(void)setActivityIndicator:(AMSUIWebActivityIndicatorModel *)arg1 ;
-(void)setAction:(id<AMSUIWebActionRunnable>)arg1 ;
-(void)setBold:(BOOL)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(NSString *)title;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(NSDictionary *)underlyingJSObject;
-(id)createDialogAction;
-(id)createButtonImageWithNavModel:(id)arg1 ;
-(void)setUnderlyingJSObject:(NSDictionary *)arg1 ;
@end

