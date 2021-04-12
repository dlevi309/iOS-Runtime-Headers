/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithKeyName:(id)arg1 ;
-(id)scopedTo:(id)arg1 ;
-(id)deletingPrefixingScope:(id)arg1 ;
-(id)initWithKeyName:(id)arg1 scope:(id)arg2 ;
-(BOOL)hasGlobalScope;
-(BOOL)hasSameNameAsKey:(id)arg1 ;
-(NSString *)scope;
@end

