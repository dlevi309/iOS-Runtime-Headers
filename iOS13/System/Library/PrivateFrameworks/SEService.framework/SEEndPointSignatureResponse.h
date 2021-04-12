/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)signature;
-(void)setSignature:(NSData *)arg1 ;
-(NSData *)signedData;
-(void)setSignedData:(NSData *)arg1 ;
@end

