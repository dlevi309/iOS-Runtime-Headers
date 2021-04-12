/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/

#import <TouchML/TouchML-Structs.h>
#import <libobjc.A.dylib/TMLPointJSExports.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TMLPoint : NSObject <TMLPointJSExports, NSCopying> {

	CGPoint _point;

}

@property (nonatomic,readonly) CGPoint point;              //@synthesize point=_point - In the implementation block
@property (nonatomic,readonly) double x; 
@property (nonatomic,readonly) double y; 
+(void)initializeJSContext:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)CGPointValue;
-(CGPoint)point;
-(double)x;
-(double)y;
-(id)initWithPoint:(CGPoint)arg1 ;
@end

