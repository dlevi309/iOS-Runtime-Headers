/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
*/

#import <CoreIDV/DIAttribute.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface DIAttributeImage : DIAttribute <NSSecureCoding> {

	NSData* currentValue;
	NSString* _encoding;
	unsigned long long _format;
	unsigned long long _height;
	unsigned long long _width;

}

@property (nonatomic,copy) NSString * encoding;                                       //@synthesize encoding=_encoding - In the implementation block
@property (getter=getCurrentValue,nonatomic,copy) NSData * currentValue; 
@property (assign,nonatomic) unsigned long long format;                               //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) unsigned long long height;                             //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) unsigned long long width;                              //@synthesize width=_width - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setFormat:(unsigned long long)arg1 ;
-(unsigned long long)format;
-(unsigned long long)width;
-(void)setEncoding:(NSString *)arg1 ;
-(id)init;
-(id)defaultValue;
-(NSString *)encoding;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)height;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setCurrentValue:(NSData *)arg1 ;
-(id)getCurrentValue;
@end

