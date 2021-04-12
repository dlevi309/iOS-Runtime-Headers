/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CAMediaTimingFunction : NSObject <NSSecureCoding> {

	CAMediaTimingFunctionPrivate* _priv;

}
+(id)uiFunctionWithControlPoints:(const CGPoint*)arg1 ;
+(id)_kbTimingFunction;
+(BOOL)supportsSecureCoding;
+(void)CAMLParserEndElement:(id)arg1 content:(id)arg2 ;
+(id)functionWithControlPoints:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4 ;
+(id)functionWithName:(id)arg1 ;
-(id)initWithControlPoints:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4 ;
-(float)_solveForInput:(float)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(id)CAMLType;
-(id)description;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(void)_getPoints:(double*)arg1 ;
-(unsigned long long)CA_copyNumericValue:(double)arg1 ;
-(void)getControlPointAtIndex:(unsigned long long)arg1 values:(float)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end

