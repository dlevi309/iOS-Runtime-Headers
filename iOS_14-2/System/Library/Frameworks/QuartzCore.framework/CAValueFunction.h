/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CAValueFunction : NSObject <NSSecureCoding> {

	NSString* _string;
	void* _impl;

}

@property (readonly) NSString * name; 
+(BOOL)supportsSecureCoding;
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)functionWithName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(NSString *)name;
-(unsigned long long)outputCount;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(BOOL)apply:(const double*)arg1 result:(double*)arg2 ;
-(BOOL)apply:(const double*)arg1 result:(double*)arg2 parameterFunction:(/*function pointer*/void*)arg3 context:(void*)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)inputCount;
-(id)_initWithName:(int)arg1 ;
-(void)dealloc;
@end

