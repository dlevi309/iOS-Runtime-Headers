/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString;

@interface FCEmailSignupConfig : NSObject {

	unsigned long long _emailSignupStyle;
	NSString* _landingPageArticleID;
	NSString* _alertTitle;
	NSString* _alertEmailAvailableMessage;
	NSString* _alertEmailUnavailableMessage;
	NSString* _alertAcceptActionTitle;
	NSString* _alertDeclineActionTitle;

}

@property (assign,nonatomic) unsigned long long emailSignupStyle;                //@synthesize emailSignupStyle=_emailSignupStyle - In the implementation block
@property (nonatomic,copy) NSString * landingPageArticleID;                      //@synthesize landingPageArticleID=_landingPageArticleID - In the implementation block
@property (nonatomic,copy) NSString * alertTitle;                                //@synthesize alertTitle=_alertTitle - In the implementation block
@property (nonatomic,copy) NSString * alertEmailAvailableMessage;                //@synthesize alertEmailAvailableMessage=_alertEmailAvailableMessage - In the implementation block
@property (nonatomic,copy) NSString * alertEmailUnavailableMessage;              //@synthesize alertEmailUnavailableMessage=_alertEmailUnavailableMessage - In the implementation block
@property (nonatomic,copy) NSString * alertAcceptActionTitle;                    //@synthesize alertAcceptActionTitle=_alertAcceptActionTitle - In the implementation block
@property (nonatomic,copy) NSString * alertDeclineActionTitle;                   //@synthesize alertDeclineActionTitle=_alertDeclineActionTitle - In the implementation block
-(id)initWithConfigDictionary:(id)arg1 ;
-(void)setAlertTitle:(NSString *)arg1 ;
-(void)setLandingPageArticleID:(NSString *)arg1 ;
-(NSString *)alertTitle;
-(NSString *)landingPageArticleID;
-(unsigned long long)emailSignupStyle;
-(void)setEmailSignupStyle:(unsigned long long)arg1 ;
-(NSString *)alertEmailAvailableMessage;
-(void)setAlertEmailAvailableMessage:(NSString *)arg1 ;
-(NSString *)alertAcceptActionTitle;
-(NSString *)alertEmailUnavailableMessage;
-(void)setAlertEmailUnavailableMessage:(NSString *)arg1 ;
-(void)setAlertAcceptActionTitle:(NSString *)arg1 ;
-(NSString *)alertDeclineActionTitle;
-(void)setAlertDeclineActionTitle:(NSString *)arg1 ;
@end

