/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)encodeInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(void)setStack:(NSMutableArray *)arg1 ;
-(NSMutableArray *)stack;
-(id)encodedDictionary;
-(void)_encodeObject:(id)arg1 forKey:(id)arg2 ;
-(id)_serializingProtocol;
-(id)_dictionaryForProtocolObject:(id)arg1 ;
-(void)_encodeProtocolObject:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)mtType;
-(NSCoder *)mtCoder;
@end

