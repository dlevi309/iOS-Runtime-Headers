/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSOrderedSet *)keys;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)keyEnumerator;
-(Class)classForCoder;
-(NSDictionary *)dictionary;
-(id)objectForKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithQueryItems:(id)arg1 ;
@end

