/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/

#import <TouchML/TouchML-Structs.h>
#import <libobjc.A.dylib/TMLVectorJSExports.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TMLVector : NSObject <TMLVectorJSExports, NSCopying> {

	CGVector _vector;

}

@property (nonatomic,readonly) CGVector vector;              //@synthesize vector=_vector - In the implementation block
@property (nonatomic,readonly) double dx; 
@property (nonatomic,readonly) double dy; 
+(void)initializeJSContext:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)CGVectorValue;
-(double)dx;
-(id)initWithVector:(CGVector)arg1 ;
-(CGVector)vector;
-(double)dy;
@end

