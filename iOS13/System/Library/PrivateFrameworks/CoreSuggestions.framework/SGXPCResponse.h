/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError;

@interface SGXPCResponse : NSObject <NSSecureCoding> {

	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)response;
+(id)responseWithError:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(id)initWithError:(id)arg1 ;
@end

