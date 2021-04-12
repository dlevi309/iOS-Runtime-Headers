/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)functionWithName:(id)arg1 ;
+(id)functionWithControlPoints:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4 ;
+(void)CAMLParserEndElement:(id)arg1 content:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)getControlPointAtIndex:(unsigned long long)arg1 values:(float)arg2 ;
-(float)_solveForInput:(float)arg1 ;
-(id)initWithControlPoints:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4 ;
-(Object*)CA_copyRenderValue;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(void)_getPoints:(double*)arg1 ;
-(id)CAMLType;
-(unsigned long long)CA_copyNumericValue:(double)arg1 ;
@end

