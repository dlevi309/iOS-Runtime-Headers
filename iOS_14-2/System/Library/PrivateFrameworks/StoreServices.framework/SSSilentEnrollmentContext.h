/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSNumber, NSString, NSData;

@interface SSSilentEnrollmentContext : NSObject <SSXPCCoding> {

	NSNumber* _accountIdentifier;
	NSString* _headerADSID;
	NSString* _headerGSToken;
	NSString* _headerGuid;
	NSString* _headerMMeClientInfo;
	NSString* _headerMMeDeviceId;
	NSData* _parameters;
	NSString* _URLString;

}

@property (nonatomic,copy) NSNumber * accountIdentifier;                //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * headerADSID;                      //@synthesize headerADSID=_headerADSID - In the implementation block
@property (nonatomic,copy) NSString * headerGSToken;                    //@synthesize headerGSToken=_headerGSToken - In the implementation block
@property (nonatomic,copy) NSString * headerGuid;                       //@synthesize headerGuid=_headerGuid - In the implementation block
@property (nonatomic,copy) NSString * headerMMeClientInfo;              //@synthesize headerMMeClientInfo=_headerMMeClientInfo - In the implementation block
@property (nonatomic,copy) NSString * headerMMeDeviceId;                //@synthesize headerMMeDeviceId=_headerMMeDeviceId - In the implementation block
@property (nonatomic,copy) NSData * parameters;                         //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,copy) NSString * URLString;                        //@synthesize URLString=_URLString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)URLString;
-(NSData *)parameters;
-(void)setParameters:(NSData *)arg1 ;
-(NSNumber *)accountIdentifier;
-(NSString *)headerADSID;
-(NSString *)headerGSToken;
-(NSString *)headerGuid;
-(NSString *)headerMMeClientInfo;
-(NSString *)headerMMeDeviceId;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(void)setHeaderGuid:(NSString *)arg1 ;
-(void)setHeaderADSID:(NSString *)arg1 ;
-(void)setURLString:(NSString *)arg1 ;
-(void)setHeaderGSToken:(NSString *)arg1 ;
-(void)setHeaderMMeClientInfo:(NSString *)arg1 ;
-(void)setHeaderMMeDeviceId:(NSString *)arg1 ;
@end

