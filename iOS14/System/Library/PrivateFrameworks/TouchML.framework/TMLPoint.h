/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)x;
-(CGPoint)point;
-(double)y;
-(id)description;
-(id)CGPointValue;
-(id)initWithPoint:(CGPoint)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

