/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <Foundation/NSCoder.h>
#import <libobjc.A.dylib/MTSerializer.h>

@class NSMutableArray, NSCoder;

@interface MTStorageReader : NSCoder <MTSerializer> {

	NSMutableArray* _stack;

}

@property (nonatomic,retain) NSMutableArray * stack;                   //@synthesize stack=_stack - In the implementation block
@property (nonatomic,readonly) unsigned long long mtType; 
@property (nonatomic,readonly) NSCoder * mtCoder; 
+(id)_unwrap:(id)arg1 ;
+(BOOL)_dictionaryIsForSerializableObject:(id)arg1 ;
-(unsigned long long)mtType;
-(id)decodeObjectForKey:(id)arg1 ;
-(id)initWithEncodedDictionary:(id)arg1 ;
-(id)_decodeObject:(id)arg1 ;
-(NSCoder *)mtCoder;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(void)setStack:(NSMutableArray *)arg1 ;
-(long long)decodeIntegerForKey:(id)arg1 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(int)decodeIntForKey:(id)arg1 ;
-(id)_objectForDictionary:(id)arg1 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(NSMutableArray *)stack;
-(BOOL)allowsKeyedCoding;
@end

