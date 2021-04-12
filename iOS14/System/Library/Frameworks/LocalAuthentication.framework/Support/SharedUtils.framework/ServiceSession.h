/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
*/

@class NSUUID, NSString;


@protocol ServiceSession <NSObject>
@property (nonatomic,readonly) NSUUID * sessionID; 
@property (nonatomic,readonly) NSString * serviceType; 
@property (nonatomic,readonly) id<Service> service; 
@property (nonatomic,readonly) NSString * clientID; 
@required
-(NSString *)clientID;
-(NSUUID *)sessionID;
-(NSString *)serviceType;
-(id<Service>)service;

@end

