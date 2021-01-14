/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)dx;
-(double)dy;
-(CGVector)vector;
-(id)CGVectorValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithVector:(CGVector)arg1 ;
@end

