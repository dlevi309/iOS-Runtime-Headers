/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
*/

@class NSString, NSXPCListenerEndpoint;


@protocol Service <NSObject>
@property (nonatomic,readonly) NSString * serviceID; 
@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint; 
@required
-(NSString *)serviceID;
-(NSXPCListenerEndpoint *)endpoint;

@end

