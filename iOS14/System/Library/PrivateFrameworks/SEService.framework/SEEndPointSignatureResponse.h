/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SEService.framework/SEService
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <SEService/SESEndPointSignature.h>

@class NSData;

@interface SEEndPointSignatureResponse : NSObject <NSSecureCoding, SESEndPointSignature> {

	NSData* _signedData;
	NSData* _signature;

}

@property (nonatomic,retain) NSData * signedData;              //@synthesize signedData=_signedData - In the implementation block
@property (nonatomic,retain) NSData * signature;               //@synthesize signature=_signature - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)responseWithSignedData:(id)arg1 signature:(id)arg2 ;
-(NSData *)signature;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setSignedData:(NSData *)arg1 ;
-(NSData *)signedData;
-(id)initWithCoder:(id)arg1 ;
-(void)setSignature:(NSData *)arg1 ;
@end

