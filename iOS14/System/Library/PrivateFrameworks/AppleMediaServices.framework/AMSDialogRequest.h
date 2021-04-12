/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, AMSDialogAction, NSURL, NSString, AMSMetricsEvent, NSDictionary;

@interface AMSDialogRequest : NSObject <NSSecureCoding, NSCopying> {

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
-(void)setButtonActions:(NSArray *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)message;
-(id)initWithError:(id)arg1 ;
-(NSDictionary *)userInfo;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setLogKey:(NSString *)arg1 ;
-(void)setIconBundleURL:(NSURL *)arg1 ;
-(id)description;
-(AMSDialogAction *)defaultAction;
-(NSArray *)buttonActions;
-(void)addButtonAction:(id)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(AMSMetricsEvent *)metricsEvent;
-(void)setMetricsEvent:(AMSMetricsEvent *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSURL *)iconBundleURL;
-(void)setStyle:(long long)arg1 ;
-(NSString *)identifier;
-(NSArray *)textFields;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(NSString *)title;
-(void)setTextFields:(NSArray *)arg1 ;
-(NSString *)logKey;
-(void)addTextField:(id)arg1 ;
-(void)setDefaultAction:(AMSDialogAction *)arg1 ;
-(id)locateActionWithIdentifier:(id)arg1 ;
-(void)replaceAction:(id)arg1 ;
@end

