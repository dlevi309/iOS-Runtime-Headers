/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)encoding;
-(unsigned long long)width;
-(unsigned long long)height;
-(unsigned long long)format;
-(id)defaultValue;
-(void)setFormat:(unsigned long long)arg1 ;
-(void)setCurrentValue:(NSData *)arg1 ;
-(void)setEncoding:(NSString *)arg1 ;
-(id)getCurrentValue;
@end

