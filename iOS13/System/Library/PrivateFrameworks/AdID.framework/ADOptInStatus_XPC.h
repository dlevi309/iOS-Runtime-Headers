/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AdID.framework/AdID
*/


@protocol ADOptInStatus_XPC
@required
-(void)clearAdvertisingIdentifier;
-(void)refreshOptInStatusRefreshingWeakToken:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)advertisingIdentifierChanged:(/*^block*/id)arg1;
-(void)setOptInStatus:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(void)advertisingIdentifier:(/*^block*/id)arg1;

@end

