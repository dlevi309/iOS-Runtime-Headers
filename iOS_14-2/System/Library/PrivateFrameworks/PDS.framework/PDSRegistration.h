/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PDS.framework/PDS
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PDSRegistration : NSObject <NSSecureCoding> {

	char _pushEnvironment;
	NSString* _topicString;
	NSString* _qualifierString;

}

@property (nonatomic,readonly) NSString * topicString;                  //@synthesize topicString=_topicString - In the implementation block
@property (nonatomic,readonly) NSString * qualifierString;              //@synthesize qualifierString=_qualifierString - In the implementation block
@property (nonatomic,readonly) char pushEnvironment;                    //@synthesize pushEnvironment=_pushEnvironment - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(char)pushEnvironment;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithTopic:(id)arg1 qualifier:(id)arg2 pushEnvironment:(char)arg3 ;
-(BOOL)isEqualToRegistration:(id)arg1 ;
-(NSString *)topicString;
-(NSString *)qualifierString;
@end

