/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface REMColor : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _colorRGBSpace;
	double _blue;
	double _red;
	double _green;
	double _alpha;
	NSString* _daSymbolicColorName;
	NSString* _daHexString;
	NSString* _ckSymbolicColorName;

}

@property (nonatomic,readonly) NSString * daSymbolicColorName;                //@synthesize daSymbolicColorName=_daSymbolicColorName - In the implementation block
@property (nonatomic,readonly) NSString * daHexString;                        //@synthesize daHexString=_daHexString - In the implementation block
@property (nonatomic,readonly) NSString * ckSymbolicColorName;                //@synthesize ckSymbolicColorName=_ckSymbolicColorName - In the implementation block
@property (nonatomic,readonly) unsigned long long colorRGBSpace;              //@synthesize colorRGBSpace=_colorRGBSpace - In the implementation block
@property (nonatomic,readonly) double blue;                                   //@synthesize blue=_blue - In the implementation block
@property (nonatomic,readonly) double red;                                    //@synthesize red=_red - In the implementation block
@property (nonatomic,readonly) double green;                                  //@synthesize green=_green - In the implementation block
@property (nonatomic,readonly) double alpha;                                  //@synthesize alpha=_alpha - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)colorWithHexString:(id)arg1 ;
+(id)redColor;
+(id)grayColor;
+(id)cyanColor;
+(id)blueColor;
+(id)greenColor;
+(id)yellowColor;
+(id)blackColor;
+(id)brownColor;
+(id)purpleColor;
+(id)magentaColor;
+(id)lightGrayColor;
+(id)clearColor;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 targetRGBSpace:(unsigned long long)arg5 ;
+(id)colorWithDictionaryData:(id)arg1 error:(id*)arg2 ;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)orangeColor;
+(id)whiteColor;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(double)red;
-(double)alpha;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)hexString;
-(NSString *)daHexString;
-(double)blue;
-(id)initWithHexString:(id)arg1 ;
-(id)initWithDASymbolicColorName:(id)arg1 daHexString:(id)arg2 ckSymbolicColorName:(id)arg3 ;
-(id)hexStringWithAlpha;
-(NSString *)daSymbolicColorName;
-(NSString *)ckSymbolicColorName;
-(unsigned long long)colorRGBSpace;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(unsigned long long)arg5 daSymbolicColorName:(id)arg6 daHexString:(id)arg7 ckSymbolicColorName:(id)arg8 ;
-(id)initWithDASymbolicColorName:(id)arg1 daHexString:(id)arg2 ;
-(id)archivedDictionaryDataWithError:(id*)arg1 ;
-(id)initWithCKSymbolicColorName:(id)arg1 hexString:(id)arg2 ;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(unsigned long long)arg5 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(double)green;
-(id)initWithWhite:(double)arg1 alpha:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

