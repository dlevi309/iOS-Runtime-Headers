/*
* Generated on Thursday, January 14, 2021 at 2:28:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/

#import <TouchML/TouchML-Structs.h>
#import <libobjc.A.dylib/TMLAffineTransformJSExports.h>

@interface TMLAffineTransform : NSObject <TMLAffineTransformJSExports> {

	CGAffineTransform _transform;

}

@property (nonatomic,readonly) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
@property (nonatomic,readonly) double a; 
@property (nonatomic,readonly) double b; 
@property (nonatomic,readonly) double c; 
@property (nonatomic,readonly) double d; 
@property (nonatomic,readonly) double tx; 
@property (nonatomic,readonly) double ty; 
+(void)initializeJSContext:(id)arg1 ;
-(double)d;
-(double)b;
-(double)c;
-(double)tx;
-(double)ty;
-(CGAffineTransform)transform;
-(id)CGAffineTransformValue;
-(double)a;
-(id)initWithAffineTransform:(CGAffineTransform)arg1 ;
@end

