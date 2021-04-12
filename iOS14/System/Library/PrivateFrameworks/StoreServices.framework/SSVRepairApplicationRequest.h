/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString, NSNumber;

@interface SSVRepairApplicationRequest : SSRequest <SSXPCCoding> {

	long long _claimStyle;
	NSString* _bundleID;
	NSNumber* _accountDSID;

}

@property (nonatomic,readonly) NSString * bundleID;                 //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSNumber * accountDSID;              //@synthesize accountDSID=_accountDSID - In the implementation block
@property (nonatomic,readonly) long long claimStyle;                //@synthesize claimStyle=_claimStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
-(NSString *)bundleID;
-(id)initWithBundleID:(id)arg1 accountIdentifier:(id)arg2 claimStyle:(long long)arg3 ;
-(long long)claimStyle;
-(NSNumber *)accountDSID;
@end

