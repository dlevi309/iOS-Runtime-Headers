/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)emailAddress;
-(id)initWithEmailAddress:(id)arg1 ;
-(NSString *)rawAddress;
@end

