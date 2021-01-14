/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <Foundation/NSCoder.h>

@class NSArray;

@interface NEHasher : NSCoder {

	CC_SHA1state_st* _sha1Context;
	NSArray* _classPrefixWhitelist;

}

@property (assign) CC_SHA1state_st* sha1Context;                //@synthesize sha1Context=_sha1Context - In the implementation block
@property (retain) NSArray * classPrefixWhitelist;              //@synthesize classPrefixWhitelist=_classPrefixWhitelist - In the implementation block
+(id)hashObject:(id)arg1 withClassPrefixWhitelist:(id)arg2 ;
+(id)hashObject:(id)arg1 ;
-(id)decodeObjectForKey:(id)arg1 ;
-(BOOL)containsValueForKey:(id)arg1 ;
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(void)decodeValueOfObjCType:(const char*)arg1 at:(void*)arg2 ;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2 ;
-(void)encodeBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)decodeDataObject;
-(void)encodeInteger:(long long)arg1 forKey:(id)arg2 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(long long)decodeIntegerForKey:(id)arg1 ;
-(void)encodeDataObject:(id)arg1 ;
-(id)init;
-(int)decodeInt32ForKey:(id)arg1 ;
-(int)decodeIntForKey:(id)arg1 ;
-(void)encodeConditionalObject:(id)arg1 forKey:(id)arg2 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(long long)versionForClassName:(id)arg1 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(CC_SHA1state_st*)sha1Context;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(BOOL)allowsKeyedCoding;
-(void)setClassPrefixWhitelist:(NSArray *)arg1 ;
-(void)encodeBytes:(const char*)arg1 length:(unsigned long long)arg2 forKey:(id)arg3 ;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeValueOfObjCType:(const char*)arg1 at:(const void*)arg2 ;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(id)decodePropertyListForKey:(id)arg1 ;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(void)setSha1Context:(CC_SHA1state_st*)arg1 ;
-(id)finishHashing;
-(NSArray *)classPrefixWhitelist;
-(void)dealloc;
@end

