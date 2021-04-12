/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

