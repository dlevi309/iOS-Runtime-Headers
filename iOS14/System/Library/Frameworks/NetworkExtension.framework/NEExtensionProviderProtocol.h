/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol NEExtensionProviderProtocol <NSObject>
@required
-(void)dispose;
-(void)stopWithReason:(int)arg1;
-(void)sleepWithCompletionHandler:(/*^block*/id)arg1;
-(void)createWithCompletionHandler:(/*^block*/id)arg1;
-(void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2;
-(void)validateWithCompletionHandler:(/*^block*/id)arg1;
-(void)wake;
-(void)startWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

