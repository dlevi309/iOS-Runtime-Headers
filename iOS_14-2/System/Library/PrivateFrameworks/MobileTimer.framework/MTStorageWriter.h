/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <Foundation/NSCoder.h>
#import <libobjc.A.dylib/MTSerializer.h>

@class NSCoder, NSMutableArray;

@interface MTStorageWriter : NSCoder <MTSerializer> {

	NSMutableArray* _stack;

}

@property (nonatomic,retain) NSMutableArray * stack;                   //@synthesize stack=_stack - In the implementation block
@property (nonatomic,readonly) unsigned long long mtType; 
@property (nonatomic,readonly) NSCoder * mtCoder; 
-(unsigned long long)mtType;
-(NSCoder *)mtCoder;
-(void)encodeInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(void)setStack:(NSMutableArray *)arg1 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(NSMutableArray *)stack;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(void)_encodeObject:(id)arg1 forKey:(id)arg2 ;
-(id)_dictionaryForProtocolObject:(id)arg1 ;
-(void)_encodeProtocolObject:(id)arg1 forKey:(id)arg2 ;
-(id)encodedDictionary;
-(id)_serializingProtocol;
@end

