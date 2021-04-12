/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface VSOptional : NSObject <NSSecureCoding> {

	id _object;

}

@property (nonatomic,retain) id object;              //@synthesize object=_object - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)decodableClasses;
+(id)optionalWithObject:(id)arg1 ;
-(id)unwrapWithFallback:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(void)conditionallyUnwrapObject:(/*^block*/id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)conditionallyUnwrapObject:(/*^block*/id)arg1 otherwise:(/*^block*/id)arg2 ;
-(id)object;
-(void)setObject:(id)arg1 ;
-(id)description;
-(id)forceUnwrapObject;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

