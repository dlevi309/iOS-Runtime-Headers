/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface PKBarcodeEventSignatureResponse : NSObject <NSSecureCoding> {

	NSData* _signedData;

}

@property (nonatomic,copy) NSData * signedData;              //@synthesize signedData=_signedData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setSignedData:(NSData *)arg1 ;
-(id)initWithSignedData:(id)arg1 ;
-(NSData *)signedData;
-(id)initWithCoder:(id)arg1 ;
@end

