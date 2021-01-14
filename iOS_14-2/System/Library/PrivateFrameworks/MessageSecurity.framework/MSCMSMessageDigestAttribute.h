/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
*/

#import <libobjc.A.dylib/MSCMSAttributeCoder.h>

@class NSData;

@interface MSCMSMessageDigestAttribute : NSObject <MSCMSAttributeCoder> {

	NSData* _messageDigest;

}

@property (retain) NSData * messageDigest;              //@synthesize messageDigest=_messageDigest - In the implementation block
+(id)messageDigestAttributeWithDigest:(id)arg1 ;
-(NSData *)messageDigest;
-(void)setMessageDigest:(NSData *)arg1 ;
-(id)encodeAttributeWithError:(id*)arg1 ;
-(id)initWithAttribute:(id)arg1 error:(id*)arg2 ;
-(id)initWithDigest:(id)arg1 ;
@end

