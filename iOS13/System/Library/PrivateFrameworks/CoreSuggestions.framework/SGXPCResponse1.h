/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/SGXPCResponse.h>

@protocol NSSecureCoding;
@interface SGXPCResponse1 : SGXPCResponse {

	id<NSSecureCoding> _response1;

}

@property (nonatomic,readonly) id<NSSecureCoding> response1;              //@synthesize response1=_response1 - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)responseWithError:(id)arg1 ;
+(id)responseWith:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setResponse1:(id<NSSecureCoding>)arg1 ;
-(id<NSSecureCoding>)response1;
@end

