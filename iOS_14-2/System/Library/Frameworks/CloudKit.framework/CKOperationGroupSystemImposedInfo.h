/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface CKOperationGroupSystemImposedInfo : NSObject <NSSecureCoding, NSCopying> {

	NSDictionary* _networkServiceTypePerConfig;
	long long _expectedSendSize;
	long long _expectedReceiveSize;

}

@property (nonatomic,copy) NSDictionary * networkServiceTypePerConfig;              //@synthesize networkServiceTypePerConfig=_networkServiceTypePerConfig - In the implementation block
@property (assign,nonatomic) long long expectedSendSize;                            //@synthesize expectedSendSize=_expectedSendSize - In the implementation block
@property (assign,nonatomic) long long expectedReceiveSize;                         //@synthesize expectedReceiveSize=_expectedReceiveSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setExpectedSendSize:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setExpectedReceiveSize:(long long)arg1 ;
-(NSDictionary *)networkServiceTypePerConfig;
-(void)setNetworkServiceTypePerConfig:(NSDictionary *)arg1 ;
-(long long)expectedSendSize;
-(id)initWithCoder:(id)arg1 ;
-(long long)expectedReceiveSize;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

