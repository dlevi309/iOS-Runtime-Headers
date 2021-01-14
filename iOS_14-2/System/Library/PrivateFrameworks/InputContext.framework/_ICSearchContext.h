/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
*/


@class NSString, NSArray;

@interface _ICSearchContext : NSObject {

	BOOL _isResponseContextDenylisted;
	BOOL _shouldDisableAutoCaps;
	NSString* _locale;
	NSArray* _recipients;
	NSString* _applicationBundleIdentifier;

}

@property (nonatomic,readonly) NSString * locale;                                   //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) NSArray * recipients;                                //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,readonly) NSString * applicationBundleIdentifier;              //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isResponseContextDenylisted;                    //@synthesize isResponseContextDenylisted=_isResponseContextDenylisted - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisableAutoCaps;                          //@synthesize shouldDisableAutoCaps=_shouldDisableAutoCaps - In the implementation block
-(NSArray *)recipients;
-(NSString *)locale;
-(NSString *)applicationBundleIdentifier;
-(BOOL)shouldDisableAutoCaps;
-(id)initWithLocale:(id)arg1 recipients:(id)arg2 applicationBundleIdentifier:(id)arg3 isResponseContextDenylisted:(BOOL)arg4 shouldDisableAutoCaps:(BOOL)arg5 ;
-(BOOL)isResponseContextDenylisted;
@end

