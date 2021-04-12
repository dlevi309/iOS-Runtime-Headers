/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)functionWithName:(id)arg1 ;
+(void)CAMLParserStartElement:(id)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)inputCount;
-(id)_initWithName:(int)arg1 ;
-(Object*)CA_copyRenderValue;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(unsigned long long)outputCount;
-(BOOL)apply:(const double*)arg1 result:(double*)arg2 ;
-(BOOL)apply:(const double*)arg1 result:(double*)arg2 parameterFunction:(/*function pointer*/void*)arg3 context:(void*)arg4 ;
@end

