/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
*/

#import <libobjc.A.dylib/MSCMSAttributeCoder.h>

@class NSSet;

@interface MSCMSSMIMECapabilitiesAttribute : NSObject <MSCMSAttributeCoder> {

	NSSet* _capabilities;

}

@property (readonly) NSSet * capabilities;              //@synthesize capabilities=_capabilities - In the implementation block
-(NSSet *)capabilities;
-(id)init;
-(id)encodeAttributeWithError:(id*)arg1 ;
-(id)initWithAttribute:(id)arg1 error:(id*)arg2 ;
@end

