/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface SSVSAPSignaturePolicy : NSObject <NSCopying> {

	long long _policyType;
	NSArray* _signatureComponents;

}

@property (nonatomic,readonly) long long policyType;                            //@synthesize policyType=_policyType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * signatureComponents;              //@synthesize signatureComponents=_signatureComponents - In the implementation block
-(id)initWithPolicyType:(long long)arg1 ;
-(id)dataToSignWithRequestProperties:(id)arg1 ;
-(long long)policyType;
-(id)initWithSignedActionsDictionary:(id)arg1 ;
-(id)initWithPolicyType:(long long)arg1 signatureComponents:(id)arg2 ;
-(id)dataToSignWithURLRequest:(id)arg1 ;
-(NSArray *)signatureComponents;
-(id)dataToSignWithURLResponse:(id)arg1 responseData:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_dataToSignWithDataSource:(id)arg1 ;
@end

