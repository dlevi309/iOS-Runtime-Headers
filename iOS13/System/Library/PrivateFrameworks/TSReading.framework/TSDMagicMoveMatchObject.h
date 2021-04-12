/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class TSDRep, NSMutableDictionary, NSString;

@interface TSDMagicMoveMatchObject : NSObject {

	TSDRep* _rep;
	long long _zOrder;
	NSMutableDictionary* _attributes;
	NSString* _stringValue;
	NSString* _name;
	CGPoint _position;
	NSRange _stringRange;

}

@property (nonatomic,retain) TSDRep * rep;                                  //@synthesize rep=_rep - In the implementation block
@property (assign,nonatomic) CGPoint position;                              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) long long zOrder;                              //@synthesize zOrder=_zOrder - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSString * stringValue;                        //@synthesize stringValue=_stringValue - In the implementation block
@property (assign,nonatomic) NSRange stringRange;                           //@synthesize stringRange=_stringRange - In the implementation block
@property (nonatomic,retain) NSString * name;                               //@synthesize name=_name - In the implementation block
+(id)matchObjectWithTextRep:(id)arg1 position:(CGPoint)arg2 stringValue:(id)arg3 stringRange:(NSRange)arg4 ;
+(id)matchObjectWithRep:(id)arg1 position:(CGPoint)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(void)setName:(NSString *)arg1 ;
-(NSMutableDictionary *)attributes;
-(void)setAttributes:(NSMutableDictionary *)arg1 ;
-(CGPoint)position;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(NSRange)stringRange;
-(long long)zOrder;
-(void)setZOrder:(long long)arg1 ;
-(void)setStringRange:(NSRange)arg1 ;
-(TSDRep *)rep;
-(void)setRep:(TSDRep *)arg1 ;
-(id)initWithRep:(id)arg1 position:(CGPoint)arg2 stringValue:(id)arg3 stringRange:(NSRange)arg4 ;
-(BOOL)conflictsWithMatchObject:(id)arg1 ;
@end

