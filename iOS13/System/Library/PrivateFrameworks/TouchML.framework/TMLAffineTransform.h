/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)c;
-(CGAffineTransform)transform;
-(double)tx;
-(double)ty;
-(id)CGAffineTransformValue;
-(double)b;
-(double)a;
-(id)initWithAffineTransform:(CGAffineTransform)arg1 ;
-(double)d;
@end

