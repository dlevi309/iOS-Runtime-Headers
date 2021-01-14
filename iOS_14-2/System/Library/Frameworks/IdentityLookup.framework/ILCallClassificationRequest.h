/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
*/

#import <IdentityLookup/ILClassificationRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface ILCallClassificationRequest : ILClassificationRequest <NSSecureCoding> {

	NSArray* _callCommunications;

}

@property (nonatomic,copy,readonly) NSArray * callCommunications;              //@synthesize callCommunications=_callCommunications - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(NSArray *)callCommunications;
-(id)initWithCallCommunications:(id)arg1 ;
@end

