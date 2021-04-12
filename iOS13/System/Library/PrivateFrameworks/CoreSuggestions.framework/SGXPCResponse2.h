/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/SGXPCResponse1.h>

@protocol NSSecureCoding;
@interface SGXPCResponse2 : SGXPCResponse1 {

	id<NSSecureCoding> _response2;

}

@property (nonatomic,readonly) id<NSSecureCoding> response2;              //@synthesize response2=_response2 - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)responseWithError:(id)arg1 ;
+(id)responseWith:(id)arg1 also:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)response1;
-(void)setResponse2:(id<NSSecureCoding>)arg1 ;
-(id<NSSecureCoding>)response2;
@end

