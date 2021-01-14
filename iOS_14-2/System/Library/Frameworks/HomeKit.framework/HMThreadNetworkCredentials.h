/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class NSString, NSData;

@interface HMThreadNetworkCredentials : NSObject {

	NSString* _networkName;
	NSData* _extendedPANID;
	NSString* _commissionerPassphrase;
	NSData* _PSKc;

}

@property (nonatomic,readonly) NSString * networkName;                         //@synthesize networkName=_networkName - In the implementation block
@property (nonatomic,readonly) NSData * extendedPANID;                         //@synthesize extendedPANID=_extendedPANID - In the implementation block
@property (nonatomic,readonly) NSString * commissionerPassphrase;              //@synthesize commissionerPassphrase=_commissionerPassphrase - In the implementation block
@property (nonatomic,readonly) NSData * PSKc;                                  //@synthesize PSKc=_PSKc - In the implementation block
-(NSString *)networkName;
-(NSData *)PSKc;
-(id)initWithNetworkName:(id)arg1 extendedPANID:(id)arg2 commissionerPassphrase:(id)arg3 ;
-(id)initWithNetworkName:(id)arg1 extendedPANID:(id)arg2 PSKc:(id)arg3 ;
-(NSString *)commissionerPassphrase;
-(NSData *)extendedPANID;
@end

