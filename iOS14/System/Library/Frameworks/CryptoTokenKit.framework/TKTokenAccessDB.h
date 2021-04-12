/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


@protocol TKTokenAccessDB <NSObject>
@required
-(long long)fetchAccessForRequest:(id)arg1;
-(void)storeAccess:(long long)arg1 forRequest:(id)arg2;
-(void)clearAllAccessRecords;

@end

