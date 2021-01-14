/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContentProxy.framework/PromotedContentProxy
*/


@class WKWebViewConfiguration, APUnfairLock;

@interface APWebViewConfiguration : NSObject {

	WKWebViewConfiguration* _webProcessConfiguration;
	WKWebViewConfiguration* _webProcessConfigurationWithBackgroundPriority;
	WKWebViewConfiguration* _videoConfiguration;
	WKWebViewConfiguration* _videoConfigurationWithBackgroundPriority;
	APUnfairLock* _webProcessConfigurationLock;
	APUnfairLock* _webProcessConfigurationWithBackgroundPriorityLock;
	APUnfairLock* _videoConfigurationLock;
	APUnfairLock* _videoConfigurationWithBackgroundPriorityLock;

}

@property (nonatomic,readonly) APUnfairLock * webProcessConfigurationLock;                                          //@synthesize webProcessConfigurationLock=_webProcessConfigurationLock - In the implementation block
@property (nonatomic,readonly) APUnfairLock * webProcessConfigurationWithBackgroundPriorityLock;                    //@synthesize webProcessConfigurationWithBackgroundPriorityLock=_webProcessConfigurationWithBackgroundPriorityLock - In the implementation block
@property (nonatomic,readonly) APUnfairLock * videoConfigurationLock;                                               //@synthesize videoConfigurationLock=_videoConfigurationLock - In the implementation block
@property (nonatomic,readonly) APUnfairLock * videoConfigurationWithBackgroundPriorityLock;                         //@synthesize videoConfigurationWithBackgroundPriorityLock=_videoConfigurationWithBackgroundPriorityLock - In the implementation block
@property (nonatomic,readonly) WKWebViewConfiguration * webProcessConfiguration; 
@property (nonatomic,readonly) WKWebViewConfiguration * webProcessConfigurationWithBackgroundPriority; 
@property (nonatomic,readonly) WKWebViewConfiguration * videoConfiguration; 
@property (nonatomic,readonly) WKWebViewConfiguration * videoConfigurationWithBackgroundPriority; 
-(id)init;
-(WKWebViewConfiguration *)videoConfiguration;
-(WKWebViewConfiguration *)webProcessConfigurationWithBackgroundPriority;
-(APUnfairLock *)webProcessConfigurationLock;
-(id)_newSharedConfigurationWithBackgroundPriority:(BOOL)arg1 ;
-(APUnfairLock *)webProcessConfigurationWithBackgroundPriorityLock;
-(APUnfairLock *)videoConfigurationLock;
-(APUnfairLock *)videoConfigurationWithBackgroundPriorityLock;
-(id)_injectionScriptForResource:(id)arg1 injectionTime:(long long)arg2 ;
-(id)_injectionStyleForResource:(id)arg1 ;
-(id)_newProcessPoolWithBackgroundPriority:(BOOL)arg1 ;
-(WKWebViewConfiguration *)webProcessConfiguration;
-(WKWebViewConfiguration *)videoConfigurationWithBackgroundPriority;
@end

