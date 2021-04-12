/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, AMSDialogAction, NSURL, NSString, AMSMetricsEvent, NSDictionary;

@interface AMSDialogRequest : NSObject <NSSecureCoding> {

	NSArray* _buttonActions;
	AMSDialogAction* _defaultAction;
	NSURL* _iconBundleURL;
	NSString* _identifier;
	NSString* _logKey;
	NSString* _message;
	AMSMetricsEvent* _metricsEvent;
	long long _style;
	NSArray* _textFields;
	NSString* _title;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy) NSArray * buttonActions;                        //@synthesize buttonActions=_buttonActions - In the implementation block
@property (nonatomic,retain) AMSDialogAction * defaultAction;              //@synthesize defaultAction=_defaultAction - In the implementation block
@property (nonatomic,copy) NSURL * iconBundleURL;                          //@synthesize iconBundleURL=_iconBundleURL - In the implementation block
@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * logKey;                              //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,copy) NSString * message;                             //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) AMSMetricsEvent * metricsEvent;                 //@synthesize metricsEvent=_metricsEvent - In the implementation block
@property (assign,nonatomic) long long style;                              //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSArray * textFields;                           //@synthesize textFields=_textFields - In the implementation block
@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                        //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)requestWithTitle:(id)arg1 message:(id)arg2 ;
-(id)init;
-(id)description;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSArray *)textFields;
-(AMSDialogAction *)defaultAction;
-(id)initWithTitle:(id)arg1 message:(id)arg2 ;
-(NSString *)logKey;
-(NSURL *)iconBundleURL;
-(void)setIconBundleURL:(NSURL *)arg1 ;
-(void)setLogKey:(NSString *)arg1 ;
-(AMSMetricsEvent *)metricsEvent;
-(void)setMetricsEvent:(AMSMetricsEvent *)arg1 ;
-(NSArray *)buttonActions;
-(void)setTextFields:(NSArray *)arg1 ;
-(void)addTextField:(id)arg1 ;
-(void)setButtonActions:(NSArray *)arg1 ;
-(void)addButtonAction:(id)arg1 ;
-(id)locateActionWithIdentifier:(id)arg1 ;
-(void)setDefaultAction:(AMSDialogAction *)arg1 ;
@end

