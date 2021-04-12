/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSString;

@interface _SFWebViewUsageMonitor : NSObject {

	NSString* _hostAppIdentifier;
	BOOL _userInteracted;
	BOOL _urlHasQueryString;
	BOOL _urlHasIDFA;
	BOOL _viewControllerViewIsHidden;

}

@property (assign,nonatomic) BOOL userInteracted;                          //@synthesize userInteracted=_userInteracted - In the implementation block
@property (assign,nonatomic) BOOL urlHasQueryString;                       //@synthesize urlHasQueryString=_urlHasQueryString - In the implementation block
@property (assign,nonatomic) BOOL urlHasIDFA;                              //@synthesize urlHasIDFA=_urlHasIDFA - In the implementation block
@property (assign,nonatomic) BOOL viewControllerViewIsHidden;              //@synthesize viewControllerViewIsHidden=_viewControllerViewIsHidden - In the implementation block
@property (nonatomic,readonly) BOOL shouldAudit; 
@property (nonatomic,readonly) NSString * stringAsAuditKey; 
-(void)auditUsageIfNeeded;
-(BOOL)urlHasIDFA;
-(BOOL)urlHasQueryString;
-(BOOL)viewControllerViewIsHidden;
-(NSString *)stringAsAuditKey;
-(void)setUrlHasIDFA:(BOOL)arg1 ;
-(void)setUrlHasQueryString:(BOOL)arg1 ;
-(id)initWithHostAppIdentifier:(id)arg1 ;
-(BOOL)userInteracted;
-(void)setUserInteracted:(BOOL)arg1 ;
-(void)setViewControllerViewIsHidden:(BOOL)arg1 ;
-(void)checkURL:(id)arg1 ;
-(BOOL)shouldAudit;
@end

