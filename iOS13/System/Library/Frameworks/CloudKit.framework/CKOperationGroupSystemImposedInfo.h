/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface CKOperationGroupSystemImposedInfo : NSObject <NSSecureCoding> {

	NSDictionary* _networkServiceTypePerConfig;
	long long _expectedSendSize;
	long long _expectedReceiveSize;

}

@property (nonatomic,retain) NSDictionary * networkServiceTypePerConfig;              //@synthesize networkServiceTypePerConfig=_networkServiceTypePerConfig - In the implementation block
@property (assign,nonatomic) long long expectedSendSize;                              //@synthesize expectedSendSize=_expectedSendSize - In the implementation block
@property (assign,nonatomic) long long expectedReceiveSize;                           //@synthesize expectedReceiveSize=_expectedReceiveSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)expectedSendSize;
-(long long)expectedReceiveSize;
-(NSDictionary *)networkServiceTypePerConfig;
-(void)setExpectedSendSize:(long long)arg1 ;
-(void)setExpectedReceiveSize:(long long)arg1 ;
-(void)setNetworkServiceTypePerConfig:(NSDictionary *)arg1 ;
@end

