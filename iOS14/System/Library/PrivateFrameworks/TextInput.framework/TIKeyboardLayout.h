/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TIKeyboardLayout : NSObject <NSSecureCoding> {

	BOOL _usesTwoHands;
	unsigned long long _count;
	ShortRect* _frames;
	unsigned long long _framesCapacity;
	char* _strings;
	unsigned long long _stringsSize;
	unsigned long long _stringsCapacity;
	CGRect _frame;

}

@property (assign,nonatomic) BOOL usesTwoHands;              //@synthesize usesTwoHands=_usesTwoHands - In the implementation block
@property (nonatomic,readonly) CGRect frame;                 //@synthesize frame=_frame - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)ensureStringCapacity:(unsigned long long)arg1 ;
-(void)enumerateKeysUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)usesTwoHands;
-(long long)keyContainingPoint:(CGPoint)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGRect)frame;
-(void)setUsesTwoHands:(BOOL)arg1 ;
-(void)addKeyWithString:(id)arg1 frame:(CGRect)arg2 ;
-(id)description;
-(void)ensureFrameCapacity:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(const char*)firstKeyString;
-(CGRect)_decodeCGRectForKey:(id)arg1 withDecoder:(id)arg2 ;
-(void)_encodeCGRect:(CGRect)arg1 forKey:(id)arg2 withCoder:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

