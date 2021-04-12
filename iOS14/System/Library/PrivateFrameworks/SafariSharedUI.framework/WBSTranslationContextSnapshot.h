/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class NSString, NSURL;

@interface WBSTranslationContextSnapshot : NSObject {

	unsigned long long _state;
	NSString* _targetLocale;
	NSString* _webpageLocale;
	NSURL* _webpageURL;

}

@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * targetLocale;               //@synthesize targetLocale=_targetLocale - In the implementation block
@property (nonatomic,retain) NSString * webpageLocale;              //@synthesize webpageLocale=_webpageLocale - In the implementation block
@property (nonatomic,retain) NSURL * webpageURL;                    //@synthesize webpageURL=_webpageURL - In the implementation block
-(NSURL *)webpageURL;
-(void)setWebpageURL:(NSURL *)arg1 ;
-(NSString *)targetLocale;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(void)setTargetLocale:(NSString *)arg1 ;
-(NSString *)webpageLocale;
-(void)setWebpageLocale:(NSString *)arg1 ;
@end

