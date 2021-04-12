/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@class NSString, NSURL;

@interface NEFilterBlockPage : NSObject {

	NSString* _organization;
	NSURL* _pageTemplateURL;
	NSString* _userURL;
	NSString* _formActionURL;
	NSString* _unblockStyle;
	NSString* _remediationButtonText;

}

@property (readonly) NSURL * pageTemplateURL;                   //@synthesize pageTemplateURL=_pageTemplateURL - In the implementation block
@property (copy) NSString * userURL;                            //@synthesize userURL=_userURL - In the implementation block
@property (copy) NSString * formActionURL;                      //@synthesize formActionURL=_formActionURL - In the implementation block
@property (copy) NSString * organization; 
@property (copy) NSString * unblockStyle;                       //@synthesize unblockStyle=_unblockStyle - In the implementation block
@property (copy) NSString * remediationButtonText;              //@synthesize remediationButtonText=_remediationButtonText - In the implementation block
-(id)init;
-(NSString *)organization;
-(void)setOrganization:(NSString *)arg1 ;
-(id)page;
-(id)_blockPage;
-(id)_css;
-(NSURL *)pageTemplateURL;
-(NSString *)userURL;
-(void)setUserURL:(NSString *)arg1 ;
-(NSString *)formActionURL;
-(void)setFormActionURL:(NSString *)arg1 ;
-(NSString *)unblockStyle;
-(void)setUnblockStyle:(NSString *)arg1 ;
-(NSString *)remediationButtonText;
-(void)setRemediationButtonText:(NSString *)arg1 ;
@end

