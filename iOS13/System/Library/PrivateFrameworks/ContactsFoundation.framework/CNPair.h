/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CNPair : NSObject <NSSecureCoding> {

	id _first;
	id _second;

}

@property (readonly) id first;               //@synthesize first=_first - In the implementation block
@property (readonly) id second;              //@synthesize second=_second - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)pairWithFirst:(id)arg1 second:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)second;
-(id)first;
-(id)initWithFirst:(id)arg1 second:(id)arg2 ;
@end

