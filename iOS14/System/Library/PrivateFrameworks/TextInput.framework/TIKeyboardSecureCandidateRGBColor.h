/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TIKeyboardSecureCandidateRGBColor : NSObject <NSCopying, NSSecureCoding> {

	double _colorR;
	double _colorG;
	double _colorB;
	double _colorA;

}

@property (assign,nonatomic) double colorR;              //@synthesize colorR=_colorR - In the implementation block
@property (assign,nonatomic) double colorG;              //@synthesize colorG=_colorG - In the implementation block
@property (assign,nonatomic) double colorB;              //@synthesize colorB=_colorB - In the implementation block
@property (assign,nonatomic) double colorA;              //@synthesize colorA=_colorA - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)blackColor;
+(id)lightGrayColor;
+(id)whiteColor;
-(id)initWithR:(double)arg1 G:(double)arg2 B:(double)arg3 A:(double)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)colorA;
-(void)setColorA:(double)arg1 ;
-(id)description;
-(void)setColorB:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)colorB;
-(double)colorR;
-(void)setColorG:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)colorG;
-(BOOL)isEqual:(id)arg1 ;
-(void)setColorR:(double)arg1 ;
@end

