/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)frame;
-(void)setUsesTwoHands:(BOOL)arg1 ;
-(void)addKeyWithString:(id)arg1 frame:(CGRect)arg2 ;
-(void)_encodeCGRect:(CGRect)arg1 forKey:(id)arg2 withCoder:(id)arg3 ;
-(CGRect)_decodeCGRectForKey:(id)arg1 withDecoder:(id)arg2 ;
-(void)ensureFrameCapacity:(unsigned long long)arg1 ;
-(void)ensureStringCapacity:(unsigned long long)arg1 ;
-(void)enumerateKeysUsingBlock:(/*^block*/id)arg1 ;
-(const char*)firstKeyString;
-(long long)keyContainingPoint:(CGPoint)arg1 ;
-(BOOL)usesTwoHands;
@end

