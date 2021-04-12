/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_css;
-(id)page;
-(id)init;
-(NSString *)userURL;
-(id)_blockPage;
-(NSURL *)pageTemplateURL;
-(void)setUserURL:(NSString *)arg1 ;
-(NSString *)formActionURL;
-(void)setFormActionURL:(NSString *)arg1 ;
-(NSString *)unblockStyle;
-(void)setUnblockStyle:(NSString *)arg1 ;
-(NSString *)remediationButtonText;
-(void)setRemediationButtonText:(NSString *)arg1 ;
-(NSString *)organization;
-(void)setOrganization:(NSString *)arg1 ;
@end

