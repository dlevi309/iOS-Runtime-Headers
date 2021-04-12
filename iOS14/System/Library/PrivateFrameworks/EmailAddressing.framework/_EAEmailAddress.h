/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailAddressing.framework/EmailAddressing
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _EAEmailAddress : NSObject <NSSecureCoding> {

	NSString* _emailAddress;

}

@property (nonatomic,copy,readonly) NSString * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy,readonly) NSString * rawAddress; 
+(BOOL)supportsSecureCoding;
-(NSString *)emailAddress;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithEmailAddress:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)rawAddress;
-(BOOL)isEqual:(id)arg1 ;
@end

