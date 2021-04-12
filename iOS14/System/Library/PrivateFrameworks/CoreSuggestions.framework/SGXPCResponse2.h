/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/SGXPCResponse1.h>

@protocol NSSecureCoding;
@interface SGXPCResponse2 : SGXPCResponse1 {

	id<NSSecureCoding> _response2;

}

@property (nonatomic,readonly) id<NSSecureCoding> response2;              //@synthesize response2=_response2 - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)responseWith:(id)arg1 also:(id)arg2 ;
+(id)responseWithError:(id)arg1 ;
-(id<NSSecureCoding>)response2;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setResponse2:(id<NSSecureCoding>)arg1 ;
-(id)response1;
@end

