/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

@class NSString, NSUUID;


@protocol AKCredentialRequestProtocol <NSObject,NSSecureCoding,NSCopying>
@property (nonatomic,copy) NSString * userIdentifier; 
@property (nonatomic,copy,readonly) NSString * altDSID; 
@property (nonatomic,copy,readonly) NSUUID * requestIdentifier; 
@property (nonatomic,copy,readonly) NSUUID * transactionID; 
@required
-(NSString *)userIdentifier;
-(NSUUID *)requestIdentifier;
-(void)setUserIdentifier:(id)arg1;
-(NSString *)altDSID;
-(NSUUID *)transactionID;

@end

