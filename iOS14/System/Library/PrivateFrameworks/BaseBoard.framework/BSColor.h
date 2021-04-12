/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSXPCCoding.h>

@class NSString;

@interface BSColor : NSObject <NSCopying, NSSecureCoding, BSXPCCoding> {

	CGColorRef _colorRef;
	double _red;
	double _green;
	double _blue;
	double _alpha;

}

@property (nonatomic,readonly) double red;                          //@synthesize red=_red - In the implementation block
@property (nonatomic,readonly) double green;                        //@synthesize green=_green - In the implementation block
@property (nonatomic,readonly) double blue;                         //@synthesize blue=_blue - In the implementation block
@property (nonatomic,readonly) double alpha;                        //@synthesize alpha=_alpha - In the implementation block
@property (nonatomic,readonly) CGColorRef CGColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)blackColor;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(CGColorRef)CGColor;
-(double)red;
-(double)alpha;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToColor:(id)arg1 ;
-(NSString *)description;
-(double)blue;
-(id)initWithXPCDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(double)green;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

