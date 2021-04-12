/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@class NSOrderedSet, NSDictionary;

@interface WFOrderedDictionary : NSDictionary {

	NSOrderedSet* _keys;
	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSOrderedSet * keys;                    //@synthesize keys=_keys - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)allKeys;
-(id)objectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(NSDictionary *)dictionary;
-(NSOrderedSet *)keys;
-(id)initWithQueryItems:(id)arg1 ;
@end

