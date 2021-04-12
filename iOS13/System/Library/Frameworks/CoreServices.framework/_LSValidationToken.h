/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface _LSValidationToken : NSObject <NSSecureCoding> {

	NSData* _payload;
	NSData* _nonce;
	NSData* _HMAC;
	id _owner;

}

@property (assign,nonatomic,__weak) id owner;              //@synthesize owner=_owner - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)HMACWithPayload:(id)arg1 nonce:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setOwner:(id)arg1 ;
-(id)owner;
-(id)initWithPayload:(id)arg1 ;
-(BOOL)isCorrectForPayload:(id)arg1 ;
@end

