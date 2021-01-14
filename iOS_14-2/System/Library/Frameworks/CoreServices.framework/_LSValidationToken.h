/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)owner;
-(id)initWithPayload:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isCorrectForPayload:(id)arg1 ;
-(void)setOwner:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

