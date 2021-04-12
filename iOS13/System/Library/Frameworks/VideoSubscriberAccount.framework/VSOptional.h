/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)object;
-(id)initWithObject:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(id)forceUnwrapObject;
-(id)unwrapWithFallback:(id)arg1 ;
-(void)conditionallyUnwrapObject:(/*^block*/id)arg1 ;
-(void)conditionallyUnwrapObject:(/*^block*/id)arg1 otherwise:(/*^block*/id)arg2 ;
@end

