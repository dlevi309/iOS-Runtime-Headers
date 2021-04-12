/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
*/

#import <libobjc.A.dylib/MSCMSAttributeCoder.h>

@class NSDate;

@interface MSCMSSigningTimeAttribute : NSObject <MSCMSAttributeCoder> {

	NSDate* _signingTime;

}

@property (retain,readonly) NSDate * signingTime;              //@synthesize signingTime=_signingTime - In the implementation block
-(id)encodeAttributeWithError:(id*)arg1 ;
-(id)initWithAttribute:(id)arg1 error:(id*)arg2 ;
-(id)initWithSigningTime:(id)arg1 ;
-(NSDate *)signingTime;
@end

