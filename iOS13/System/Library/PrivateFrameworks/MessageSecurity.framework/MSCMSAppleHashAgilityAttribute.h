/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
*/

#import <libobjc.A.dylib/MSCMSAttributeCoder.h>

@class NSData;

@interface MSCMSAppleHashAgilityAttribute : NSObject <MSCMSAttributeCoder> {

	NSData* _hashAgilityValue;

}

@property (retain,readonly) NSData * hashAgilityValue;              //@synthesize hashAgilityValue=_hashAgilityValue - In the implementation block
-(id)encodeAttributeWithError:(id*)arg1 ;
-(id)initWithAttribute:(id)arg1 error:(id*)arg2 ;
-(id)initWithHashAgilityValue:(id)arg1 ;
-(NSData *)hashAgilityValue;
@end

