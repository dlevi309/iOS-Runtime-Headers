/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError;

@interface TKTokenAuthOperation : NSObject <NSSecureCoding> {

	NSError* _authenticationError;

}

@property (copy) NSError * authenticationError;              //@synthesize authenticationError=_authenticationError - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)importOperation:(id)arg1 ;
-(Class)baseClassForUI;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)finishWithError:(id*)arg1 ;
-(NSError *)authenticationError;
-(void)setAuthenticationError:(NSError *)arg1 ;
@end

