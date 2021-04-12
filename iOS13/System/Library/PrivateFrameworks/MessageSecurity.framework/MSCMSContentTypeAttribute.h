/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
*/

#import <libobjc.A.dylib/MSCMSAttributeCoder.h>

@class MSOID;

@interface MSCMSContentTypeAttribute : NSObject <MSCMSAttributeCoder> {

	MSOID* _contentType;

}

@property (retain) MSOID * contentType;              //@synthesize contentType=_contentType - In the implementation block
+(id)contentTypeAttributeWithOID:(id)arg1 ;
-(MSOID *)contentType;
-(void)setContentType:(MSOID *)arg1 ;
-(id)initWithOID:(id)arg1 ;
-(id)encodeAttributeWithError:(id*)arg1 ;
-(id)initWithAttribute:(id)arg1 error:(id*)arg2 ;
@end

