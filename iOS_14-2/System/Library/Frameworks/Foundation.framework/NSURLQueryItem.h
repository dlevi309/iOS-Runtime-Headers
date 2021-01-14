/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NSURLQueryItem : NSObject <NSSecureCoding, NSCopying> {

	NSString* _name;
	NSString* _value;

}

@property (readonly) NSString * name;               //@synthesize name=_name - In the implementation block
@property (readonly) NSString * value;              //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)queryItemWithName:(id)arg1 value:(id)arg2 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 value:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

