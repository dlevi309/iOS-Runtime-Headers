/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/SFDigestOperationInternal.h>
#import <libobjc.A.dylib/SFDigestOperation.h>

@class NSString, NSData;

@interface _SFSHA256DigestOperation : NSObject <SFDigestOperationInternal, SFDigestOperation> {

	id _sha256DigestOperationInternal;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSData * hashValue; 
@property (getter=_secKeyECDSAAlgorithm,nonatomic,readonly) const CFStringRef secKeyECDSAAlgorithm; 
@property (getter=_ccDigestInfo,nonatomic,readonly) const ccdigest_info* ccDigestInfo; 
+(BOOL)supportsSecureCoding;
+(long long)outputSize;
+(long long)blockSize;
+(id)digest:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)addData:(id)arg1 ;
-(NSData *)hashValue;
-(const CFStringRef)_secKeyECDSAAlgorithm;
-(const ccdigest_info*)_ccDigestInfo;
@end

