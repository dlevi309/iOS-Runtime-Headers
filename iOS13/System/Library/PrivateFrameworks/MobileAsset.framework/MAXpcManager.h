/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
*/


@interface MAXpcManager : NSObject
-(void)dealloc;
-(id)initWithServiceName:(id)arg1 callbackQueue:(id)arg2 ;
-(id)sendSync:(id)arg1 ;
-(void)sendAsync:(id)arg1 clientHandler:(/*^block*/id)arg2 taskDescriptor:(id)arg3 ;
-(void)attachProgressHandler:(id)arg1 assetId:(id)arg2 callBack:(/*^block*/id)arg3 ;
-(void)setClientName:(id)arg1 ;
-(void)setClientConnectionHandler;
-(void)ensureConnection;
-(void)clearConnection:(id)arg1 ;
@end

