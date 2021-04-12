/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol NEExtensionProviderProtocol <NSObject>
@required
-(void)dispose;
-(void)sleepWithCompletionHandler:(/*^block*/id)arg1;
-(void)wake;
-(void)startWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)createWithCompletionHandler:(/*^block*/id)arg1;
-(void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2;
-(void)stopWithReason:(int)arg1;

@end

