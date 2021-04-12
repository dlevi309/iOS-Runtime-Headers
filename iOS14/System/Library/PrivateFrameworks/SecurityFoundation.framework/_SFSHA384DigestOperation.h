/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/SFDigestOperationInternal.h>
#import <libobjc.A.dylib/SFDigestOperation.h>

@class NSData, NSString;

@interface _SFSHA384DigestOperation : NSObject <SFDigestOperationInternal, SFDigestOperation> {

	id _sha384DigestOperationInternal;

}

@property (getter=_secKeyECDSAAlgorithm,nonatomic,readonly) const CFStringRef secKeyECDSAAlgorithm; 
@property (getter=_ccDigestInfo,nonatomic,readonly) const ccdigest_info* ccDigestInfo; 
@property (copy,readonly) NSData * hashValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(long long)blockSize;
+(id)digest:(id)arg1 ;
+(long long)outputSize;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)addData:(id)arg1 ;
-(NSData *)hashValue;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const CFStringRef)_secKeyECDSAAlgorithm;
-(const ccdigest_info*)_ccDigestInfo;
@end

