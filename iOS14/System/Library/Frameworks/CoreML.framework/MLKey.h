/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MLKey : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	NSString* _scope;

}

@property (nonatomic,readonly) NSString * name;               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * scope;              //@synthesize scope=_scope - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)scope;
-(id)initWithKeyName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)scopedTo:(id)arg1 ;
-(id)deletingPrefixingScope:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithKeyName:(id)arg1 scope:(id)arg2 ;
-(BOOL)hasGlobalScope;
-(BOOL)hasSameNameAsKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

