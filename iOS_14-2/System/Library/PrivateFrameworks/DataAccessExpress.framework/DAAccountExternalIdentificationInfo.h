/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
*/


@class NSString, NSArray;

@interface DAAccountExternalIdentificationInfo : NSObject {

	BOOL _useSSL;
	NSString* _host;
	long long _port;
	NSArray* _ownerAddresses;
	NSString* _preferredOwnerAddress;

}

@property (nonatomic,copy,readonly) NSString * host;                               //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) long long port;                                     //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) BOOL useSSL;                                        //@synthesize useSSL=_useSSL - In the implementation block
@property (nonatomic,copy,readonly) NSArray * ownerAddresses;                      //@synthesize ownerAddresses=_ownerAddresses - In the implementation block
@property (nonatomic,copy,readonly) NSString * preferredOwnerAddress;              //@synthesize preferredOwnerAddress=_preferredOwnerAddress - In the implementation block
-(NSString *)preferredOwnerAddress;
-(BOOL)useSSL;
-(long long)port;
-(NSString *)host;
-(id)initWithHost:(id)arg1 port:(long long)arg2 useSSL:(BOOL)arg3 ownerAddresses:(id)arg4 preferredOwnerAddress:(id)arg5 ;
-(NSArray *)ownerAddresses;
@end

