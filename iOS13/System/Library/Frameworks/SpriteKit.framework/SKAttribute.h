/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)name;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 type:(long long)arg2 ;
-(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)getNameString;
-(BOOL)isEqualToAttribute:(id)arg1 ;
@end

