/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

@class NSString, NSUUID;


@protocol AKCredentialRequestProtocol <NSObject,NSSecureCoding,NSCopying>
@property (nonatomic,copy) NSString * userIdentifier; 
@property (nonatomic,copy,readonly) NSString * altDSID; 
@property (nonatomic,copy,readonly) NSUUID * requestIdentifier; 
@required
-(void)setUserIdentifier:(id)arg1;
-(NSString *)userIdentifier;
-(NSString *)altDSID;
-(NSUUID *)requestIdentifier;

@end

