/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <Foundation/NSFormatter.h>

@class AVTimeFormatterInternal;

@interface AVTimeFormatter : NSFormatter {

	AVTimeFormatterInternal* _internal;

}

@property (assign,nonatomic) long long style; 
@property (assign,nonatomic) double formatTemplate; 
@property (assign,getter=isFullWidth,nonatomic) BOOL fullWidth; 
-(id)stringForObjectValue:(id)arg1 ;
-(void)setFormatTemplate:(double)arg1 ;
-(id)locale;
-(void)setLocale:(id)arg1 ;
-(id)init;
-(id)stringFromCMTime:(SCD_Struct_AV6)arg1 ;
-(void)setCachedDateFormatterTemplate:(id)arg1 ;
-(void)setFullWidth:(BOOL)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setNumberFormatterWithTwoMinimumIntegerDigits:(id)arg1 ;
-(BOOL)isRightToLeft;
-(BOOL)isFullWidth;
-(id)numberFormatterWithOneMinimumIntegerDigits;
-(id)stringFromTimeInterval:(double)arg1 ;
-(void)setIsRightToLeft:(BOOL)arg1 ;
-(id)numberFormatterWithTwoMinimumIntegerDigits;
-(id)initWithCoder:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(id)cachedDateFormatterTemplate;
-(id)stringFromSeconds:(double)arg1 ;
-(void)setCachedDateFormatterFormat:(id)arg1 ;
-(double)formatTemplate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)cachedDateFormatterFormat;
-(long long)style;
-(void)dealloc;
-(void)setNumberFormatterWithOneMinimumIntegerDigits:(id)arg1 ;
@end

