/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
*/

#import <BrailleTranslation/BrailleTranslation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BRLTBrailleChar : NSObject <NSCopying> {

	unsigned char _bits;

}

@property (assign) BOOL dot1; 
@property (assign) BOOL dot2; 
@property (assign) BOOL dot3; 
@property (assign) BOOL dot4; 
@property (assign) BOOL dot5; 
@property (assign) BOOL dot6; 
@property (assign) BOOL dot7; 
@property (assign) BOOL dot8; 
@property (readonly) NSString * unicode; 
@property (readonly) unsigned char bits; 
+(id)charWithUnichar:(unsigned short)arg1 ;
+(id)charWithBits:(unsigned char)arg1 ;
+(id)charWithUnicode:(id)arg1 ;
+(id)charWithBrf:(id)arg1 ;
-(unsigned char)bits;
-(BOOL)dot1;
-(BOOL)dot2;
-(BOOL)dot3;
-(BOOL)dot4;
-(BOOL)dot5;
-(BOOL)dot6;
-(BOOL)dot7;
-(BOOL)dot8;
-(id)description;
-(unsigned long long)hash;
-(NSString *)unicode;
-(BOOL)_dotUp:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithUnicode:(id)arg1 ;
-(id)initWithBrf:(id)arg1 ;
-(id)initWithUnichar:(unsigned short)arg1 ;
-(id)initWithBits:(unsigned char)arg1 ;
-(void)_setDot:(int)arg1 up:(BOOL)arg2 ;
-(BOOL)isEqualToBrailleChar:(id)arg1 ;
-(void)setDot1:(BOOL)arg1 ;
-(void)setDot2:(BOOL)arg1 ;
-(void)setDot3:(BOOL)arg1 ;
-(void)setDot4:(BOOL)arg1 ;
-(void)setDot5:(BOOL)arg1 ;
-(void)setDot6:(BOOL)arg1 ;
-(void)setDot7:(BOOL)arg1 ;
-(void)setDot8:(BOOL)arg1 ;
@end

