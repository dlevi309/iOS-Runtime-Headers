/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithHostAppIdentifier:(id)arg1 ;
-(BOOL)userInteracted;
-(void)setUserInteracted:(BOOL)arg1 ;
-(void)checkURL:(id)arg1 ;
-(void)setViewControllerViewIsHidden:(BOOL)arg1 ;
-(BOOL)urlHasQueryString;
-(BOOL)urlHasIDFA;
-(BOOL)viewControllerViewIsHidden;
-(BOOL)shouldAudit;
-(NSString *)stringAsAuditKey;
-(void)setUrlHasIDFA:(BOOL)arg1 ;
-(void)setUrlHasQueryString:(BOOL)arg1 ;
@end

