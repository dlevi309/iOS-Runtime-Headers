/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptSubscriptionStatusRequest : SUScriptObject {

	long long _carrierBundleProvisioningStyle;
	BOOL _ignoreCache;
	long long _reason;
	long long _service;
	BOOL _wantsPartialResults;

}

@property (copy) NSString * carrierBundleProvisioningStyleName; 
@property (assign) id ignoreCache; 
@property (copy) NSString * reasonName; 
@property (copy) NSString * serviceName; 
@property (assign) id wantsPartialResults; 
@property (readonly) NSString * reasonNameDeepLink; 
@property (readonly) NSString * serviceNameAppleMusic; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)init;
-(NSString *)serviceName;
-(id)_className;
-(void)setServiceName:(NSString *)arg1 ;
-(id)attributeKeys;
-(id)ignoreCache;
-(void)setIgnoreCache:(id)arg1 ;
-(id)scriptAttributeKeys;
-(NSString *)reasonNameDeepLink;
-(NSString *)serviceNameAppleMusic;
-(void)_handleRequestCompletionWithSubscriptionStatus:(id)arg1 isFinal:(BOOL)arg2 scriptCallbackFunction:(id)arg3 ;
-(void)performRequestWithCallbackFunction:(id)arg1 ;
-(NSString *)carrierBundleProvisioningStyleName;
-(NSString *)reasonName;
-(void)setCarrierBundleProvisioningStyleName:(NSString *)arg1 ;
-(void)setReasonName:(NSString *)arg1 ;
-(id)wantsPartialResults;
-(void)setWantsPartialResults:(id)arg1 ;
@end

