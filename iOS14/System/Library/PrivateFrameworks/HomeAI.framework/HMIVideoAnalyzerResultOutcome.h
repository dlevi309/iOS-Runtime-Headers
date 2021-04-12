/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface HMIVideoAnalyzerResultOutcome : HMFObject <NSSecureCoding> {

	NSString* _message;
	unsigned long long _code;

}

@property (readonly) unsigned long long code;              //@synthesize code=_code - In the implementation block
@property (readonly) BOOL isSkipped; 
@property (readonly) BOOL isSuccess; 
@property (readonly) NSString * message;                   //@synthesize message=_message - In the implementation block
+(id)success;
+(BOOL)supportsSecureCoding;
+(id)skipped;
-(NSString *)message;
-(BOOL)isSuccess;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)code;
-(id)initWithCode:(unsigned long long)arg1 message:(id)arg2 ;
-(BOOL)isSkipped;
@end

