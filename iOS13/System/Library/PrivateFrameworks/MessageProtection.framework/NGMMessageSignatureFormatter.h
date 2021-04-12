/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/

#import <libobjc.A.dylib/SignatureFormatter.h>

@class NSData, NSString;

@interface NGMMessageSignatureFormatter : NSObject <SignatureFormatter> {

	NSData* _formattedSignedData;

}

@property (nonatomic,readonly) NSData * formattedSignedData;              //@synthesize formattedSignedData=_formattedSignedData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)signedData;
-(id)initWithDHOutput:(id)arg1 prekeyPub:(id)arg2 ephemeralPub:(id)arg3 recipientPub:(id)arg4 ciphertext:(id)arg5 ;
-(NSData *)formattedSignedData;
@end

