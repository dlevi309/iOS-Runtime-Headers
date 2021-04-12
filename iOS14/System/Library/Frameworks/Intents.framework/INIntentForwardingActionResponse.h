/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError;

@interface INIntentForwardingActionResponse : NSObject <NSSecureCoding> {

	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithError:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSError *)error;
-(id)initWithCoder:(id)arg1 ;
@end

