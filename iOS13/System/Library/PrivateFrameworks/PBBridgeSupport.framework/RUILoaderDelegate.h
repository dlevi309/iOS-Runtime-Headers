/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/


@protocol RUILoaderDelegate <NSObject>
@optional
-(void)loader:(id)arg1 willLoadRequest:(id)arg2 redirectResponse:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(id)loader:(id)arg1 willLoadRequest:(id)arg2 redirectResponse:(id)arg3;
-(id)sessionConfigurationForLoader:(id)arg1;
-(void)loader:(id)arg1 didFinishLoadWithError:(id)arg2;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 topActionSignal:(id)arg3;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3;
-(void)loader:(id)arg1 didFailWithError:(id)arg2;
-(void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2;
-(void)loader:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

