/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


@protocol WFProviderContext <NSObject>
@property (nonatomic,readonly) id<WFNetworkListRecord> network; 
@property (nonatomic,readonly) long long requestedFields; 
@required
-(id<WFNetworkListRecord>)network;
-(void)cancel;
-(long long)requestedFields;

@end

