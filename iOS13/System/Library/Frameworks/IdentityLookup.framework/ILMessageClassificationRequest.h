/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
*/

#import <IdentityLookup/ILClassificationRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface ILMessageClassificationRequest : ILClassificationRequest <NSSecureCoding> {

	NSArray* _messageCommunications;

}

@property (nonatomic,copy,readonly) NSArray * messageCommunications;              //@synthesize messageCommunications=_messageCommunications - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMessageCommunications:(id)arg1 ;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(NSArray *)messageCommunications;
@end

