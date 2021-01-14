/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface _NSJSONRoundTrippingNumber : NSObject <NSSecureCoding> {

	NSNumber* _number;
	NSString* _representation;

}
+(BOOL)supportsSecureCoding;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(BOOL)isSubclassOfClass:(Class)arg1 ;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
-(BOOL)isNSNumber__;
-(BOOL)isEqualToNumber:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(Class)superclass;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)stringValue;
-(id)initWithNumber:(id)arg1 representation:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(BOOL)_allowsDirectEncoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
@end

