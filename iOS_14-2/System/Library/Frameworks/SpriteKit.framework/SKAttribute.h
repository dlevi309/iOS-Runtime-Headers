/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SKAttribute : NSObject <NSSecureCoding> {

	long long _type;
	NSString* _name;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > _nameString;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) long long type; 
+(BOOL)supportsSecureCoding;
+(id)attributeWithName:(id)arg1 type:(long long)arg2 ;
-(id)initWithName:(id)arg1 type:(long long)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)getNameString;
-(BOOL)isEqualToAttribute:(id)arg1 ;
@end

